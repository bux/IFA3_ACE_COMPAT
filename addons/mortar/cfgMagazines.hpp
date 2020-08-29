class CfgMagazines
{
	class 8Rnd_82mm_Mo_Smoke_white;
	class ACE_1Rnd_82mm_Mo_HE;
	class ACE_1Rnd_82mm_Mo_Smoke;
	class ACE_1Rnd_82mm_Mo_Illum;
	class LIB_8Rnd_82mmHE_BM37;
	class LIB_8Rnd_81mmHE_GRWR34;
	class LIB_8Rnd_60mmHE_M2;
	class LIB_1rnd_82mmHE_BM37: LIB_8Rnd_82mmHE_BM37
	{
		ace_arsenal_hide = -1;
	};
	class LIB_82mm_BM37_SmokeShell: 8Rnd_82mm_Mo_Smoke_white
	{
		ace_arsenal_hide = -1;
	};
	class LIB_1rnd_81mmHE_GRWR34: LIB_8Rnd_81mmHE_GRWR34
	{
		ace_arsenal_hide = -1;
	};
	class LIB_81mm_GRWR34_SmokeShell: 8Rnd_82mm_Mo_Smoke_white
	{
		ace_arsenal_hide = -1;
	};
	class LIB_1rnd_60mmHE_M2: LIB_8Rnd_60mmHE_M2
	{
		ace_arsenal_hide = -1;
	};
	class LIB_60mm_M2_SmokeShell: 8Rnd_82mm_Mo_Smoke_white
	{
		ace_arsenal_hide = -1;
	};
	class LIB_1Rnd_82mm_Mo_HE: LIB_1rnd_82mmHE_BM37
	{
		ace_arsenal_hide = 1;
		scope = 1;
	};
	class LIB_1Rnd_82mm_Mo_Smoke: LIB_82mm_BM37_SmokeShell
	{
		ace_arsenal_hide = 1;
		scope = 1;
	};
	class LIB_1Rnd_82mm_Mo_Illum: ACE_1Rnd_82mm_Mo_Illum
	{
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell80.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\WW2_Mortars\shell80_illum_co.paa"};
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_80_Illum_ca.paa";
	};
	class LIB_1Rnd_81mm_Mo_HE: LIB_1rnd_81mmHE_GRWR34
	{
		ace_arsenal_hide = 1;
		scope = 1;
	};
	class LIB_1Rnd_81mm_Mo_Smoke: LIB_81mm_GRWR34_SmokeShell
	{
		ace_arsenal_hide = 1;
		scope = 1;
	};
	class LIB_1Rnd_81mm_Mo_Illum: ACE_1Rnd_82mm_Mo_Illum
	{
		displayName = "$STR_ACE_81mm_magazine_Illum_displayName";
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell80.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\WW2_Mortars\shell80_illum_co.paa"};
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_80_Illum_ca.paa";
	};
	class LIB_1Rnd_60mm_Mo_HE: LIB_1rnd_60mmHE_M2
	{
		ace_arsenal_hide = 1;
		scope = 1;
	};
	class LIB_1Rnd_60mm_Mo_Smoke: LIB_60mm_M2_SmokeShell
	{
		ace_arsenal_hide = 1;
		scope = 1;
	};
	class LIB_1Rnd_60mm_Mo_Illum: ACE_1Rnd_82mm_Mo_Illum
	{
		displayName = "$STR_ACE_60mm_magazine_Illum_displayName";
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell60.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\WW2_Mortars\shell60_illum_co.paa"};
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_60_Illum_ca.paa";
		mass = 30;
	};
};
