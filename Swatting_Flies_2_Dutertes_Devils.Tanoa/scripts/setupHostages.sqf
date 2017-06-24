_mineCivLocationsA = [ mineCivA1,  mineCivA2,  mineCivA3,  mineCivA4,  mineCivA5,  mineCivA6];
_mineCivLocationsB = [ mineCivB1,  mineCivB2,  mineCivB3,  mineCivB4,  mineCivB5,  mineCivB6];
_mineCivLocationsC = [ mineCivC1,  mineCivC2,  mineCivC3,  mineCivC4,  mineCivC5,  mineCivC6];
_mineCivLocationsD = [ mineCivD1,  mineCivD2,  mineCivD3,  mineCivD4,  mineCivD5,  mineCivD6];

mineCivLocation = selectRandom [_mineCivLocationsA, _mineCivLocationsB, _mineCivLocationsC, _mineCivLocationsD];
mineCivCount = count units mineCivilians;
mineCivArray = units mineCivilians;
for [{_i = 0}, {_i < mineCivCount}, {_i = _i + 1}] do
{
	(mineCivArray select _i) setPos (position (mineCivLocation select _i));
	(mineCivArray select _i) setDir (getDir (mineCivLocation select _i));
};
{
	{
		hideObjectGlobal _x;
	} forEach _x;
} forEach [_mineCivLocationsA, _mineCivLocationsB, _mineCivLocationsC, _mineCivLocationsD];
"mineCivMarker" setMarkerPos [position (mineCivArray select 0) select 0, position (mineCivArray select 0) select 1];


_commsCivLocationsA = [ commsCivA1,  commsCivA2,  commsCivA3,  commsCivA4,  commsCivA5,  commsCivA6];
_commsCivLocationsB = [ commsCivB1,  commsCivB2,  commsCivB3,  commsCivB4,  commsCivB5,  commsCivB6];
_commsCivLocationsC = [ commsCivC1,  commsCivC2,  commsCivC3,  commsCivC4,  commsCivC5,  commsCivC6];

commsCivLocation = selectRandom [_commsCivLocationsA, _commsCivLocationsB, _commsCivLocationsC];
commsCivCount = count units commsCivilians;
commsCivArray = units commsCivilians;
for [{_i = 0}, {_i < commsCivCount}, {_i = _i + 1}] do
{
	(commsCivArray select _i) setPos (position (commsCivLocation select _i));
	(commsCivArray select _i) setDir (getDir (commsCivLocation select _i));
};
{
	{
		hideObjectGlobal _x;
	} forEach _x;
} forEach [_commsCivLocationsA, _commsCivLocationsB, _commsCivLocationsC];
"commsCivMarker" setMarkerPos [position (commsCivArray select 0) select 0, position (commsCivArray select 0) select 1];


_factoryCivLocationsA = [ factoryCivA1,  factoryCivA2,  factoryCivA3,  factoryCivA4,  factoryCivA5,  factoryCivA6];
_factoryCivLocationsB = [ factoryCivB1,  factoryCivB2,  factoryCivB3,  factoryCivB4,  factoryCivB5,  factoryCivB6];
_factoryCivLocationsC = [ factoryCivC1,  factoryCivC2,  factoryCivC3,  factoryCivC4,  factoryCivC5,  factoryCivC6];

factoryCivLocation = selectRandom [_factoryCivLocationsA, _factoryCivLocationsB, _factoryCivLocationsC];
factoryCivCount = count units factoryCivilians;
factoryCivArray = units factoryCivilians;
for [{_i = 0}, {_i < factoryCivCount}, {_i = _i + 1}] do
{
	(factoryCivArray select _i) setPos (position (factoryCivLocation select _i));
	(factoryCivArray select _i) setDir (getDir (factoryCivLocation select _i));
};
{
	{
		hideObjectGlobal _x;
	} forEach _x;
	
} forEach [_factoryCivLocationsA, _factoryCivLocationsB, _factoryCivLocationsC];
"factoryCivMarker" setMarkerPos [position (factoryCivArray select 0) select 0, position (factoryCivArray select 0) select 1];
