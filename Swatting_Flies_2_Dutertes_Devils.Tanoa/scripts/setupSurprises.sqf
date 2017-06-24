mineStuffArray = [mineCivArray, "mineCivMarker", mineBombs, mineDeadman, "situationMine", commsBombCount];
factoryStuffArray = [factoryCivArray, "factoryCivMarker", factoryBombs, factoryDeadman, "situationFactory", commsBombCount];
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
_deadman addEventHandler ["killed", { [_bombs, ((_task call BIS_fnc_taskChildren) select 0), _bombCount, 0] remoteExec ["MLY_fnc_detonateBombs", 2]}];

//setup civilian calling in information
civilianCall params ["_civilians", "_marker", "_bombs", "_deadman", "_task", "_bombCount"];
_marker setMarkerAlpha 1;
_descUpdate = "UPDATE: A civilian has managed to contact 911 on their cellphone, and from the information we've managed to determine their location, it is marked on the map.";
[_task, [_descUpdate, ((_task call BIS_fnc_taskDescription) select 1), ((_task call BIS_fnc_taskDescription) select 2)]] call BIS_fnc_taskSetDescription; 


