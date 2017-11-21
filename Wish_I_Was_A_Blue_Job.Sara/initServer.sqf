// initServer.sqf
// Executes only on the server at mission start
// No parameters are passed to this script

// Create a list of mission objects that should not be curator editable
XPT_blacklistedMissionObjects = [];

// Call the template initServer function
[] call XPT_fnc_initServer; // DO NOT CHANGE THIS LINE

// Call the script to handle initial task setup
[] execVM "scripts\tasks.sqf";

// Add any mission specific code after this point


_groups = [];
{_groups pushBackUnique group _x} forEach playableUnits;
[getMarkerPos "startMarker", _groups] call MLY_fnc_setupMarkers;

/*_allPlayers = playableUnits - allCurators;
{
	_x setObjectTextureGlobal [0, "media\camo\shrugs2small.paa"]; 
} forEach _allPlayers;*/
jet setObjectTextureGlobal [0, "media\camo\Buzzard_1.jpg"]; 
jet setObjectTextureGlobal [1, "media\camo\Buzzard_2.jpg"]; 