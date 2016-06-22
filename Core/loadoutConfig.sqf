/* Text Name, [[Classname],[Classname]] - Name, Variants */

INF_Loadout_PistolArray = compileFinal str
[
  ["P07 Pistol", [
      ["Original","hgun_P07_F",true]
  ]],
  ["Rook-40 Pistol", [
      ["Original","hgun_Rook40_F",true]
  ]],
  ["ACP-C2 Pistol", [
      ["Original","hgun_ACPC2_f",true]
  ]],
  ["Zubr Revolver", [
      ["Original","hgun_Pistol_heavy_02_F",true]
  ]],
  ["4-Five Pistol", [
      ["Original","hgun_Pistol_heavy_01_F",true]
  ]]  
];

INF_Loadout_SMGArray = compileFinal str
[
	["PDW2000 SMG", ["hgun_PDW2000_F"]],
	["Sting SMG", ["SMG_02_F"]],
	["Vermin SMG", ["SMG_01_F"]]
];

INF_Loadout_RifleArray = compileFinal str
[
	// Underwater Gun
	["SDAR Underwater Rifle", ["arifle_SDAR_F"]],

	// Assault Rifles
	["Mk20 Carbine", [
        ["Original","arifle_Mk20C_plain_F"],
        ["Camo", "arifle_Mk20C_F"]
    ]],
	["Mk20 Rifle", "arifle_Mk20_plain_F", 200],
	["Mk20 Rifle (Camo)", "arifle_Mk20_F", 200],
	["Mk20 EGLM Rifle", "arifle_Mk20_GL_plain_F", 250],
	["Mk20 EGLM Rifle (Camo)", "arifle_Mk20_GL_F", 250],

	["TRG-20 Carbine", "arifle_TRG20_F", 150],
	["TRG-21 Rifle ", "arifle_TRG21_F", 200],
	["TRG-21 EGLM Rifle", "arifle_TRG21_GL_F", 250],

	["Katiba Carbine", "arifle_Katiba_C_F", 150],
	["Katiba Rifle", "arifle_Katiba_F", 200],
	["Katiba GL Rifle", "arifle_Katiba_GL_F", 250],

	["MX Carbine", "arifle_MXC_F", 150],
	["MX Carbine (Black)", "arifle_MXC_Black_F", 150],
	["MX Rifle", "arifle_MX_F", 200],
	["MX Rifle (Black)", "arifle_MX_Black_F", 200],
	["MX 3GL Rifle", "arifle_MX_GL_F", 250],
	["MX 3GL Rifle (Black)", "arifle_MX_GL_Black_F", 250],

	// Marksman Rifles
	["MXM Rifle", "arifle_MXM_F", 300],
	["MXM Rifle (Black)", "arifle_MXM_Black_F", 300],
	["Rahim DMR Rifle", "srifle_DMR_01_F", 375],
	["Mk18 ABR Rifle", "srifle_EBR_F", 450],

	// DLC
	["Mk14 Rifle (Camo)", "srifle_DMR_06_camo_F", 500],
	["Mk14 Rifle (Olive)", "srifle_DMR_06_olive_F", 500],
	["Mk-I EMR Rifle", "srifle_DMR_03_F", 500],
	["Mk-I EMR Rifle (Camo)", "srifle_DMR_03_multicam_F", 500],
	["Mk-I EMR Rifle (Khaki)", "srifle_DMR_03_khaki_F", 500],
	["Mk-I EMR Rifle (Sand)", "srifle_DMR_03_tan_F", 500],
	["Mk-I EMR Rifle (Woodland)", "srifle_DMR_03_woodland_F", 500],
	["MAR-10 Rifle", "srifle_DMR_02_F", 750],
	["MAR-10 Rifle (Camo)", "srifle_DMR_02_camo_F", 750],
	["MAR-10 Rifle (Sand)", "srifle_DMR_02_sniper_F", 750],
	["Cyrus Rifle", "srifle_DMR_05_blk_F", 750],
	["Cyrus Rifle (Hex)", "srifle_DMR_05_hex_F", 750],
	["Cyrus Rifle (Tan)", "srifle_DMR_05_tan_f", 750],

	// Sniper Rifles
	["M320 LRR Sniper", "srifle_LRR_LRPS_F", 1000],
	["M320 LRR Sniper (Camo)", "srifle_LRR_camo_LRPS_F", 1200],
	["GM6 Lynx Sniper", "srifle_GM6_LRPS_F", 1250],
	["GM6 Lynx Sniper (Camo)", "srifle_GM6_camo_LRPS_F", 1500],

	["ASP-1 Kir Rifle", "srifle_DMR_04_F", 2000],
	["ASP-1 Kir Rifle (Tan)", "srifle_DMR_04_tan_F", 2000]
];