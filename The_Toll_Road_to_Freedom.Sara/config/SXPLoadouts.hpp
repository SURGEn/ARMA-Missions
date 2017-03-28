// SXPloadouts.hpp
// Used for defining advanced respawn loadouts for players
// Default behaviour is to check if the player unit has a special loadout defined. Otherwise, it will check to see if the classname matches a loadout
// Advanced functionality allows mission creator to define exactly where items are placed in unit inventories
class loadouts
{
	class O_Soldier_SL_F
	{
		displayName = "Ancap Squad Leader"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "hgun_Pistol_heavy_01_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_blk";
		backpackClass = "tf_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 2}, {"HandGrenade", 2}, {"SmokeShellBlue", 2}, {"30Rnd_556x45_Stanag_red", 6}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"30Rnd_556x45_Stanag_red", 3}, {"ACE_bloodIV",1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class O_Soldier_TL_F
	{
		displayName = "Ancap Team Leader"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "hgun_Pistol_heavy_01_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_blk";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 2}, {"HandGrenade", 2}, {"SmokeShellBlue", 2}, {"30Rnd_556x45_Stanag_red", 6}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"30Rnd_556x45_Stanag_red", 4}, {"ACE_bloodIV",1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class O_Soldier_GL_F
	{
		displayName = "Ancap Grenadier"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD_EGLM", "hgun_Pistol_heavy_01_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red", "CUP_1Rnd_HE_M203"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_blk";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 1}, {"SmokeShellBlue", 1}, {"HandGrenade", 2}, {"30Rnd_556x45_Stanag_red", 4}, {"CUP_1Rnd_HE_M203", 8}, {"CUP_1Rnd_Smoke_M203", 2}, {"CUP_1Rnd_SmokeGreen_M203", 2}, {"CUP_1Rnd_SmokeRed_M203", 2}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class O_Soldier_AR_F
	{
		displayName = "Ancap Autorifleman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_lmg_mk48", "hgun_Pistol_heavy_01_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Holosight_blk_F", "hlc_100Rnd_762x51_M_M60E4", "bipod_01_F_blk"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_blk";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 2}, {"SmokeShellBlue", 2}, {"HandGrenade", 2}, {"hlc_100Rnd_762x51_M_M60E4", 3}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class O_Soldier_LAT_F
	{
		displayName = "Ancap AT"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "hgun_Pistol_heavy_01_F", "Binocular", "launch_NLAW_F"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {"NLAW_F"}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_blk";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 2}, {"SmokeShellBlue", 2}, {"HandGrenade", 2}, {"30Rnd_556x45_Stanag_red", 6}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"NLAW_F", 2}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class O_Soldier_M_F
	{
		displayName = "Ancap Marksman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk20", "hgun_Pistol_heavy_01_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_DMS", "CUP_20Rnd_762x51_B_SCAR", "bipod_01_F_snd"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_blk";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 2}, {"SmokeShellBlue", 2}, {"HandGrenade", 2}, {"CUP_20Rnd_762x51_B_SCAR", 4}, {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class O_Soldier_A_F
	{
		displayName = "Ancap Ammobearer"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "hgun_Pistol_heavy_01_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_blk";
		backpackClass = "CUP_B_USPack_Black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 2}, {"SmokeShellBlue", 2}, {"HandGrenade", 2}, {"30Rnd_556x45_Stanag_red", 10}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"30Rnd_556x45_Stanag_red", 20}, {"CUP_1Rnd_HE_M203", 14}, {"CUP_20Rnd_762x51_B_SCAR", 4}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class O_Soldier_AAR_F
	{
		displayName = "Ancap Assistant Autorifleman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "hgun_Pistol_heavy_01_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_blk";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 2}, {"SmokeShellBlue", 2}, {"HandGrenade", 2}, {"30Rnd_556x45_Stanag_red", 6}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"hlc_100Rnd_762x51_M_M60E4", 4}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class O_Soldier_AAT_F
	{
		displayName = "Ancap Assistant AT"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "hgun_Pistol_heavy_01_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_blk";
		backpackClass = "CUP_B_USPack_Black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 2}, {"SmokeShellBlue", 2}, {"HandGrenade", 2}, {"30Rnd_556x45_Stanag_red", 6}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"NLAW_F", 3}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class O_Medic_F
	{
		displayName = "Ancap Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "hgun_Pistol_heavy_01_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_blk";
		backpackClass = "CUP_B_USPack_Black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 2}, {"SmokeShellBlue", 2}, {"HandGrenade", 2}, {"30Rnd_556x45_Stanag_red", 6}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_fieldDressing", 60}, {"ACE_epinephrine", 20}, {"ACE_morphine", 30}, {"ACE_bloodIV", 15}}; // Items to place in backpack. Includes weapon magazines
	};
};