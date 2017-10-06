// SXPloadouts.hpp
// Used for defining advanced respawn loadouts for players
// Default behaviour is to check if the player unit has a special loadout defined. Otherwise, it will check to see if the classname matches a loadout
// Advanced functionality allows mission creator to define exactly where items are placed in unit inventories
// Also supports sub-loadout randomization. If a loadout has sub-classes defined, the script will automatically select one of them to apply to the unit.
class loadouts
{
	class example
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {"Titan_AP"}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"9Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_officer_F
	{
		displayName = "Warlord"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "bnae_r1_virtual", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_Beret_Colonel";
		facewearClass = "G_Aviator";
		vestClass = "V_BandollierB_khk";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemcTab"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_556x45_Stanag_red", 3}, {"SmokeShell", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_Soldier_SL_F
	{
		displayName = "SquadLead"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "bnae_r1_virtual", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Arco", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_556x45_Stanag_red", 4}, {"30Rnd_556x45_Stanag_Tracer_Red", 5}, {"SmokeShell", 2}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_Soldier_TL_F
	{
		displayName = "Teamlead"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD_EGLM", "bnae_r1_virtual", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red", "CUP_1Rnd_HEDP_M203"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_556x45_Stanag_red", 3}, {"30Rnd_556x45_Stanag_Tracer_Red", 3}, {"SmokeShell", 2}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"CUP_1Rnd_HEDP_M203", 10}, {"ACE_HuntIR_M203", 5}, {"1Rnd_SmokeRed_Grenade_shell", 4}, {"1Rnd_SmokeGreen_Grenade_shell", 4}, {"1Rnd_Smoke_Grenade_shell", 8}, {"ACE_HuntIR_monitor", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_Soldier_GL_F
	{
		displayName = "Grenadier"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD_EGLM", "bnae_r1_virtual", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red", "CUP_1Rnd_HEDP_M203"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_556x45_Stanag_red", 5}, {"SmokeShell", 2}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"CUP_1Rnd_HEDP_M203", 20}, {"ACE_HuntIR_M203", 3}, {"1Rnd_SmokeRed_Grenade_shell", 5}, {"ACE_HuntIR_monitor", 1}, {"1Rnd_Smoke_Grenade_shell", 5}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_Soldier_AT_F
	{
		displayName = "AT"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "bnae_r1_virtual", "Binocular", "CUP_launch_MAAWS"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {"CUP_optic_MAAWS_Scope", "CUP_MAAWS_HEAT_M"}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_556x45_Stanag_red", 5}, {"SmokeShell", 2}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"CUP_MAAWS_HEAT_M", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_Soldier_AAT_F
	{
		displayName = "Asistant AT"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "bnae_r1_virtual", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_556x45_Stanag_red", 5}, {"SmokeShell", 2}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"CUP_MAAWS_HEAT_M", 1}, {"CUP_MAAWS_HEDP_M", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_medic_F
	{
		displayName = "CLS"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "bnae_r1_virtual", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_556x45_Stanag_red", 5}, {"SmokeShell", 2}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_epinephrine", 10}, {"ACE_morphine", 20}, {"ACE_fieldDressing", 40}, {"ACE_bloodIV", 5}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_B_US_SpecOps_JTAC
	{
		displayName = "JTAC"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "bnae_r1_virtual", "Laserdesignator"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}, {"Laserbatteries", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_556x45_Stanag_red", 5}, {"SmokeShell", 2}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_Soldier_M_F
	{
		displayName = "marksman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk20", "bnae_r1_virtual", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_DMS", "CUP_20Rnd_762x51_B_SCAR"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_20Rnd_762x51_B_SCAR", 5}, {"SmokeShell", 2}, {"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 3}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_Soldier_AR_F
	{
		displayName = "autorifle"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_lmg_mk48", "bnae_r1_virtual", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"FHQ_optic_HWS", "hlc_100Rnd_762x51_M_M60E4"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"hlc_100Rnd_762x51_M_M60E4", 3}, {"SmokeShell", 2}, {"hlc_100Rnd_762x51_T_M60E4", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_helipilot_F
	{
		displayName = "Pilot"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"SMG_01_F", "bnae_r1_virtual"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_CrewHelmetHeli_B";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Rig_2";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_45ACP_Mag_SMG_01_Tracer_Red", 3}, {"SmokeShell", 4}, {"SmokeShellGreen", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ToolKit", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_helicrew_F
	{
		displayName = "Pilot"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"SMG_01_F", "bnae_r1_virtual"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_CrewHelmetHeli_B";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Rig_2";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_45ACP_Mag_SMG_01_Tracer_Red", 3}, {"SmokeShell", 4}, {"SmokeShellGreen", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ToolKit", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_Engineer_F
	{
		displayName = "Engineer"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "bnae_r1_virtual", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_556x45_Stanag_red", 5}, {"SmokeShell", 2}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ToolKit", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class I_Soldier_exp_F
	{
		displayName = "Explosive Specialist"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk16_STD", "bnae_r1_virtual", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_optic_HoloDesert", "30Rnd_556x45_Stanag_red"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_spec_black";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"30Rnd_556x45_Stanag_red", 5}, {"SmokeShell", 2}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_DefusalKit", 1}, {"ACE_Clacker", 1}, {"CUP_PipeBomb_M", 2}, {"DemoCharge_Remote_Mag", 2}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_I_RACS_MMG
	{
		displayName = "SpecOps Autorifle"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_SAMR", "bnae_r1_virtual", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Arco", "150Rnd_556x45_Drum_Mag_Tracer_F"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_I_B_PMC_Unit_11";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"150Rnd_556x45_Drum_Mag_Tracer_F", 1}, {"SmokeShell", 4}, {"CUP_HandGrenade_M67", 2}, {"hlc_muzzle_556NATO_KAC", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"150Rnd_556x45_Drum_Mag_Tracer_F", 4}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_I_RACS_Sniper
	{
		displayName = "SpecOps Marksman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"bnae_trg42_mmrs_camo1_virtual", "bnae_r1_virtual", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"bnae_muzzle_snd_virtual", "bnae_scope_snd_virtual", "5Rnd_338LM_Magazine"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_I_B_PMC_Unit_13";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"5Rnd_338LM_Magazine", 4}, {"SmokeShell", 4}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"5Rnd_338LM_Magazine", 8}, {"5Rnd_APDS_338LM_Magazine", 8}, {"bnae_silencer_virtual", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_I_RACS_Medic
	{
		displayName = "SpecOps Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_bcmblackjack", "bnae_r1_virtual", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"FHQ_optic_AC12136", "29rnd_300BLK_STANAG_T", "hlc_muzzle_300blk_KAC"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_I_B_PMC_Unit_20";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"29rnd_300BLK_STANAG_T", 3}, {"29rnd_300BLK_STANAG_S", 3}, {"SmokeShell", 4}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_epinephrine", 10}, {"ACE_morphine", 20}, {"ACE_fieldDressing", 40}, {"ACE_bloodIV", 5}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_I_RACS_Engineer
	{
		displayName = "SpecOps Demospec"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_bcmblackjack", "bnae_r1_virtual", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"FHQ_optic_AC12136", "29rnd_300BLK_STANAG_T", "hlc_muzzle_300blk_KAC"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_I_B_PMC_Unit_3";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"29rnd_300BLK_STANAG_T", 3}, {"29rnd_300BLK_STANAG_S", 3}, {"SmokeShell", 4}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_DefusalKit", 1}, {"ACE_Clacker", 1}, {"CUP_PipeBomb_M", 2}, {"DemoCharge_Remote_Mag", 2}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_I_RACS_SL
	{
		displayName = "SpecOps SL"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_bcmblackjack", "bnae_r1_virtual", "Laserdesignator"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"FHQ_optic_TWS3050", "29rnd_300BLK_STANAG_T", "hlc_muzzle_300blk_KAC"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_I_B_PMC_Unit_7";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"29rnd_300BLK_STANAG_T", 3}, {"29rnd_300BLK_STANAG_S", 3}, {"SmokeShell", 4}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"29rnd_300BLK_STANAG_T", 3}, {"29rnd_300BLK_STANAG_S", 3}, {"FHQ_optic_AC12136", 1}, {"Laserbatteries", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_I_RACS_GL
	{
		displayName = "SpecOps Grenadier"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk17_STD_EGLM", "bnae_r1_virtual", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"FHQ_optic_AC12136", "CUP_20Rnd_762x51_B_SCAR"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"8Rnd_45Super_Magazine"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_I_B_PMC_Unit_24";
		headgearClass = "H_JaKdo_Helm_Spec_Black";
		facewearClass = "";
		vestClass = "CUP_V_I_RACS_Carrier_Vest";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ACE_fieldDressing", 10}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"8Rnd_45Super_Magazine", 2}, {"CUP_20Rnd_762x51_B_SCAR", 6}, {"SmokeShell", 4}, {"CUP_HandGrenade_M67", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"CUP_1Rnd_HEDP_M203", 15}, {"CUP_20Rnd_762x51_B_SCAR", 3}, {"ACE_HuntIR_M203", 3}, {"1Rnd_SmokeRed_Grenade_shell", 5}, {"ACE_HuntIR_monitor", 1}, {"1Rnd_Smoke_Grenade_shell", 5}}; // Items to place in backpack. Includes weapon magazines
	};
};