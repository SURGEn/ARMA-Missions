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

heloIsSpawned = true;
shotDown = false;
_accountantLocations = [position accountantSpawn1, position accountantSpawn2, position accountantSpawn3]; 
_financeLocations = [position financeSpawn1, position financeSpawn2, position financeSpawn3]; 
accountantNum = floor random 2; 
_grp = createGroup opfor;
accountant = _grp createUnit ["C_man_1", _accountantLocations select accountantNum, [], 0, ""];
removeUniform accountant;
removeHeadgear accountant;
removeGoggles accountant;
accountant forceAddUniform "U_Marshal";
finances = createVehicle ["Land_Document_01_F", _financeLocations select accountantNum, [], 0, ""];
[finances, "media\evidence\evidencephotos.jpg", "Finance records of a foreign bank account belonging to Duterte with many suspicious transactions."] call bis_fnc_initInspectable;
finances addAction ["Take Evidence", {["finances_taken"] remoteExec ["SXP_fnc_updateTask", 2]}, nil, 1.5, true, true, "", "true", 2, false, ""];


_bodyguardLocations = [position bodyguardSpawn1, position bodyguardSpawn2, position bodyguardSpawn3]; 
_testimonyLocations = [position testimonySpawn1, position testimonySpawn2, position testimonySpawn3]; 
bodyguardNum = floor random 2; 
_grp = createGroup opfor;
bodyguard = _grp createUnit ["O_Survivor_F", _bodyguardLocations select bodyguardNum, [], 0, ""];
removeUniform bodyguard;
removeHeadgear bodyguard;
removeGoggles bodyguard;
bodyguard forceAddUniform "CUP_U_C_Suit_01";
[bodyguard, "hlc_pistol_P229R_40Enox", 3, 0] call BIS_fnc_addWeapon;
testimony = createVehicle ["Land_Document_01_F", _testimonyLocations select bodyguardNum, [], 0, ""];
[testimony, "media\evidence\evidencephotos.jpg", "Testimony implicating Duterte plans to backstab NATO for CSAT."] call bis_fnc_initInspectable;
testimony addAction ["Take Evidence", {["testimony_taken"] remoteExec ["SXP_fnc_updateTask", 2]}, nil, 1.5, true, true, "", "true", 2, false, ""];

_photographerLocations = [position photographerSpawn1, position photographerSpawn2, position photographerSpawn3]; 
_photoLocations = [position photoSpawn1, position photoSpawn2, position photoSpawn3]; 
photographerNum = floor random 2; 
_grp = createGroup opfor;
photographer = _grp createUnit ["B_Survivor_F", _photographerLocations select photographerNum, [], 0, ""];
removeUniform photographer;
photographer forceAddUniform "U_C_Poloshirt_blue";
photos = createVehicle ["Land_Document_01_F", _photoLocations select photographerNum, [], 0, ""];
[photos, "media\evidence\evidencephotos.jpg", "Photos showing a man who looks like Duterte overseeing a firing squad."] call bis_fnc_initInspectable;
photos addAction ["Take Evidence", {["photos_taken"] remoteExec ["SXP_fnc_updateTask", 2]}, nil, 1.5, true, true, "", "true", 2, false, ""];