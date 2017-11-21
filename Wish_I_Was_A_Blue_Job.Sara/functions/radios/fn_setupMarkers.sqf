params["_startPoint", "_groups"];
{
	_channel = str ((_x getVariable ["TFAR_groupChannel", 0]) + 1);
	_markerString = (groupId _x) + " | " + (name leader _x) + " | Channel " + _channel; 
	_marker = createMarker [format["radioMarker%1", str (_forEachIndex + 1)],[_startPoint select 0,((_startPoint select 1) - (100 * _forEachIndex))]];
	_marker setMarkerColor "ColorWEST";
	_marker setMarkerType "hd_dot";
	_marker setMarkerText _markerString;
} forEach _groups;