

["early_warning_left"] call SXP_fnc_updateTask;
warningSquad addWaypoint [ getMarkerPos "warningMoveMarker1", 0];
[warningSquad, 0] setWaypointType "MOVE";
