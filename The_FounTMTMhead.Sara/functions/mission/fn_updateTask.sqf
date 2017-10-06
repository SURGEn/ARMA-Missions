// Function for updating mission tasks when objectives are completed.
// Only execute on the server. Tasks should only be created server-side.
if (!isServer) exitWith {};

// Code for task updates goes into these fields. Can be any code required, including new task creation, task state updates, etc.
switch (toLower (_this select 0)) do {
	case "example1": {
		// Setting a task state to completed
		["task1", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	
	case "sams_disabled": {
		{
			{
				deleteVehicle _x;
			} forEach crew _x;
		} forEach [sam1, sam2, sam3, sam4, sam5];
		["disableAA", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		aaLaptop removeAction 0;
	};
	
	case "officer_killed": {
		{
			_x setSkill 0.35;
			hint format ["AI skill is: %1", skill _x];
		} forEach (allUnits - allPlayers);
		["killOfficer", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	case "market_freed": {
		["freeMarket", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	case "airfield_taken": {
		["captureAirstrip", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		{
			[_x, true] call ACE_captives_fnc_setSurrendered;
		} forEach (_this select 1);
	};
	
	case "deed_taken": {
		["seizeDeed", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		deleteVehicle deed;
	};
	
	case "printer_destroyed": {
		["disablePress", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		deleteVehicle printer;
	};
	
	case "helicopter_fuel_start": {
		[
			[true, "zeus_unit"], // Owners of the task. See wiki page for details
			["stopHelicopters", "captureAirstrip"], // Name of the task, along with parent name. Parent name is used for nested tasks
			["The enemy is trying to fuel up their Apache helicopters, disable them or kill the crews.", "Stop Apache Refueling", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
			position apache2, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
			"ASSIGNED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
			10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
			true, // Show notification. Leave this as true. Set to false to disable task popup
			"destroy", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
			true // Share task. If true, game will report which players have the task selected.	
		] call BIS_fnc_taskCreate;
		[] spawn {sleep 1500; ["helicopter_fuel_end"] call SXP_fnc_UpdateTask;}
	};
	
	case "helicopter_fuel_end": {
		if(!(["stopHelicopters"] call BIS_fnc_taskCompleted)) then {
			["stopHelicopters", "FAILED", true] call BIS_fnc_taskSetState;
			_apaches = [apache1, apache2, apache3];
			_pilots = [pilot1, pilot2, pilot3];
			_gunners = [gunner1, gunner2, gunner3];
			_crews = [helicrew1, helicrew2, helicrew3];
			{	
				(_pilots select _forEachIndex) assignAsDriver (_apaches select _forEachIndex);
				(_gunners select _forEachIndex) assignAsGunner (_apaches select _forEachIndex);
				_x addWaypoint [ (_apaches select _forEachIndex), 0];
				[_x, 0] setWaypointType "MOVE";
				_x addWaypoint [ (_apaches select _forEachIndex), 0];
				[_x, 1] setWaypointType "GETIN";
				_x addWaypoint [ (_apaches select _forEachIndex), 0];
				[_x, 2] setWaypointType "SAD";
				[_x, 2] setWaypointBehaviour "AWARE";
			} forEach _crews;
		};
	};
	
	case "helicopter_disabled": {
		if(!(["stopHelicopters"] call BIS_fnc_taskCompleted)) then {
			["stopHelicopters", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		};
	};
	
	case "spring_ambush":{
		{
			_x setUnitPos "UP";
			_x setDir (getDir _x) + 90;
		} forEach units ambushers1;
		ambushers1 setCombatMode "RED";
		ambushers1 setBehaviour "COMBAT";
	};
};