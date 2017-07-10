
//Setup bomb spawns, used exact positions because arma is fucky when spawning live explosives
_factoryBombLocationA1 = [8530.5, 10242.85, 0];
_factoryBombLocationA2 = [8506.1, 10226, 0];
_factoryBombLocationA3 = [8478.8, 10244.95, 0];
_factoryBombLocationA4 = [8495.2, 10264.85, 0];
_factoryBombLocationA5 = [8531.7, 10257, 0];
_factoryBombLocationA6 = [8520.9, 10234.3, 0];

_factoryBombLocationsA = [_factoryBombLocationA1, _factoryBombLocationA2, _factoryBombLocationA3, _factoryBombLocationA4, _factoryBombLocationA5, _factoryBombLocationA6];

_factoryBombLocationB1 = [8443.5, 10326.6, 0];
_factoryBombLocationB2 = [8420.7, 10293.7, 6.17];
_factoryBombLocationB3 = [8406.25, 10301.9, 0];

_factoryBombLocationsB = [_factoryBombLocationB1, _factoryBombLocationB2, _factoryBombLocationB3];

_factoryBombLocationC1 = [8428.5, 10254.6, 0];
_factoryBombLocationC2 = [8347.45, 10229, 0];
_factoryBombLocationC3 = [8442.3, 10248, 0];
_factoryBombLocationC4 = [8348.6, 10225.85, 24.1];
_factoryBombLocationC5 = [8432.8, 10250.5, 0];

_factoryBombLocationsC = [_factoryBombLocationC1, _factoryBombLocationC2, _factoryBombLocationC3, _factoryBombLocationC4, _factoryBombLocationC5]; 

_factoryBombLocationD1 = [8522.4, 10300.2, 0.4];
_factoryBombLocationD2 = [8506.4, 10309.8, 12];
_factoryBombLocationD3 = [8484.5, 10310.8, 14.5];
_factoryBombLocationD4 = [8479.74, 10318.95, 0];
_factoryBombLocationD5 = [8510.1, 10306.9, 0];

_factoryBombLocationsD = [_factoryBombLocationD1, _factoryBombLocationD2, _factoryBombLocationD3, _factoryBombLocationD4, _factoryBombLocationD5]; 

_factoryBombLocationE1 = [8289.7, 10308, 0];
_factoryBombLocationE2 = [8286.7, 10329.8, 0];
_factoryBombLocationE3 = [8292, 10340.6, 0];
_factoryBombLocationE4 = [8276.1, 10308.9, 10];

_factoryBombLocationsE = [_factoryBombLocationE1, _factoryBombLocationE2, _factoryBombLocationE3, _factoryBombLocationE4];

_factoryBombLocationF1 = [8311.9, 10338.9, 0];
_factoryBombLocationF2 = [8359.08, 10322.42, 0];
_factoryBombLocationF3 = [8327.65, 10329.65, 0];
_factoryBombLocationF4 = [8354.05, 10328.1, 6.08];
_factoryBombLocationF5 = [8354.18, 10323.23, 23.33];

_factoryBombLocationsF = [_factoryBombLocationF1, _factoryBombLocationF2, _factoryBombLocationF3, _factoryBombLocationF4, _factoryBombLocationF5]; 

_factoryBombA = "CUP_PipeBomb_Ammo" createVehicle selectRandom _factoryBombLocationsA;
_factoryBombB = "CUP_PipeBomb_Ammo" createVehicle selectRandom _factoryBombLocationsB;
_factoryBombC = "CUP_PipeBomb_Ammo" createVehicle selectRandom _factoryBombLocationsC;
_factoryBombD = "CUP_PipeBomb_Ammo" createVehicle selectRandom _factoryBombLocationsD;
_factoryBombE = "CUP_PipeBomb_Ammo" createVehicle selectRandom _factoryBombLocationsE;
_factoryBombF = "CUP_PipeBomb_Ammo" createVehicle selectRandom _factoryBombLocationsF;

factoryBombs = [_factoryBombA, _factoryBombB, _factoryBombC, _factoryBombD, _factoryBombE, _factoryBombF];
factoryBombCount = count factoryBombs;
factoryBombMarkers = ["factoryBombAMarker", "factoryBombBMarker", "factoryBombCMarker", "factoryBombDMarker", "factoryBombEMarker", "factoryBombFMarker"];
for [{_i = 0}, {_i < factoryBombCount}, {_i = _i + 1}] do
{
	(factoryBombMarkers select _i) setMarkerPos [position (factoryBombs select _i) select 0, position (factoryBombs select _i) select 1];
	(factoryBombMarkers select _i) setMarkerAlpha 0;
};


