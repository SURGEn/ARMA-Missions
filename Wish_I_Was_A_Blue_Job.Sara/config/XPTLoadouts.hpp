// XPTloadouts.hpp
// Used for defining advanced respawn loadouts for players
// Default behaviour is to check if the player unit has a special loadout defined. Otherwise, it will check to see if the classname matches a loadout
// Advanced functionality allows mission creator to define exactly where items are placed in unit inventories
// Also supports sub-loadout randomization. If a loadout has sub-classes defined, the script will automatically select one of them to apply to the unit.
class loadouts
{
	class example
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_SLR", "", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "hlc_20Rnd_762x51_B_fal"}; // Primary weapon items. Includes magazine you want loaded initially
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
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class I_Soldier_SL_F
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_SLR", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_20Rnd_762x51_B_fal"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "CUP_H_TK_Beret";
		facewearClass = "";
		vestClass = "CUP_V_O_Ins_Carrier_Rig_MG";
		backpackClass = "TFAR_rt1523g";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 3},{"ACE_morphine", 5}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_HandGrenade_M67", 1}, {"SmokeShell", 2}, {"SmokeShellBlue", 1}, {"SmokeShellRed", 1}, {"hlc_20Rnd_762x51_B_fal", 5}, {"CUP_7Rnd_45ACP_1911", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class I_officer_F
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_SLR", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_20Rnd_762x51_B_fal"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "CUP_H_TK_Beret";
		facewearClass = "";
		vestClass = "CUP_V_O_Ins_Carrier_Rig_MG";
		backpackClass = "TFAR_rt1523g";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 3},{"ACE_morphine", 5}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_HandGrenade_M67", 1}, {"SmokeShell", 2}, {"SmokeShellBlue", 1}, {"SmokeShellRed", 1}, {"hlc_20Rnd_762x51_B_fal", 5}, {"CUP_7Rnd_45ACP_1911", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class I_Soldier_TL_F
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_SLR", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_20Rnd_762x51_B_fal"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "CUP_H_TK_Beret";
		facewearClass = "";
		vestClass = "CUP_V_O_Ins_Carrier_Rig_MG";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 3},{"ACE_morphine", 5}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_HandGrenade_M67", 1}, {"SmokeShell", 2}, {"SmokeShellBlue", 1}, {"SmokeShellRed", 1}, {"hlc_20Rnd_762x51_B_fal", 5}, {"CUP_7Rnd_45ACP_1911", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class I_Soldier_F
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_SLR", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_20Rnd_762x51_B_fal"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "CUP_H_ChDKZ_Cap";
		facewearClass = "";
		vestClass = "CUP_V_O_Ins_Carrier_Rig_MG";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 3},{"ACE_morphine", 5}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_HandGrenade_M67", 1}, {"SmokeShell", 2}, {"SmokeShellBlue", 1}, {"SmokeShellRed", 1}, {"hlc_20Rnd_762x51_B_fal", 5}, {"CUP_7Rnd_45ACP_1911", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class I_Soldier_LAT_F
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_SLR", "CUP_launch_M72A6", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_20Rnd_762x51_B_fal"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {"CUP_M72A6_M"}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "CUP_H_ChDKZ_Cap";
		facewearClass = "";
		vestClass = "CUP_V_O_Ins_Carrier_Rig_MG";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 3},{"ACE_morphine", 5}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_HandGrenade_M67", 1}, {"SmokeShell", 2}, {"SmokeShellBlue", 1}, {"SmokeShellRed", 1}, {"hlc_20Rnd_762x51_B_fal", 5}, {"CUP_7Rnd_45ACP_1911", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class I_Soldier_M_F
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_SLR", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_20Rnd_762x51_B_fal", "hlc_optic_suit"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "H_Booniehat_oli";
		facewearClass = "";
		vestClass = "CUP_V_O_Ins_Carrier_Rig_MG";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 3},{"ACE_morphine", 5}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_HandGrenade_M67", 1}, {"SmokeShell", 2}, {"SmokeShellBlue", 1}, {"SmokeShellRed", 1}, {"hlc_20Rnd_762x51_B_fal", 5}, {"CUP_7Rnd_45ACP_1911", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class I_Soldier_AR_F
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_lmg_M240", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "H_Booniehat_oli";
		facewearClass = "";
		vestClass = "CUP_V_O_Ins_Carrier_Rig_MG";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 3},{"ACE_morphine", 5}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_HandGrenade_M67", 1}, {"SmokeShell", 2}, {"SmokeShellBlue", 1}, {"SmokeShellRed", 1}, {"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", 1}, {"CUP_7Rnd_45ACP_1911", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class I_Soldier_AAR_F
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_SLR", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_20Rnd_762x51_B_fal"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_U_O_TK_Green";
		headgearClass = "H_Booniehat_oli";
		facewearClass = "";
		vestClass = "CUP_V_O_Ins_Carrier_Rig_MG";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 3},{"ACE_morphine", 5}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"SmokeShell", 2}, {"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", 1}, {"hlc_20Rnd_762x51_B_fal", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
};