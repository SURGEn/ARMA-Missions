tonyPajamas assignAsDriver escapeChopper;
tonyPajamasGroup addWaypoint [ escapeChopper, 0];
[tonyPajamasGroup, 0] setWaypointType "MOVE";
bodyguardTeam addWaypoint [ escapeChopper, 0];
[bodyguardTeam, 0] setWaypointType "MOVE";
tonyPajamasGroup addWaypoint [ escapeChopper, 0];
[tonyPajamasGroup, 1] setWaypointType "GETIN";
tonyPajamasGroup addWaypoint [ getMarkerPos "tonyMoveMarker", 0];
[tonyPajamasGroup, 2] setWaypointType "MOVE";