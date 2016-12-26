class CfgMagazines
{
	class 8Rnd_82mm_Mo_shells;
	class 8Rnd_82mm_Mo_Flare_white;
	class 8Rnd_82mm_Mo_Smoke_white;
	class lex_82mm_HE_round: 8Rnd_82mm_Mo_shells
	{
		count = 1;
		scope = 2;
		scopeCurator = 2;
		author = "Lex (ACE)";
		displayName = "$STR_ace_ifa3mortar_mortar_mine_HE";
		displayNameShort = "$STR_ace_ifa3mortar_mortar_mine_HE";
		descriptionShort = "$STR_ace_ifa3mortar_desc_mortar_mine_HE";
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_het_shell";
		picture = "\z\ifa3_comp_ace\addons\mortar\ui\ui_he_round";
		ammo = "HE_82mm_mortar";
		mass = 50;
	};
	class lex_82mm_Smoke_round: 8Rnd_82mm_Mo_Smoke_white
	{
		count = 1;
		scope = 2;
		scopeCurator = 2;
		author = "Lex (ACE)";
		displayName = "$STR_ace_ifa3mortar_mortar_mine_Smoke";
		displayNameShort = "$STR_ace_ifa3mortar_mortar_mine_Smoke";
		descriptionShort = "$STR_ace_ifa3mortar_desc_mortar_mine_Smoke";
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_smoke_shell";
		picture = "\z\ifa3_comp_ace\addons\mortar\ui\ui_smoke_round";
		ammo = "Smoke_82mm_mortar_White";
		mass = 50;
	};
	class lex_82mm_Illum_round: 8Rnd_82mm_Mo_Flare_white
	{
		count = 1;
		scope = 2;
		scopeCurator = 2;
		author = "Lex (ACE)";
		displayName = "$STR_ace_ifa3mortar_mortar_mine_Illum";
		displayNameShort = "$STR_ace_ifa3mortar_mortar_mine_Illum";
		descriptionShort = "$STR_ace_ifa3mortar_desc_mortar_mine_Illum";
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_illum_shell";
		picture = "\z\ifa3_comp_ace\addons\mortar\ui\ui_illum_round";
		ammo = "Illum_82mm_mortar_White";
		mass = 50;
	};
};