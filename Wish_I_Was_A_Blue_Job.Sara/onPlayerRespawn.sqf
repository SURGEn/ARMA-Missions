// onPlayerRespawn.sqf
// Executes on a player's machine when they respawn
// _this = [<newUnit>, <oldUnit>, <respawn>, <respawnDelay>]
_this params ["_newUnit", "_oldUnit", "_respawn", "_respawnDelay"];
["Terminate"] call BIS_fnc_EGSpectator;

// Call the template onPlayerRespawn function
_this call XPT_fnc_onPlayerRespawn; // DO NOT CHANGE THIS LINE

// Add any mission specific code after this point

_newUnit setObjectTextureGlobal [0, "media\camo\rac_co.paa"]; 

[_newUnit, [0, "media\camo\rac_co.paa"]] remoteExec ["setObjectTexture", 0];


{
	_x setObjectTextureGlobal [0, "media\camo\rac_co.paa"]; 
} forEach allPlayers;
