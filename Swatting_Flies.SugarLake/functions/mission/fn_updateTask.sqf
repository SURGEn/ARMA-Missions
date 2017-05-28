// Function for updating mission tasks when objectives are completed.
// Only execute on the server. Tasks should only be created server-side.
if (!isServer) exitWith {};

// Code for task updates goes into these fields. Can be any code required, including new task creation, task state updates, etc.
switch (toLower (_this select 0)) do {
	
	case "early_warning_left": {
		// This check is required to make the tasks show up properly for zeus
		if (isNil "zeus_unit") then {
			// Create the task for cases where zeus doesn't exist
			[true,  "stopWarningSquad", ["Some smugglers are attempting to escape by boat, kill them before they warn their allies!", "Kill Escaping Smugglers", "marker"], objNull, "CREATED", 0, true, "kill", true] call BIS_fnc_taskCreate;
		} else {
			// Create the task for cases where zeus exists
			[[true, zeus_unit], "stopWarningSquad", ["Some smugglers are attempting to escape by boat, kill them before they warn their allies!", "Kill Escaping Smugglers", "marker"], objNull, "CREATED", 0, true, "kill", true] call BIS_fnc_taskCreate;
		};
	};
	case "early_warning_arrived": {
		["stopWarningSquad", "FAILED", true] call BIS_fnc_taskSetState;
	};
	case "early_warning_killed": {
		["stopWarningSquad", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		{  
			if(floor(random 3) == 1) then 
			{  
				deleteVehicle  _x;  
			}; 
		} forEach units hotelBoys;
	};
	case "drugs_destroyed": {
		["destroyDrugs", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "smugglers_dead": {
		["killSmugglers", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	case "found_intel": {
		["findIntel", "SUCCEEDED", true] call BIS_fnc_taskSetState; 
		if (isNil "zeus_unit") then {
			// Create the task for cases where zeus doesn't exist
			[true,  "investigateHotel", ["The intelligence you found got us a lead on Tony Pajamas' location, once you've cleared the smugglers base head to the Belle Fiolle Hotel and search it for Tony Pajamas. 
			He's paranoid, so expect a large amount of resistance.", "Investigate the Belle Fiolle", "marker"], getMarkerPos "hotelMarker", "CREATED", 0, true, "search", true] call BIS_fnc_taskCreate;
		} else {
			// Create the task for cases where zeus exists
			[[true, zeus_unit], "investigateHotel", ["The intelligence you found got us a lead on Tony Pajamas' location, once you've cleared the smugglers base head to the Belle Fiolle Hotel and search it for Tony Pajamas. 
			He's paranoid, so expect a large amount of resistance.", "Investigate the Belle Fiolle", "marker"], getMarkerPos "hotelMarker", "CREATED", 0, true, "search", true] call BIS_fnc_taskCreate;
		};
		laptopDrugs removeAction 0;
	};
	case "hotel_clear": {
		["investigateHotel", "SUCCEEDED", true] call BIS_fnc_taskSetState; 
		if (isNil "zeus_unit") then {
			// Create the task for cases where zeus doesn't exist
			[true,  "neutralizeTony", ["Turns out Tony got tipped off that we were coming after him, he's escaped to a nearby airfield and is currently in the process of fleeing. 
			We can't let him escape, capture or kill Tony Pajamas before his helicopter leaves the area.", "Capture or Kill Tony Pajamas", "marker"], getMarkerPos "tonyMarker", "CREATED", 0, true, "kill", true] call BIS_fnc_taskCreate;
		} else {
			// Create the task for cases where zeus exists
			[[true, zeus_unit], "neutralizeTony", ["Turns out Tony got tipped off that we were coming after him, he's escaped to a nearby airfield and is currently in the process of fleeing. 
			We can't let him escape, capture or kill Tony Pajamas before his helicopter leaves the area.", "Capture or Kill Tony Pajamas", "marker"], getMarkerPos "tonyMarker", "CREATED", 0, true, "kill", true] call BIS_fnc_taskCreate;
		};
		laptopHotel removeAction 0;
	};
	case "tony_neutralized": {
		["neutralizeTony", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		["tonyNeutralized", true] remoteExec ["BIS_fnc_endMission", 0];
	};
	case "tony_escaped": {
		["neutralizeTony", "FAILED", true] call BIS_fnc_taskSetState;
		["tonyEscaped", false] remoteExec ["BIS_fnc_endMission", 0];
	};
};