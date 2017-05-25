class CfgMagazines
{
	class ACE_1Rnd_82mm_Mo_HE;
	class ACE_1Rnd_82mm_Mo_Smoke;
	class ACE_1Rnd_82mm_Mo_Illum;
	class LIB_1Rnd_82mm_Mo_HE: ACE_1Rnd_82mm_Mo_HE
	{
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell80.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\Mortars\shell80_he_co.paa"};
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_80_HE_ca.paa";
		ammo = "LIB_Sh_82_HE";
	};
	class LIB_1Rnd_82mm_Mo_Smoke: ACE_1Rnd_82mm_Mo_Smoke
	{
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell80.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\Mortars\shell80_smoke_co.paa"};	
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_80_Smoke_ca.paa";
	};
	class LIB_1Rnd_82mm_Mo_Illum: ACE_1Rnd_82mm_Mo_Illum
	{
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell80.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\Mortars\shell80_illum_co.paa"};		
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_80_Illum_ca.paa";
	};
	class LIB_1Rnd_81mm_Mo_HE: ACE_1Rnd_82mm_Mo_HE
	{
		displayName = "$STR_ACE_81mm_magazine_HE_displayName";
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell80.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\Mortars\shell80_he_co.paa"};
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_80_HE_ca.paa";
		ammo = "LIB_Sh_81_HE";
	};
	class LIB_1Rnd_81mm_Mo_Smoke: ACE_1Rnd_82mm_Mo_Smoke
	{
		displayName = "$STR_ACE_81mm_magazine_Smoke_displayName";
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell80.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\Mortars\shell80_smoke_co.paa"};		
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_80_Smoke_ca.paa";
	};
	class LIB_1Rnd_81mm_Mo_Illum: ACE_1Rnd_82mm_Mo_Illum
	{
		displayName = "$STR_ACE_81mm_magazine_Illum_displayName";
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell80.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\Mortars\shell80_illum_co.paa"};		
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_80_Illum_ca.paa";
	};
	class LIB_1Rnd_60mm_Mo_HE: ACE_1Rnd_82mm_Mo_HE
	{
		displayName = "$STR_ACE_60mm_magazine_HE_displayName";
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell60.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\Mortars\shell60_he_co.paa"};
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_60_HE_ca.paa";
		ammo = "LIB_Sh_60_HE";
		mass = 30;
	};
	class LIB_1Rnd_60mm_Mo_Smoke: ACE_1Rnd_82mm_Mo_Smoke
	{
		displayName = "$STR_ACE_60mm_magazine_Smoke_displayName";
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell60.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\Mortars\shell60_smoke_co.paa"};		
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_60_Smoke_ca.paa";
		mass = 30;
	};
	class LIB_1Rnd_60mm_Mo_Illum: ACE_1Rnd_82mm_Mo_Illum
	{
		displayName = "$STR_ACE_60mm_magazine_Illum_displayName";
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell60.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Ammoboxes_t\Mortars\shell60_illum_co.paa"};
		picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_60_Illum_ca.paa";
		mass = 30;
	};
};
