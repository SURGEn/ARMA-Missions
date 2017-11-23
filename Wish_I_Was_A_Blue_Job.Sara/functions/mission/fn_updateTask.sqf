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
};

