// initServer.sqf
// Executes only on the server at mission start
// No parameters are passed to this script

// Initialise dynamic groups
["Initialize", [true]] call BIS_fnc_dynamicGroups;

// Initialize our headless client variables
sxp_hc_clientID = 0;
sxp_hc_enabled = false;
sxp_hc_zeusEnabled = true;

// Push the HC variables to all clients
{
	publicVariable _x;
} forEach ["sxp_hc_clientID", "sxp_hc_enabled", "sxp_hc_zeusEnabled"];

// Add the event handler for handling HC disconnects
addMissionEventHandler ["PlayerDisconnected", {_this call SXP_fnc_hcDisconnect;}];

// Create a list of mission objects that should not be curator editable
private "_blacklistedMissionObjects";
_blacklistedMissionObjects = [];

// Make all initial mission objects editable by all curators
{
	private "_curator";
	_curator = _x;
	{
		// Make sure object is not already in editable objects and is not black listed
		if !(_x in curatorEditableObjects _curator) then {
			_curator addCuratorEditableObjects [[_x], true];
		};
	} forEach playableUnits + switchableUnits + allMissionObjects "LandVehicle" + allMissionObjects "Man" + allMissionObjects "Air" + allMissionObjects "Reammobox_F" - _blacklistedMissionObjects - allMissionObjects "VirtualMan_F";
} forEach allCurators;

// Call the script to handle initial task setup
[] execVM "scripts\tasks.sqf";

// Add any mission specific code after this point
call SXP_fnc_setupTFAR;

//[] execVM "scripts\setupBombs.sqf";
//[] execVM "scripts\setupHostages.sqf";
//[] execVM "scripts\setupSurprises.sqf";
[] execVM "scripts\setupTerrorSites.sqf";

// slideshow (thanks whale)

_null = [] spawn {
	waitUntil{sleep 5; (time > 5)};
	projector_pause = false;
	_imgArray = ['media\ss\1.jpg','media\ss\2.jpg','media\ss\3.jpg','media\ss\4.jpg'];
	_iA = 0;
	projected setObjectMaterialGlobal [0, "\a3\data_f\default.rvmat"];
	while {true} do
	{
		if (_iA >= count _imgArray) then {_iA = 0};
		projected setObjectTextureGlobal [0, (_imgArray select _iA)];
		_iA = _iA + 1;
		sleep 20;
		waitUntil{sleep 1;!projector_pause};
	};
};