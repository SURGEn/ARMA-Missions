// Function for updating mission tasks when objectives are completed.
// Only execute on the server. Tasks should only be created server-side.
if (!isServer) exitWith {};

// Code for task updates goes into these fields. Can be any code required, including new task creation, task state updates, etc.
switch (toLower (_this select 0)) do {
	case "example1": {
		// Setting a task state to completed
		["task1", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "example2": {
		// Setting a task state to failed
		["task2", "FAILED", true] call BIS_fnc_taskSetState;
	};
	case "example_newtask": {
		// This check is required to make the tasks show up properly for zeus
		if (isNil "zeus_unit") then {
			// Create the task for cases where zeus doesn't exist
			[true, "task3", ["Demo task 3 description", "Demo Task", ""], objNull, "ASSIGNED", 0, true, "run", true] call BIS_fnc_taskCreate;
		} else {
			// Create the task for cases where zeus exists
			[[true, zeus_unit], "task3", ["Demo task 3 description", "Demo Task", ""], objNull, "ASSIGNED", 0, true, "run", true] call BIS_fnc_taskCreate;
		};
	};
	
	case "informant_rescued": {
		if (alive informant)
		then {
			["rescueInformant", "SUCCEEDED", true] call BIS_fnc_taskSetState;
			{ _x setMarkerAlpha 1; } forEach mineBombMarkers;
			{ _x setMarkerAlpha 1; } forEach commsBombMarkers;
			{ _x setMarkerAlpha 1; } forEach factoryBombMarkers;
			"commsCivMarker" setMarkerAlpha 1;
			"factoryCivMarker" setMarkerAlpha 1;
			"mineCivMarker" setMarkerAlpha 1;
			_task = (enemyClothing select 4);
			_descUpdate = "UPDATE: The informant revealed to us that the hostages at this location have been dressed in terrorist uniforms. Watch your fire and pay attention before engaging.";
			[_task, [_descUpdate, ((_task call BIS_fnc_taskDescription) select 1), ((_task call BIS_fnc_taskDescription) select 2)]] call BIS_fnc_taskSetDescription; 
			_task = (deadmanSwitch select 4);
			_descUpdate = "UPDATE: The informant revealed to us that there is a terrorist at this location with a deadman switch linked to the explosives which will activate their backup short fuse timer, lowering the time until detonation significantly. He is wearing an urban uniform, do not engage him until you've disarmed all explosives if possible.";
			[_task, [_descUpdate, ((_task call BIS_fnc_taskDescription) select 1), ((_task call BIS_fnc_taskDescription) select 2)]] call BIS_fnc_taskSetDescription; 
			"The informant has been rescued! We've recieved vital intel, check the task descriptions for more details." remoteExec ["hint"]; 
		} else {
			["rescueInformant", "FAILED", true] call BIS_fnc_taskSetState;
			"The informant has died! We'll just need to find the bombs and civilians on our own. Be ready for anything." remoteExec ["hint"]; 
		};
	};
	
	case "mine_bombs_disarmed": {
		if(!("bombsMine" call BIS_fnc_taskCompleted)) 
		then
		{
			["bombsMine", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		};
	};
	
	case "factory_bombs_disarmed": {
		if(!("bombsFactory" call BIS_fnc_taskCompleted)) 
		then
		{
			["bombsFactory", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		};
	};
	
	case "comms_bombs_disarmed": {
		if(!("bombsComms" call BIS_fnc_taskCompleted)) 
		then
		{
			["bombsComms", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		};
	};
};



