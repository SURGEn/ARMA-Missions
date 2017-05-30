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
	
	class CUP_O_sla_Commander
	{
		displayName = "Serbian Commander"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_aks74u", "Binocular", "CUP_hgun_Makarov"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_545x39_B_AK"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_8Rnd_9x18_Makarov_M"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_SLA_Officer_Suit";
		headgearClass = "CUP_H_SLA_OfficerCap";
		facewearClass = "";
		vestClass = "";
		backpackClass = "TFAR_rt1523g_big_rhs";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemcTab"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_epinephrine", 2}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 4}, {"hlc_30Rnd_545x39_B_AK", 1}, {"SmokeShell", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_TK_Officer
	{
		displayName = "Greek Commander"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_aks74u", "Binocular", "CUP_hgun_Makarov"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_545x39_B_AK"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_8Rnd_9x18_Makarov_M"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_SLA_Officer_Suit";
		headgearClass = "CUP_H_SLA_OfficerCap";
		facewearClass = "";
		vestClass = "CUP_V_O_TK_OfficerBelt2";
		backpackClass = "TFAR_rt1523g_big_rhs";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemcTab"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_epinephrine", 2}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 4}, {"hlc_30Rnd_545x39_B_AK", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_TK_SpecOps
	{
		displayName = "Command Bodyguard"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_akm", "Binocular", "CUP_hgun_Makarov"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_762x39_b_ak"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_8Rnd_9x18_Makarov_M"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "H_JaKdo_BeretRot";
		facewearClass = "G_RM_SWAT_Bandana";
		vestClass = "V_BandollierB_rgr";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_epinephrine", 4}, {"ACE_fieldDressing", 20}, {"ACE_morphine", 8}, {"ACE_bloodIV_500", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"ACE_EntrenchingTool", 1}, {"SmokeShell", 2}, {"hlc_30Rnd_762x39_b_ak", 4}, {"CUP_HandGrenade_RGD5", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_sla_Soldier_SL
	{
		displayName = "Serbian Regular SL"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_ak74_dirty", "CUP_hgun_Makarov", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_545x39_B_AK"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_8Rnd_9x18_Makarov_M"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_SLA_MixedCamo";
		headgearClass = "H_JaKdo_BeretRot";
		facewearClass = "";
		vestClass = "CUP_V_O_SLA_Flak_Vest02";
		backpackClass = "TFAR_rt1523g_big_rhs";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_EntrenchingTool", 1}, {"ACE_epinephrine", 2}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 4}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_HandGrenade_RGD5", 2}, {"SmokeShell", 2}, {"hlc_30Rnd_545x39_B_AK", 4}, {"CUP_8Rnd_9x18_Makarov_M", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_sla_Medic
	{
		displayName = "Serbian Regular Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_545x39_B_AK"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_SLA_MixedCamo";
		headgearClass = "H_JaKdo_BeretRot";
		facewearClass = "";
		vestClass = "CUP_V_I_Carrier_Belt";
		backpackClass = "CUP_B_SLA_Medicbag";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_EntrenchingTool", 1}, {"ACE_epinephrine", 2}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 4}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = { {"SmokeShell", 2}, {"hlc_30Rnd_545x39_B_AK", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_epinephrine", 10}, {"ACE_fieldDressing", 40}, {"ACE_morphine", 20}, {"ACE_bloodIV", 5}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_SLA_Soldier_Backpack
	{
		displayName = "Serbian Regular TL"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_ak74_dirty", "CUP_hgun_Makarov", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_545x39_B_AK"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_8Rnd_9x18_Makarov_M"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_SLA_MixedCamo";
		headgearClass = "H_JaKdo_BeretRot";
		facewearClass = "";
		vestClass = "CUP_V_O_SLA_Flak_Vest02";
		backpackClass = "CUP_B_RPGPack_Khaki";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_EntrenchingTool", 1}, {"ACE_epinephrine", 2}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 4}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_HandGrenade_RGD5", 2}, {"SmokeShell", 2}, {"hlc_30Rnd_545x39_B_AK", 4}, {"CUP_8Rnd_9x18_Makarov_M", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"CUP_PG7VL_M", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_sla_Soldier_AT
	{
		displayName = "Serbian Regular AT"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_ak74_dirty", "CUP_launch_RPG7V"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_545x39_B_AK"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {"CUP_PG7VL_M"}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_SLA_MixedCamo";
		headgearClass = "H_JaKdo_BeretRot";
		facewearClass = "";
		vestClass = "CUP_V_O_SLA_Flak_Vest02";
		backpackClass = "CUP_B_RPGPack_Khaki";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_EntrenchingTool", 1}, {"ACE_epinephrine", 2}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 4}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_HandGrenade_RGD5", 1}, {"SmokeShell", 1}, {"hlc_30Rnd_545x39_B_AK", 3}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"CUP_PG7VL_M", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_sla_Soldier_GL
	{
		displayName = "Serbian Regular GL"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_ak74m_gl"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_545x39_B_AK", "CUP_1Rnd_HE_GP25_M"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_SLA_MixedCamo";
		headgearClass = "H_JaKdo_BeretRot";
		facewearClass = "";
		vestClass = "CUP_V_O_SLA_Flak_Vest02";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_EntrenchingTool", 1}, {"ACE_epinephrine", 2}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 4}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 1}, {"hlc_30Rnd_545x39_B_AK", 3}, {"CUP_1Rnd_HE_GP25_M", 7}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_sla_Soldier_AR
	{
		displayName = "Serbian Regular AR"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_rpk"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_45Rnd_762x39_m_rpk"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_SLA_MixedCamo";
		headgearClass = "H_JaKdo_BeretRot";
		facewearClass = "";
		vestClass = "CUP_V_O_SLA_Flak_Vest02";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_EntrenchingTool", 1}, {"ACE_epinephrine", 2}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 4}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"hlc_45Rnd_762x39_m_rpk", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_TK_INS_Commander
	{
		displayName = "Greek Irregular SL"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_aks74u", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_545x39_B_AK"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "H_JaKdo_BeretRot";
		facewearClass = "";
		vestClass = "V_BandollierB_oli";
		backpackClass = "TFAR_rt1523g_big_rhs";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_epinephrine", 1}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"hlc_30Rnd_545x39_B_AK", 3}, {"CUP_HandGrenade_RGD5", 1}, {"SmokeShell", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_TK_INS_Soldier_TL
	{
		displayName = "Greek Irregular TL"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_aks74u", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_545x39_B_AK"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "H_JaKdo_BeretRot";
		facewearClass = "";
		vestClass = "V_BandollierB_oli";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_epinephrine", 1}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 2} }; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"hlc_30Rnd_545x39_B_AK", 3}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_TK_INS_Guerilla_Medic
	{
		displayName = "Greek Irregular Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_srifle_LeeEnfield"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_10x_303_M"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "H_JaKdo_BeretRot";
		facewearClass = "";
		vestClass = "V_BandollierB_oli";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_epinephrine", 1}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_10x_303_M", 4}, {"ACE_epinephrine", 4}, {"ACE_fieldDressing", 20}, {"ACE_morphine", 8}, {"ACE_bloodIV", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class CUP_O_TK_INS_Soldier_Enfield
	{
		displayName = "Greek Irregular Soldier"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_srifle_LeeEnfield"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_10x_303_M"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "H_JaKdo_BeretRot";
		facewearClass = "";
		vestClass = "V_BandollierB_oli";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_epinephrine", 1}, {"ACE_fieldDressing", 10}, {"ACE_morphine", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_10x_303_M", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
};