_commsBombLocationA1 = [10114.69, 11743.1, 24];
_commsBombLocationA2 = [10116.5, 11740.1, 0];
_commsBombLocationA3 = [10089.65, 11804.2, 0];

_commsBombLocationsA = [_commsBombLocationA1, _commsBombLocationA2, _commsBombLocationA3];

_commsBombLocationB1 = [10017.55, 11806.54, 0.57];
_commsBombLocationB2 = [10020.57, 11806.1, 6.98];
_commsBombLocationB3 = [10043.93, 11809.31, 0];
_commsBombLocationB4 = [10054.2, 11790.76, 0];

_commsBombLocationsB = [_commsBombLocationB1, _commsBombLocationB2, _commsBombLocationB3, _commsBombLocationB4];

_commsBombLocationC1 = [9992.5, 11803.6, 0];
_commsBombLocationC2 = [9986.5, 11781.3, 7.76];
_commsBombLocationC3 = [9974.2, 11784.65, 0];

_commsBombLocationsC = [_commsBombLocationC1, _commsBombLocationC2, _commsBombLocationC3];

_commsBombA = "CUP_PipeBomb_Ammo" createVehicle selectRandom _commsBombLocationsA;
_commsBombB = "CUP_PipeBomb_Ammo" createVehicle selectRandom _commsBombLocationsB;
_commsBombC = "CUP_PipeBomb_Ammo" createVehicle selectRandom _commsBombLocationsC;
commsBombs = [_commsBombA, _commsBombB, _commsBombC];
commsBombCount = count commsBombs;
commsBombMarkers = ["commsBombAMarker", "commsBombBMarker", "commsBombCMarker"];
for [{_i = 0}, {_i < commsBombCount}, {_i = _i + 1}] do
{
	(commsBombMarkers select _i) setMarkerPos [position (commsBombs select _i) select 0, position (commsBombs select _i) select 1];
	(commsBombMarkers select _i) setMarkerAlpha 0;
};


_mineBombLocationA1 = [11848.34, 10334.7, 0];
_mineBombLocationA2 = [11692.9, 10165.1, 8.5];
_mineBombLocationA3 = [11681.95, 10158.45, 0];
_mineBombLocationA4 = [11689.9, 10163.44, 0];
_mineBombLocationA5 = [11839.8, 10334.95, 0];

_mineBombLocationsA = [_mineBombLocationA1, _mineBombLocationA2, _mineBombLocationA3, _mineBombLocationA4, _mineBombLocationA5];

_mineBombLocationB1 = [12313.72, 10338.2, 0];
_mineBombLocationB2 = [12313.47, 10324.93, 0];
_mineBombLocationB3 = [12315.16, 10238, 0];
_mineBombLocationB4 = [12312.51, 10259, 1.4];

_mineBombLocationsB = [_mineBombLocationB1, _mineBombLocationB2, _mineBombLocationB3, _mineBombLocationB4];

_mineBombLocationC1 = [12311.6, 10538.15, 0];
_mineBombLocationC2 = [12315.9, 10535.9, 0.5];
_mineBombLocationC3 = [12292, 10494.36, 0];
_mineBombLocationC4 = [12292.05, 10495.3, 22.19];

_mineBombLocationsC = [_mineBombLocationC1, _mineBombLocationC2, _mineBombLocationC3, _mineBombLocationC4];

_mineBombLocationD1 = [12120.8, 10604.3, 0];
_mineBombLocationD2 = [12116.9, 10605.1, 10.4];
_mineBombLocationD3 = [12092, 10664, 0];

_mineBombLocationsD = [_mineBombLocationD1, _mineBombLocationD2, _mineBombLocationD3];

_mineBombA = "CUP_PipeBomb_Ammo" createVehicle selectRandom _mineBombLocationsA;
_mineBombB = "CUP_PipeBomb_Ammo" createVehicle selectRandom _mineBombLocationsB;
_mineBombC = "CUP_PipeBomb_Ammo" createVehicle selectRandom _mineBombLocationsC;
_mineBombD = "CUP_PipeBomb_Ammo" createVehicle selectRandom _mineBombLocationsD;

mineBombs = [_mineBombA, _mineBombB, _mineBombC, _mineBombD];
mineBombCount = count mineBombs;
mineBombMarkers = ["mineBombAMarker", "mineBombBMarker", "mineBombCMarker", "mineBombDMarker"];
for [{_i = 0}, {_i < mineBombCount}, {_i = _i + 1}] do
{
	(mineBombMarkers select _i) setMarkerPos [position (mineBombs select _i) select 0, position (mineBombs select _i) select 1];
	(mineBombMarkers select _i) setMarkerAlpha 0;
};



