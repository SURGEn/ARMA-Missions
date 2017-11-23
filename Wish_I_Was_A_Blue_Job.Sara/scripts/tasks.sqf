// Script for creating player tasks
// Only to be run on the server. BIS_fnc_taskCreate is global.
if (!isServer) exitWith {};

// Example task syntax below
/*
[
	true, // Owners of the task. See wiki page for details
	["task name", "parent task name"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["description", "title", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	[0,0,0], // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"attack", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

	Make sure to add the name of the zeus unit into the owner field in string format
	It should look like this when written
	
		[true, "zeus_unit"]
		
	This adds the task to all player units, as well as the "zeus_unit" curator.
	This makes sure that zeus units have the same tasks that the players do
*/
// Place tasks here

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["captureBase"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["First we will attack a ZANLA military base, to secure transport and our rear as we attack the airstrip.", "Attack Base", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	getMarkerPos "baseMarker", // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"ASSIGNED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"attack", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["captureAirstrip"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Capturing this airstrip will allow us to paradrop past the defenses in Corazol, circumventing the bulk of ZANLA forces.", "Capture Airstrip", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	getMarkerPos "airbaseMarker", // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"attack", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["Rescue Ian Smith"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["It turns out Rhodesians really never do die, Ian Smith is still alive and being held by ZANLA forces, rescue him.", "Rescue Ian Smith", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	getMarkerPos "ianSmithMarker", // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"meet", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["killMugabes"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["There can be no questions about leadership after our assault. Kill both Robert Mugabe and his wife, Grace Mugabe.", "Kill Mugabes", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	getMarkerPos "mugabeMarker", // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"kill", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;