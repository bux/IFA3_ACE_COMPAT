class CfgMagazines
{
	class ACE_1Rnd_82mm_Mo_HE;
	class ACE_1Rnd_82mm_Mo_Smoke;
	class ACE_1Rnd_82mm_Mo_Illum;
	class LIB_1Rnd_82mm_Mo_HE: ACE_1Rnd_82mm_Mo_HE
	{
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_shell.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ifa3_comp_ace\addons\mortar\data\82mm_ammobox_heat_co.paa"};
		picture = "\z\ifa3_comp_ace\addons\mortar\ui\ui_he_round.paa";
	};
	class LIB_1Rnd_82mm_Mo_Smoke: ACE_1Rnd_82mm_Mo_Smoke
	{
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_shell.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ifa3_comp_ace\addons\mortar\data\82mm_ammobox_smoke_co.paa"};		
		picture = "\z\ifa3_comp_ace\addons\mortar\ui\ui_smoke_round.paa";
	};
	class LIB_1Rnd_82mm_Mo_Illum: ACE_1Rnd_82mm_Mo_Illum
	{
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_shell.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ifa3_comp_ace\addons\mortar\data\82mm_ammobox_illum_co.paa"};		
		picture = "\z\ifa3_comp_ace\addons\mortar\ui\ui_illum_round.paa";
	};
};
