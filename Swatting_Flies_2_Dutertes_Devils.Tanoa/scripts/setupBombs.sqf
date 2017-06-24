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
	(factoryBombMarkers select _i) setMarkerAlpha 0.5;
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
	(commsBombMarkers select _i) setMarkerAlpha 0.5;
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
	(mineBombMarkers select _i) setMarkerAlpha 0.5;
};