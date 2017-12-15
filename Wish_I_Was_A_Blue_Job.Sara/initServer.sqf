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


jet setObjectTextureGlobal [0, "media\camo\Buzzard_1.jpg"]; 
jet setObjectTextureGlobal [1, "media\camo\Buzzard_2.jpg"]; 
[box1, transport1] call ace_cargo_fnc_loadItem;
[box2, transport2] call ace_cargo_fnc_loadItem;

airstripVehicles = [jet, transport1, transport2, fuelTruck, ammoTruck, repairTruck];
{
	_x allowDamage false;
	_x setVehicleLock "LOCKED";
} forEach airstripVehicles;

  
{  
 for "_i" from 0 to count (getAllHitPointsDamage _x select 0) do  
    {  
        if((((getAllHitPointsDamage _x select 0) select _i) find "Glass") != -1) then {_x setHitIndex [_i, 1];};  
    };  
} forEach allMissionObjects "House"; 
doomHouse allowDamage false;
ianHouse allowDamage false;
mugabeHouse allowDamage false;

{
	_x setObjectTextureGlobal [0, "media\camo\rac_co.paa"]; 
} forEach allPlayers;