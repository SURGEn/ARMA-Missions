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
[] call SXP_fnc_setupTFAR;
shotDown = false;
_accountantLocations = [accountant1, accountant2, accountant3]; 
_financeLocations = [finances1, finances2, finances3]; 
accountantNum = floor random 3;
{ 
	if(accountantNum == _forEachIndex) 
	then {accountant = _x;}
	else {deleteVehicle _x;};
} forEach _accountantLocations;
{ 
	if(accountantNum == _forEachIndex) 
	then {finances = _x;}
	else {deleteVehicle _x;};
} forEach _financeLocations;
//[finances, "media\evidence\evidencefinances.jpg", "Finance records of a foreign bank account belonging to Duterte with many suspicious transactions."] call bis_fnc_initInspectable;
//finances addAction ["Take Evidence", {["finances_taken"] remoteExec ["SXP_fnc_updateTask", 2]}, nil, 1.5, true, true, "", "true", 2, false, ""];

_bodyguardLocations = [bodyguard1, bodyguard2, bodyguard3]; 
_testimonyLocations = [testimony1, testimony2, testimony3]; 
bodyguardNum = floor random 3; 
{ 
	if(bodyguardNum == _forEachIndex) 
	then {bodyguard = _x;}
	else {deleteVehicle _x;};
} forEach _bodyguardLocations;
{ 
	if(bodyguardNum == _forEachIndex) 
	then {testimony = _x;}
	else {deleteVehicle _x;};
} forEach _testimonyLocations;
//[testimony, "media\evidence\evidencetranscript.jpg", "Testimony implicating Duterte plans to backstab NATO for CSAT."] call bis_fnc_initInspectable;
//testimony addAction ["Take Evidence", {["testimony_taken"] remoteExec ["SXP_fnc_updateTask", 2]}, nil, 1.5, true, true, "", "true", 2, false, ""];

_photographerLocations = [photographer1, photographer2, photographer3]; 
_photoLocations = [photos1, photos2, photos3]; 
photographerNum = floor random 3; 
{ 
	if(photographerNum == _forEachIndex) 
	then {photographer = _x;}
	else {deleteVehicle _x;};
} forEach _photographerLocations;
{ 
	if(photographerNum == _forEachIndex) 
	then {photos = _x;}
	else {deleteVehicle _x;};
} forEach _photoLocations;
//[photos, "media\evidence\evidencephotos.jpg", "Photos showing a man who looks like Duterte overseeing a firing squad."] call bis_fnc_initInspectable;
//photos addAction ["Take Evidence", {["photos_taken"] remoteExec ["SXP_fnc_updateTask", 2]}, nil, 1.5, true, true, "", "true", 2, false, ""];