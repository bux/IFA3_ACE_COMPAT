class CfgMagazines
{
	class ACE_1Rnd_82mm_Mo_HE;
	class ACE_1Rnd_82mm_Mo_Smoke;
	class ACE_1Rnd_82mm_Mo_Illum;
	class LIB_1Rnd_82mm_Mo_HE: ACE_1Rnd_82mm_Mo_HE
	{
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_het_shell.p3d";
		picture = "\z\ifa3_comp_ace\addons\mortar\ui\ui_he_round.paa";
	};
	class LIB_1Rnd_82mm_Mo_Smoke: ACE_1Rnd_82mm_Mo_Smoke
	{
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_smoke_shell.p3d";
		picture = "\z\ifa3_comp_ace\addons\mortar\ui\ui_smoke_round.paa";
	};
	class LIB_1Rnd_82mm_Mo_Illum: ACE_1Rnd_82mm_Mo_Illum
	{
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_illum_shell.p3d";
		picture = "\z\ifa3_comp_ace\addons\mortar\ui\ui_illum_round.paa";
	};
};
