_this params ["_bombs", "_task", "_bombCount", "_timer"];

sleep _timer;
if (_task call BIS_fnc_taskCompleted) exitWith {};
if (({!(isNull _x)}count _bombs) < (floor (_bombCount/2))) then 
{
	//hint format ["%1 < %2", ({!(isNull _x)}count _bombs), (_bombCount/2)];
	[_task, "SUCCEEDED", true] call BIS_fnc_taskSetState;
} else 
{
	[_task, "FAILED", true] call BIS_fnc_taskSetState;
};
{
	_x setDamage 1; 
	//Badda Bing
} forEach _bombs; 
//Badda Boom