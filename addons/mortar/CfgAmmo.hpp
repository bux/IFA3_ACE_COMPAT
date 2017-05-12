class CfgAmmo {

	class FlareCore;
	class Flare_82mm_AMOS_White: FlareCore
	{
		intensity = 15000;
	};

	class Sh_82mm_AMOS;
	class LIB_Sh_82_HE: Sh_82mm_AMOS {
		ace_caliber = 82;
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 3050;
        ace_frag_charge = 400;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";		
	};

	class LIB_Sh_81_HE: LIB_Sh_82_HE {
		ace_caliber = 81;
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 3500;
        ace_frag_charge = 459;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";	
	};

	class LIB_Sh_60_HE: LIB_Sh_82_HE {
		ace_caliber = 60;
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 1380;
        ace_frag_charge = 185;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";	
	};
};
