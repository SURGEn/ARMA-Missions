{ 
	if ((side _x) == east) then 
	{ 
		[_x,"ancom"] call BIS_fnc_setUnitInsignia; 
	}; 
} forEach allUnits;