// onPlayerKilled.sqf
// Executes on a player's machine when they die
// _this = [<oldUnit>, <killer>, <respawn>, <respawnDelay>]
_this params ["_oldUnit", "_killer", "_respawn", "_respawnDelay"];

[_oldUnit] call SXP_fnc_saveRadioSettings;

// Add any mission specific code after this point
//if(shotDown) then {titleText ["TO BE CONTINUED", "BLACK", -1, true, true];};

//player addEventHandler["Killed", {if(shotDown) then {titleText ["TO BE CONTINUED", "BLACK", -1, true, true];};}];