//Setup Hostage spawns
_mineCivLocationsA = [ mineCivA1,  mineCivA2,  mineCivA3,  mineCivA4,  mineCivA5,  mineCivA6];
_mineCivLocationsB = [ mineCivB1,  mineCivB2,  mineCivB3,  mineCivB4,  mineCivB5,  mineCivB6];
_mineCivLocationsC = [ mineCivC1,  mineCivC2,  mineCivC3,  mineCivC4,  mineCivC5,  mineCivC6];
_mineCivLocationsD = [ mineCivD1,  mineCivD2,  mineCivD3,  mineCivD4,  mineCivD5,  mineCivD6];

mineCivLocation = selectRandom [_mineCivLocationsA, _mineCivLocationsB, _mineCivLocationsC, _mineCivLocationsD];
mineCivCount = count units mineCivilians;
mineCivArray = units mineCivilians;
{
	_x setPos (position (mineCivLocation select _forEachIndex));
	//diag_log format ["Mine unit number %1 location: %2, %3 It should be: %4, %5", _forEachIndex, position _x select 0, position _x select 1, (position (mineCivLocation select _forEachIndex)) select 0, (position (mineCivLocation select _forEachIndex)) select 1];
	_x setDir (getDir (mineCivLocation select _forEachIndex));
	//diag_log format ["Mine unit number %1 rotation: %2 It should be: %3", _forEachIndex, getDir _x, (getDir (mineCivLocation select _forEachIndex))];
	[_x ,true] remoteExec["ace_captives_fnc_setHandcuffed", _x];
	//diag_log format ["Handcuff status of unit %1: %2 ", _forEachIndex, captive _x];
} forEach mineCivArray;
{
	{
		hideObjectGlobal _x;
	} forEach _x;
} forEach [_mineCivLocationsA, _mineCivLocationsB, _mineCivLocationsC, _mineCivLocationsD];
"mineCivMarker" setMarkerPos [position (mineCivArray select 0) select 0, position (mineCivArray select 0) select 1];
"mineCivMarker" setMarkerAlpha 0;


_commsCivLocationsA = [ commsCivA1,  commsCivA2,  commsCivA3,  commsCivA4,  commsCivA5,  commsCivA6];
_commsCivLocationsB = [ commsCivB1,  commsCivB2,  commsCivB3,  commsCivB4,  commsCivB5,  commsCivB6];
_commsCivLocationsC = [ commsCivC1,  commsCivC2,  commsCivC3,  commsCivC4,  commsCivC5,  commsCivC6];

commsCivLocation = selectRandom [_commsCivLocationsA, _commsCivLocationsB, _commsCivLocationsC];
commsCivCount = count units commsCivilians;
commsCivArray = units commsCivilians;
{
	_x setPos (position (commsCivLocation select _forEachIndex));
	//diag_log format ["Comms unit number %1 location: %2, %3 It should be: %4, %5", _forEachIndex, position _x select 0, position _x select 1, (position (commsCivLocation select _forEachIndex)) select 0, (position (commsCivLocation select _forEachIndex)) select 1];
	_x setDir (getDir (commsCivLocation select _forEachIndex));
	//diag_log format ["Comms unit number %1 rotation: %2 It should be: %3", _forEachIndex, getDir _x, (getDir (commsCivLocation select _forEachIndex))];
	[_x ,true] remoteExec["ace_captives_fnc_setHandcuffed", _x];
	//diag_log format ["Handcuff status of unit %1: %2 ", _forEachIndex, captive _x];
} forEach commsCivArray;
{
	{
		hideObjectGlobal _x;
	} forEach _x;
} forEach [_commsCivLocationsA, _commsCivLocationsB, _commsCivLocationsC];
"commsCivMarker" setMarkerPos [position (commsCivArray select 0) select 0, position (commsCivArray select 0) select 1];
"commsCivMarker" setMarkerAlpha 0;


_factoryCivLocationsA = [ factoryCivA1,  factoryCivA2,  factoryCivA3,  factoryCivA4,  factoryCivA5,  factoryCivA6];
_factoryCivLocationsB = [ factoryCivB1,  factoryCivB2,  factoryCivB3,  factoryCivB4,  factoryCivB5,  factoryCivB6];
_factoryCivLocationsC = [ factoryCivC1,  factoryCivC2,  factoryCivC3,  factoryCivC4,  factoryCivC5,  factoryCivC6];

