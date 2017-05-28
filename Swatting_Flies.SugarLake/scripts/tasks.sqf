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
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"attack", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

	Make sure to add the name of the zeus module into the owner field in string format
	It should look like this when written
	
		[true, "zeus_module"]
		
	This adds the task to all player units, as well as the "zeus_module" curator.
	This makes sure that zeus units have the same tasks that the players do
*/
// Place tasks here

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	"assaultDew", // Name of the task, along with parent name. Parent name is used for nested tasks
	["Assault <b>Dewey's Landing</b>, destroy any drugs you find and kill any traffickers in the area, afterwards, search the area for information regarding the locaiton of <b>Tony Pajamas</b>.", "Assault Dewey's Landing", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	[7540,7950,0], // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED",
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"attack", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["destroyDrugs", "assaultDew"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Find and destroy the drugs stored at <b>Dewey's Landing</b>. They are hidden in <b>La Rosa</b> cigar crates.", "Destroy Drugs", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED",
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"destroy", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["findIntel", "assaultDew"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Search <b>Dewey's Landing</b> for information on the location of <b>Tony Pajamas</b>.", "Find Intel", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED",
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"search", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["killSmugglers", "assaultDew"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Kill all drug traffickers at <b>Dewey's Landing</b>.", "Kill Traffickers", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED",
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"kill", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;