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
	
	class RM_SWAT_Chief_01
	{
		displayName = "SWAT Commander"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_Colt727", , "CUP_hgun_M9"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30rnd_556x45_EPR"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_15Rnd_9x19_M9"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_MilCap_Black";
		facewearClass = "G_RM_SWAT_Glasses";
		vestClass = "RM_SWAT_Vest_01";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemcTab"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 2}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2}, {"hlc_30rnd_556x45_EPR", 5}, {"ACE_CableTie", 3}, {"ACE_tourniquet", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_B_US_Medic
	{
		displayName = "SWAT Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_smg_mp5a4", , "CUP_hgun_M9"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_9x19_B_MP5", "CUP_acc_Flashlight", "optic_Aco_smg"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_15Rnd_9x19_M9"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "CUP_RUS_Balaclava_blk";
		vestClass = "RM_SWAT_Vest_01";
		backpackClass = "CUP_B_USPack_Black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 3}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 1}, {"hlc_30Rnd_9x19_B_MP5", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2}, {"ACE_morphine", 8}, {"ACE_epinephrine", 8}, {"ACE_quikclot", 10}, {"ACE_tourniquet", 5}, {"ACE_CableTie", 3}, {"ACE_elasticBandage", 10}, {"hlc_30Rnd_9x19_B_MP5", 3}, {"hlc_30Rnd_9x19_GD_MP5", 3}, {"ACE_surgicalKit", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_morphine", 20}, {"ACE_epinephrine", 20}, {"ACE_elasticBandage", 60}, {"ACE_tourniquet", 15}, {"ACE_bloodIV", 10}, {"ACE_Defibrillator", 1}, {"ACE_surgicalKit", 1}, {"ACE_personalAidKit", 2}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Soldier_TL_F
	{
		displayName = "SWAT Team Leader (Red)"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_saiga12k", , "CUP_hgun_M9"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_10rnd_12g_slug_S12"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_15Rnd_9x19_M9"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "CUP_RUS_Balaclava_blk";
		vestClass = "RM_SWAT_Vest_Red_01";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 2}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2}, {"hlc_10rnd_12g_buck_S12", 3}, {"hlc_10rnd_12g_slug_S12", 3}, {"ACE_CableTie", 3}, {"ACE_tourniquet", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"hlc_10rnd_12g_buck_S12", 2}, {"hlc_10rnd_12g_slug_S12", 2}}; // Items to place in backpack. Includes weapon magazines
	};
	class Meaty_teamlead_B_Sn
	{
		displayName = "SWAT Team Leader (Blue)"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_saiga12k", , "CUP_hgun_M9"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_10rnd_12g_slug_S12"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_15Rnd_9x19_M9"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "CUP_RUS_Balaclava_blk";
		vestClass = "RM_SWAT_Vest_Blue_01";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 2}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2}, {"hlc_10rnd_12g_buck_S12", 3}, {"hlc_10rnd_12g_slug_S12", 3}, {"ACE_CableTie", 3}, {"ACE_tourniquet", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"hlc_10rnd_12g_buck_S12", 2}, {"hlc_10rnd_12g_slug_S12", 2}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Soldier_F
	{
		displayName = "SWAT Officer (Red)"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_Colt727", , "CUP_hgun_M9"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30rnd_556x45_EPR"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_15Rnd_9x19_M9"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "CUP_RUS_Balaclava_blk";
		vestClass = "RM_SWAT_Vest_Red_01";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 2}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2}, {"hlc_30rnd_556x45_EPR", 7}, {"ACE_CableTie", 3}, {"ACE_tourniquet", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	class Meaty_Soldier_B_Sn
	{
		displayName = "SWAT Officer (Blue)"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_Colt727", , "CUP_hgun_M9"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30rnd_556x45_EPR"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_15Rnd_9x19_M9"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "CUP_RUS_Balaclava_blk";
		vestClass = "RM_SWAT_Vest_Blue_01";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 2}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2}, {"hlc_30rnd_556x45_EPR", 7}, {"ACE_CableTie", 3}, {"ACE_tourniquet", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_medic_F
	{
		displayName = "SWAT EMT (Red)"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_smg_mp5a4", , "CUP_hgun_M9"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_9x19_B_MP5", "CUP_acc_Flashlight", "optic_Aco_smg"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_15Rnd_9x19_M9"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "CUP_RUS_Balaclava_blk";
		vestClass = "RM_SWAT_Vest_Red_01";
		backpackClass = "CUP_B_USPack_Black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 3}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 1}, {"hlc_30Rnd_9x19_B_MP5", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2}, {"ACE_morphine", 8}, {"ACE_epinephrine", 8}, {"ACE_quikclot", 10}, {"ACE_tourniquet", 5}, {"ACE_CableTie", 3}, {"ACE_elasticBandage", 10}, {"hlc_30Rnd_9x19_B_MP5", 3}, {"hlc_30Rnd_9x19_GD_MP5", 3}, {"ACE_surgicalKit", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_morphine", 20}, {"ACE_epinephrine", 20}, {"ACE_elasticBandage", 60}, {"ACE_tourniquet", 15}, {"ACE_bloodIV", 10}, {"ACE_Defibrillator", 1}, {"ACE_surgicalKit", 1}, {"ACE_personalAidKit", 2}}; // Items to place in backpack. Includes weapon magazines
	};
	class Meaty_Medic_B_Sn
	{
		displayName = "SWAT EMT (Blue)"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_smg_mp5a4", , "CUP_hgun_M9"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_9x19_B_MP5", "CUP_acc_Flashlight", "optic_Aco_smg"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_15Rnd_9x19_M9"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "CUP_RUS_Balaclava_blk";
		vestClass = "RM_SWAT_Vest_Blue_01";
		backpackClass = "CUP_B_USPack_Black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 3}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 1}, {"hlc_30Rnd_9x19_B_MP5", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2}, {"ACE_morphine", 8}, {"ACE_epinephrine", 8}, {"ACE_quikclot", 10}, {"ACE_tourniquet", 5}, {"ACE_CableTie", 3}, {"ACE_elasticBandage", 10}, {"hlc_30Rnd_9x19_B_MP5", 3}, {"hlc_30Rnd_9x19_GD_MP5", 3}, {"ACE_surgicalKit", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_morphine", 20}, {"ACE_epinephrine", 20}, {"ACE_elasticBandage", 60}, {"ACE_tourniquet", 15}, {"ACE_bloodIV", 10}, {"ACE_Defibrillator", 1}, {"ACE_surgicalKit", 1}, {"ACE_personalAidKit", 2}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_soldier_exp_F
	{
		displayName = "SWAT EOD (Red)"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_smg_mp5a4", , "CUP_hgun_M9"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_9x19_B_MP5", "CUP_acc_Flashlight", "optic_Aco_smg"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_15Rnd_9x19_M9"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "CUP_RUS_Balaclava_blk";
		vestClass = "RM_SWAT_Vest_Red_01";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 3}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 1}, {"hlc_30Rnd_9x19_B_MP5", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2}, {"ACE_tourniquet", 1}, {"ACE_CableTie", 3}, {"hlc_30Rnd_9x19_B_MP5", 3}, {"hlc_30Rnd_9x19_GD_MP5", 3}, {"ACE_DefusalKit", 1}, {"ACE_Clacker", 1}, {"DemoCharge_Remote_Mag", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};class CUP_B_US_Soldier_Engineer_EOD
	{
		displayName = "SWAT EOD (Blue)"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_smg_mp5a4", , "CUP_hgun_M9"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_9x19_B_MP5", "CUP_acc_Flashlight", "optic_Aco_smg"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_15Rnd_9x19_M9"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "CUP_RUS_Balaclava_blk";
		vestClass = "RM_SWAT_Vest_Blue_01";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 3}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 1}, {"hlc_30Rnd_9x19_B_MP5", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2}, {"ACE_tourniquet", 1}, {"ACE_CableTie", 3}, {"hlc_30Rnd_9x19_B_MP5", 3}, {"hlc_30Rnd_9x19_GD_MP5", 3}, {"ACE_DefusalKit", 1}, {"ACE_Clacker", 1}, {"DemoCharge_Remote_Mag", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class RM_SWAT_Operator_Red_01
	{
		displayName = "SWAT Point Man (Red)"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_hgun_BallisticShield_Armed", , "hlc_smg_mp5k"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_15Rnd_9x19_M9"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"hlc_30Rnd_9x19_B_MP5", "optic_Aco_smg"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "CUP_RUS_Balaclava_blk";
		vestClass = "RM_SWAT_Vest_Red_01";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 3}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2},  {"ACE_tourniquet", 1}, {"ACE_CableTie", 3},  {"hlc_30Rnd_9x19_B_MP5", 2}, {"hlc_30Rnd_9x19_GD_MP5", 2}, {"CUP_15Rnd_9x19_M9", 8}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	class RM_SWAT_Operator_Blue_01
	{
		displayName = "SWAT Point Man (Blue)"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_hgun_BallisticShield_Armed", , "hlc_smg_mp5k"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_15Rnd_9x19_M9"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"hlc_30Rnd_9x19_B_MP5", "optic_Aco_smg"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "CUP_RUS_Balaclava_blk";
		vestClass = "RM_SWAT_Vest_Blue_01";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_morphine", 3}, {"ACE_epinephrine", 3}, {"ItemcTabHCam", 1}, {"ACE_quikclot", 10}, {"CUP_15Rnd_9x19_M9", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"ACE_M84", 2},  {"ACE_tourniquet", 1}, {"ACE_CableTie", 3},  {"hlc_30Rnd_9x19_B_MP5", 2}, {"hlc_30Rnd_9x19_GD_MP5", 2}, {"CUP_15Rnd_9x19_M9", 8}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
};