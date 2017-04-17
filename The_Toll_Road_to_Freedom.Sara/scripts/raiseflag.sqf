[ 
	sahraniFlag, 
	"Raise Ancap Flag", 
	"media\holdactions\holdaction_alert.paa", 
	"media\holdactions\holdaction_alert.paa", 
	"_this distance sahraniFlag < 6",  
	"_caller distance sahraniFlag < 6",  
	{[sahraniFlag, 0, false] call BIS_fnc_animateFlag;}, 
	{}, 
	{[sahraniFlag, 1, false] call BIS_fnc_animateFlag;  
	sahraniFlag setFlagTexture "media\flags\ancapflaglargest.jpg";}, 
	{[sahraniFlag, 1, false] call BIS_fnc_animateFlag;}, 
	[], 
	11, 
	0, 
	true, 
	false 
] call BIS_fnc_holdActionAdd;