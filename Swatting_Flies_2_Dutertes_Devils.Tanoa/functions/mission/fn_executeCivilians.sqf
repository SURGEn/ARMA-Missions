_this params ["_civs", "_timer"];
sleep _timer;
{
	_x setCaptive false; 
} forEach units _civs; 