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
	["aquireDrugs"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Clear out the cartel den at Laikuro and aquire drugs to plant later in the operation. This cartel disguises their drugs as bananas and keeps them in white plastic containers.", "Aquire Drugs", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	getMarkerPos "drugsMarker", // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"search", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["dealWithAccountant"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Deal with the accountant that has stolen government financial records. He's located in a safehouse south of Rautake.", "Deal with accountant", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	getMarkerPos "accountantMarker", // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"a", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["killAccountant", "dealWithAccountant"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Kill the accountant to silence him.", "Kill accountant", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"kill", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["plantDrugsAccountant", "dealWithAccountant"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Plant drugs on the accountant to justify our raid.", "Plant drugs on accountant", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"interact", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["evidenceAccountant", "dealWithAccountant"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Seize any harmful documents the accountant has on Duterte.", "Seize documents", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"documents", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["dealWithPhotographer"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Deal with the photographer that has doctored fake photos of Duterte, he's in a safehouse to the south of Bala airstrip.", "Deal with photographer", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	getMarkerPos "photographerMarker", // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"b", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["killPhotographer", "dealWithPhotographer"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Kill the photographer to silence him.", "Kill photographer", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"kill", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["plantDrugsPhotographer", "dealWithPhotographer"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Plant drugs on the photographer to justify our raid.", "Plant drugs on photographer", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"interact", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["evidencePhotographer", "dealWithPhotographer"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Seize any harmful photos the photographer has of Duterte.", "Seize photos", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"documents", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["dealWithBodyguard"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Deal with the former bodyguard who is planning to testify against Duterte, he's in a safehouse near Katkoula.", "Deal with bodyguard", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	getMarkerPos "bodyguardMarker", // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"c", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["killBodyguard", "dealWithBodyguard"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Kill the bodyguard to silence him.", "Kill bodyguard", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"kill", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["plantDrugsBodyguard", "dealWithBodyguard"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Plant drugs on the bodyguard to justify our raid.", "Plant drugs on bodyguard", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"interact", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

[
	[true, "zeus_unit"], // Owners of the task. See wiki page for details
	["evidenceBodyguard", "dealWithBodyguard"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["Seize any harmful written testimony the bodyguard has made.", "Seize testimony", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	objNull, // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"documents", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;