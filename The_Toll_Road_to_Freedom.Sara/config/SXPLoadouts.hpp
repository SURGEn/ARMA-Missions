// SXPloadouts.hpp
// Used for defining advanced respawn loadouts for players
// Default behaviour is to check if the player unit has a special loadout defined. Otherwise, it will check to see if the classname matches a loadout
// Advanced functionality allows mission creator to define exactly where items are placed in unit inventories
class loadouts
{
	class I_officer_F
	{
		displayName = "Ancap McWarlord"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "CUP_hgun_TaurusTracker455_gold", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_6Rnd_45ACP_M"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_black";
		headgearClass = "H_Beret_Colonel";
		facewearClass = "";
		vestClass = "V_BandollierB_blk";
		backpackClass = "tf_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_6Rnd_45ACP_M", 2}, {"SmokeShell", 2}, {"SmokeShellBlue", 2}, {"30Rnd_556x45_Stanag_red", 6}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_Soldier_SL_F
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
	
	class I_Soldier_TL_F
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
	
	class I_Soldier_GL_F
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
	
	class I_Soldier_AR_F
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
	
	class I_Soldier_LAT_F
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
	
	class I_Soldier_M_F
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
	
	class I_Soldier_A_F
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
	
	class I_Soldier_AAR_F
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
	
	class I_Soldier_AAT_F
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
	
	class I_Medic_F
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
	
	class I_G_Soldier_SL_F
	{
		displayName = "Ancap Recon Squad Leader"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "hgun_Pistol_heavy_01_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_muzzle_snds_SCAR_L"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag", "muzzle_snds_acp"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrig_blk";
		backpackClass = "tf_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 3}, {"ACE_morphine", 5}, {"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 1}, {"SmokeShellBlue", 1}, {"30Rnd_556x45_Stanag_Tracer_Red", 5}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_I_GUE_Soldier_Scout
	{
		displayName = "Ancap Recon Scout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "hgun_Pistol_heavy_01_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_muzzle_snds_SCAR_L"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag", "muzzle_snds_acp"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "CUP_H_FR_Headset";
		facewearClass = "";
		vestClass = "V_Chestrig_blk";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 1}, {"SmokeShellBlue", 1}, {"30Rnd_556x45_Stanag_Tracer_Red", 5}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_G_Soldier_M_F
	{
		displayName = "Ancap Recon Marksman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_srifle_M110", "hgun_Pistol_heavy_01_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_DMS", "bipod_01_F_snd", "CUP_20Rnd_TE1_Red_Tracer_762x51_M110", "CUP_muzzle_snds_M110"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag", "muzzle_snds_acp"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "CUP_H_PMC_Cap_Back_Grey";
		facewearClass = "";
		vestClass = "V_Chestrig_blk";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 1}, {"SmokeShellBlue", 1}, {"CUP_20Rnd_TE1_Red_Tracer_762x51_M110", 5}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_G_medic_F
	{
		displayName = "Ancap Recon CLS"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "hgun_Pistol_heavy_01_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_muzzle_snds_SCAR_L"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"optic_MRD", "11Rnd_45ACP_Mag", "muzzle_snds_acp"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_Bandanna_gry";
		facewearClass = "";
		vestClass = "V_Chestrig_blk";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"ACE_bloodIV", 3}, {"ACE_fieldDressing", 35}, {"ACE_epinephrine", 8}, {"ACE_morphine", 16}, {"11Rnd_45ACP_Mag", 2}, {"SmokeShell", 1}, {"SmokeShellBlue", 1}, {"30Rnd_556x45_Stanag_Tracer_Red", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_helipilot_F
	{
		displayName = "Ancap Pilot"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_CQC", "hgun_Pistol_heavy_01_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"11Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_black";
		headgearClass = "H_PilotHelmetHeli_B";
		facewearClass = "";
		vestClass = "V_Chestrig_blk";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam",1}, {"ACE_EntrenchingTool",1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"11Rnd_45ACP_Mag", 2}, {"30Rnd_556x45_Stanag_red", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"toolkit", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	
	
};