factoryCivLocation = selectRandom [_factoryCivLocationsA, _factoryCivLocationsB, _factoryCivLocationsC];
factoryCivCount = count units factoryCivilians;
factoryCivArray = units factoryCivilians;
{
	_x setPos (position (factoryCivLocation select _forEachIndex));
	//diag_log format ["Factory unit number %1 location: %2, %3 It should be: %4, %5", _forEachIndex, position _x select 0, position _x select 1, (position (factoryCivLocation select _forEachIndex)) select 0, (position (factoryCivLocation select _forEachIndex)) select 1];
	_x setDir (getDir (factoryCivLocation select _forEachIndex));
	//diag_log format ["Factory unit number %1 rotation: %2 It should be: %3", _forEachIndex, getDir _x, (getDir (factoryCivLocation select _forEachIndex))];
	[_x ,true] remoteExec["ace_captives_fnc_setHandcuffed", _x];
	//diag_log format ["Handcuff status of unit %1: %2 ", _forEachIndex, captive _x];
} forEach factoryCivArray;
{
	{
		hideObjectGlobal _x;
	} forEach _x;
	
} forEach [_factoryCivLocationsA, _factoryCivLocationsB, _factoryCivLocationsC];
"factoryCivMarker" setMarkerPos [position (factoryCivArray select 0) select 0, position (factoryCivArray select 0) select 1];
"factoryCivMarker" setMarkerAlpha 0;



//Setup complications at each terror site
mineStuffArray = [mineCivArray, "mineCivMarker", mineBombs, mineDeadman, "situationMine", mineBombCount];
factoryStuffArray = [factoryCivArray, "factoryCivMarker", factoryBombs, factoryDeadman, "situationFactory", factoryBombCount];
commsStuffArray = [commsCivArray, "commsCivMarker", commsBombs, commsDeadman, "situationComms", commsBombCount];
situationsArray = ([mineStuffArray, factoryStuffArray, commsStuffArray] call BIS_fnc_arrayShuffle);
enemyClothing = situationsArray select 0;
deadmanSwitch = situationsArray select 1;
civilianCall = situationsArray select 2;

//setup civilians wearing enemy uniforms
{
	removeUniform _x;
	_x addUniform "CUP_U_O_SLA_MixedCamo";
	_x addVest "CUP_V_PMC_IOTV_Black_Empty";
	_x addHeadgear "H_Shemag_olive_hs";
} forEach (enemyClothing select 0);

//setup deadswitch trigger carrier
deadmanSwitch params ["_civilians", "_marker", "_bombs", "_deadman", "_task", "_bombCount"];
_deadman addEventHandler ["killed", { [(deadmanSwitch select 2), (((deadmanSwitch select 4) call BIS_fnc_taskChildren) select 0), (deadmanSwitch select 5), 180] remoteExec ["MLY_fnc_detonateBombs", 2]}];
removeUniform _deadman;
_deadman addUniform "CUP_U_O_SLA_Urban";
_deadman addHeadgear "H_ShemagOpen_khk";

//setup civilian calling in information
civilianCall params ["_civilians", "_marker", "_bombs", "_deadman", "_task", "_bombCount"];
_marker setMarkerAlpha 1;
_descUpdate = "UPDATE: A civilian has managed to contact 911 on their cellphone, and from the information we've managed to determine their location, it is marked on the map.";
[_task, [_descUpdate, ((_task call BIS_fnc_taskDescription) select 1), ((_task call BIS_fnc_taskDescription) select 2)]] call BIS_fnc_taskSetDescription; 

//setup bomb/execution timers
[factoryBombs, "bombsFactory", factoryBombCount, 300] remoteExec ["MLY_fnc_detonateBombs", 2];
[commsBombs, "bombsComms", commsBombCount, 300] remoteExec ["MLY_fnc_detonateBombs", 2];
[mineBombs, "bombsMine", mineBombCount, 300] remoteExec ["MLY_fnc_detonateBombs", 2];
[factoryCivilians, 300] remoteExec ["MLY_fnc_executeCivilians", (owner (units factoryCivilians select 0))];
[mineCivilians, 300] remoteExec ["MLY_fnc_executeCivilians", (owner (units mineCivilians select 0))];
[commsCivilians, 300] remoteExec ["MLY_fnc_executeCivilians", (owner (units commsCivilians select 0))];

//handcuff informant
[informant,true] remoteExec["ace_captives_fnc_setHandcuffed", informant];