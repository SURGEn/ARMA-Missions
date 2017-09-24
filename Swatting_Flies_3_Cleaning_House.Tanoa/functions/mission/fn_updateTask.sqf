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
		// Create a new task, and assign it to all players.
		[[true, "zeus_unit"], "task3", ["Demo task 3 description", "Demo Task", ""], objNull, "ASSIGNED", 0, true, "run", true] call BIS_fnc_taskCreate;
	};
	
	case "exfil_down": {
		["exfiltrate", "FAILED", false] call BIS_fnc_taskSetState;
		[] remoteExec ["clearRadio", 0];
		[] spawn {sleep 3; ["heliShotDown", true, 10, false, false] remoteExec ["BIS_fnc_endMission", 0];};
	};
	
	case "found_drugs": {
		["aquireDrugs", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	case "accountant_dead": {
		removeFromRemainsCollector [accountant];
		["killAccountant", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	case "planted_accountant": {
		["plantDrugsAccountant", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	case "finances_taken": {
		["evidenceAccountant", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		deleteVehicle finances;
	};
	
	case "accountant_finished": {
		objectives = ("dealWithAccountant" call BIS_fnc_taskChildren);
		objectivesFailed = ({_x call BIS_fnc_taskState isEqualTo "FAILED"} count objectives);
		if(objectivesFailed > 1) 
		then {["dealWithAccountant", "FAILED", true] call BIS_fnc_taskSetState;} 
		else {["dealWithAccountant", "SUCCEEDED", true] call BIS_fnc_taskSetState;};
	};
	
	case "bodyguard_dead": {
		removeFromRemainsCollector [bodyguard];
		["killBodyguard", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	case "planted_bodyguard": {
		["plantDrugsBodyguard", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	case "testimony_taken": {
		["evidenceBodyguard", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		deleteVehicle testimony;
	};
	
	case "bodyguard_finished": {
		objectives = ("dealWithBodyguard" call BIS_fnc_taskChildren);
		objectivesFailed = ({_x call BIS_fnc_taskState isEqualTo "FAILED"} count objectives);
		if(objectivesFailed > 1) 
		then {["dealWithBodyguard", "FAILED", true] call BIS_fnc_taskSetState;} 
		else {["dealWithBodyguard", "SUCCEEDED", true] call BIS_fnc_taskSetState;};
	};
	
	case "photographer_dead": {
		removeFromRemainsCollector [photographer];
		["killPhotographer", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	case "planted_photographer": {
		["plantDrugsPhotographer", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	case "photos_taken": {
		["evidencePhotographer", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		deleteVehicle photos;
	};
	
	case "photographer_finished": {
		objectives = ("dealWithPhotographer" call BIS_fnc_taskChildren);
		objectivesFailed = ({_x call BIS_fnc_taskState isEqualTo "FAILED"} count objectives);
		if(objectivesFailed > 1) 
		then {["dealWithPhotographer", "FAILED", true] call BIS_fnc_taskSetState;} 
		else {["dealWithPhotographer", "SUCCEEDED", true] call BIS_fnc_taskSetState;};
	};
	
	case "whistleblowers_done": {
		[ [true, "zeus_unit"], ["exfiltrate"], ["Exfiltrate the AO from the helicopter located north of Katkoula.", "Exfiltrate", "marker"], getMarkerPos "exfilMarker", "ASSIGNED", 10, true, "run", true ] call BIS_fnc_taskCreate;
		//exfilHelo = ([markerPos "exfilMarker", 90, "CUP_B_CH53E_USMC", WEST] call bis_fnc_spawnvehicle) select 0;
		exfilHelo = createVehicle ["CUP_B_CH53E_USMC", markerPos "exfilMarker", [], 0, "NONE"];
		_grp = createGroup blufor;
		_pilot1 = _grp createUnit ["CUP_B_US_Pilot_Light", position exfilHelo, [], 0, ""];
		_pilot1 moveInDriver exfilHelo;
		_pilot1 disableAI "AUTOTARGET";
		_pilot1 disableAI "TARGET";
		[_pilot1] remoteExec ["SXP_fnc_addUnitToZeus", 2];
		_pilot2 = _grp createUnit ["CUP_B_US_Pilot_Light", position exfilHelo, [], 0, ""];
		_pilot2 moveInGunner exfilHelo;
		_pilot2 disableAI "AUTOTARGET";
		_pilot2 disableAI "TARGET";
		[_pilot2] remoteExec ["SXP_fnc_addUnitToZeus", 2];
		_grp setBehaviour "CARELESS";
		[gunner exfilHelo, "TOC this is your exfil. We are standing by at the marked location. We'll liftoff once all your boys are loaded in."] remoteExec ["sideChat", 0];
		exfilHelo setVehicleAmmo 0;
		exfilHelo flyInHeight 80; 
		exfilHelo lockDriver true;
		exfilHelo lockTurret [[0],true];
		exfilHelo addEventHandler ["HandleDamage", {
		_heli = _this select 0;
		if((position _heli) select 2 > 10) then {
		jetgroup setCombatMode "BLUE";
		[vehicle gunner _heli, "Shit! We're going down!"] remoteExec ["vehicleChat", 0];
		_heli setHitPointDamage ["hitVRotor", 1];
		_heli setFuel 0;
		_heli setVelocity [10, 10, -30];
		driver _heli setDamage 1;
		gunner _heli setDamage 1;
		_heli removeEventHandler["HandleDamage", _thisEventHandler];};
		0}];
	};
};