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
		["exfiltrate", "FAILED", true] call BIS_fnc_taskSetState;
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
};