// Function for updating mission tasks when objectives are completed.
// Only execute on the server. Tasks should only be created server-side.
if (!isServer) exitWith {};

// Code for task updates goes into these fields. Can be any code required, including new task creation, task state updates, etc.
switch (toLower (_this select 0)) do 
{
	
	case "base_captured": 
	{
		// Setting a task state to completed
		["captureBase", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		{[_x, true] call ACE_captives_fnc_setSurrendered;} forEach (_this select 1);
		"respawn_west" setMarkerPos getMarkerPos "baseMarker";
	};
	
	case "airstrip_captured": 
	{
		// Setting a task state to completed
		["captureAirstrip", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		{[_x, true] call ACE_captives_fnc_setSurrendered;} forEach (_this select 1);
		{
			_x allowDamage true;
			_x setVehicleLock "UNLOCKED";
		} forEach airstripVehicles;
		"respawn_west" setMarkerPos getMarkerPos "airbaseMarker";
	};
	
	case "entering_airstrip":
	{
		[] spawn 
		{
			["blueJob"] remoteExec ["playMusic", 0];
			sleep 300;
			[""] remoteExec ["playMusic", 0];
		};
	};
	
	case "entering_parliament":
	{
		[] spawn 
		{
			["neverDie"] remoteExec ["playMusic", 0];
			sleep 300;
			[""] remoteExec ["playMusic", 0];
		};
	};
	
	case "ian_smith_rescued": 
	{
		["rescueSmith", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	
	case "ian_smith_dead": 
	{
		["rescueSmith", "FAILED", true] call BIS_fnc_taskSetState;
	};
	
	case "mugabe_dead":
	{
		["killMugabe", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		
	};
	
	case "invade_harare":
	{
		[zimbabweFlag,  "Raise Rhodesian Flag",  "",  "",  "_this distance _target < 5",  "_caller distance _target < 5",  {[(_this select 0), 0, false] call BIS_fnc_animateFlag}, {}, {["flag_lowered"] remoteExec ["MLY_fnc_updateTask", 2]}, {[(_this select 0), 1, false] call BIS_fnc_animateFlag}, [], 10, 1, true, false] remoteExec ["BIS_fnc_holdActionAdd", 0, true];
		[[true, "zeus_unit"], ["raiseFlag"], ["Attack the parliamentary palace and raise the flag of Rhodesia upon it's roof.", "Raise the flag", "marker"], getMarkerPos "flagMarker", "ASSIGNED", 10, true, "target", true] call BIS_fnc_taskCreate;
		
	};
	
	case "flag_lowered":
	{
		zimbabweFlag setFlagTexture "media\flags\rhodesiaFlag.jpg";
		[zimbabweFlag, 1, false] call BIS_fnc_animateFlag;
		["raiseFlag", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		[] spawn 
		{
			[""] remoteExec ["playMusic", 0];
			[["neverDie", 178]] remoteExec ["playMusic", 0];
			sleep 16;
			["standTallInTheSun", true, true, false] remoteExec ["BIS_fnc_endMission", 0];
		};
	};
};

