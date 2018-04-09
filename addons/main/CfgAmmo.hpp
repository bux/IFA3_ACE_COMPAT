class CfgAmmo {

    class LIB_B_9x18_Ball;
    class LIB_B_9x19_Ball: LIB_B_9x18_Ball {
        ACE_caliber = 9.017;
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 8.0352;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619 };
        ACE_ballisticCoefficients[] = { 0.165 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 340,370,400 };
        ACE_barrelLengths[] = { 101.6,127,228.6 };
    };

    class LIB_Bullet_base;
	class LIB_B_45ACP_Ball: LIB_Bullet_base {
        ACE_caliber = 11.481;
        ACE_bulletLength = 17.272;
        ACE_bulletMass = 14.904;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619 };
        ACE_ballisticCoefficients[] = { 0.195 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 230,250,285 };
        ACE_barrelLengths[] = { 101.6,127,228.6 };
    };
	
	class LIB_B_762x25_Ball: LIB_Bullet_base { // Using LIB_B_762x54_Ball
        ACE_caliber = 7.925;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.8496;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19 };
        ACE_ballisticCoefficients[] = { 0.4 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 700,800,820,833 };
        ACE_barrelLengths[] = { 406.4,508,609.6,660.4 };
    };
    
	class LIB_B_762x54_Ball: LIB_Bullet_base {
        ACE_caliber=7.925;
        ACE_bulletLength=28.956;
        ACE_bulletMass=9.8496;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.4};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={700, 800, 820, 833};
        ACE_barrelLengths[]={406.4, 508.0, 609.6, 660.4};
    };
	
	class LIB_B_762x63_Ball: LIB_Bullet_base {
        ACE_caliber=7.823;
        ACE_bulletLength=34.366;
        ACE_bulletMass=12.312;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.268};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={865, 900, 924};
        ACE_barrelLengths[]={508.0, 609.6, 660.4};
    };
	
	class LIB_B_792x57_Ball: LIB_Bullet_base {
        ACE_caliber = 7.925;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.8496;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19 };
        ACE_ballisticCoefficients[] = { 0.4 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 700,800,820,833 };
        ACE_barrelLengths[] = { 406.4,508,609.6,660.4 };
    };
	
	class LIB_B_792x33_Ball: LIB_Bullet_base { // Using LIB_B_762x54_Ball
        ACE_caliber = 7.925;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.8496;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19 };
        ACE_ballisticCoefficients[] = { 0.4 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 700,800,820,833 };
        ACE_barrelLengths[] = { 406.4,508,609.6,660.4 };
    };
	
	class LIB_B_145x144_Ball: LIB_Bullet_base {
        ACE_caliber = 7.925;
        ACE_bulletLength = 36.26;
        ACE_bulletMass = 64;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619 };
        ACE_ballisticCoefficients[] = { 1.05 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 1114 };
        ACE_barrelLengths[] = { 1350 };
    };
	
	class BulletBase_NonAceAB//BulletBase;
	class LIB_M2_Flamethrower_Ammo: BulletBase_NonAceAB//BulletBase
	{
        ACE_caliber = 0;
        ACE_bulletLength = 0;
        ACE_bulletMass = 0;
        ACE_ammoTempMuzzleVelocityShifts[] = {};
        ACE_ballisticCoefficients[] = { 0 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 40 };
        ACE_barrelLengths[] = { 0 };
	};
	
    class LIB_Bullet_Vehicle_base;
    class LIB_B_127x108_Ball: LIB_Bullet_Vehicle_base {
        ACE_caliber = 14.88;
        ACE_bulletLength = 64.516;
        ACE_bulletMass = 48.6;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619 };
        ACE_ballisticCoefficients[] = { 1.05 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 300 };
        ACE_barrelLengths[] = { 436.88 };
    };

	
    class LIB_Bullet_AA_base;
    class LIB_B_23mm_AA: LIB_Bullet_AA_base {
        ace_rearm_caliber = 23;
    };

    class LIB_4x_SprGr_FlaK_38: LIB_Bullet_AA_base {
        ace_rearm_caliber = 20;
    };
    class LIB_SprGr_FlaK_38: LIB_4x_SprGr_FlaK_38 {
        ace_rearm_caliber = 20;
    };

    class B_37mm_AA: LIB_B_23mm_AA {
        ace_rearm_caliber = 37;
    };

    class LIB_Rocket_base;
    class LIB_PzFaust_30m: LIB_Rocket_base {
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
    };

    class LIB_R_88mm_RPzB: LIB_Rocket_base {
        ace_frag_enabled = 1;
        ace_frag_metal = 3300;
        ace_frag_charge = 700;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = { "ACE_frag_small" };
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };

    class LIB_60mm_M6: LIB_Rocket_base {
        ace_frag_enabled = 1;
        ace_frag_metal = 3300;
        ace_frag_charge = 700;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = { "ACE_frag_small" };
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };

    class LIB_GrenadeHand_base;
    class LIB_shg24: LIB_GrenadeHand_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 110;
        ace_frag_charge = 165;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
		ace_advanced_throwing_torqueDirection[] = {1,0.2,0};
		ace_advanced_throwing_torqueMagnitude = "(250 + random 100)";
    };

    class LIB_shg24x7: LIB_GrenadeHand_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 770;
        ace_frag_charge = 1155;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
		ace_advanced_throwing_torqueDirection[] = {1,0.2,0};
		ace_advanced_throwing_torqueMagnitude = "(100 + random 100)";
    };

    class LIB_m39: LIB_GrenadeHand_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 340;
        ace_frag_charge = 112;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };

    class LIB_f1: LIB_GrenadeHand_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 600;
        ace_frag_charge = 60;
        ace_frag_gurney_c = 2320;
        ace_frag_gurney_k = "3/5";
    };

    class LIB_rg42: LIB_GrenadeHand_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_small_HD" };
        ace_frag_metal = 500;
        ace_frag_charge = 200;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };

    class LIB_rpg6: LIB_GrenadeHand_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 1100;
        ace_frag_charge = 570;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
		ace_advanced_throwing_torqueDirection[] = {1,0.2,0};
		ace_advanced_throwing_torqueMagnitude = "(100 + random 100)";
    };

    class LIB_pwm: LIB_GrenadeHand_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 1000;
        ace_frag_charge = 500;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
		ace_advanced_throwing_torqueDirection[] = {1,0.2,0};
		ace_advanced_throwing_torqueMagnitude = "(10 + random 100)";
    };

    class LIB_US_Mk_2: LIB_GrenadeHand_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_small_HD" };
        ace_frag_metal = 595;
        ace_frag_charge = 57;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };

	class LIB_Grenade_base;
	class LIB_G_SPRGR_30: LIB_Grenade_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 255;
        ace_frag_charge = 31;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };
	
	class LIB_G_PZGR_30: LIB_Grenade_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 240;
        ace_frag_charge = 50;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };
	
	class LIB_G_PZGR_40: LIB_Grenade_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 380;
        ace_frag_charge = 127.6;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };
	
	class LIB_G_MK2: LIB_Grenade_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_small_HD" };
        ace_frag_metal = 595;
        ace_frag_charge = 57;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };
	
	class LIB_G_M9A1: LIB_Grenade_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 590;
        ace_frag_charge = 113;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };
	
	class LIB_G_DYAKONOV: LIB_Grenade_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 360;
        ace_frag_charge = 40;
        ace_frag_gurney_c = 2320;
        ace_frag_gurney_k = "3/5";
    };
	
	class LIB_Bomb_base;
    class LIB_FAB500_Bomb: LIB_Bomb_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_large","ACE_frag_large","ACE_frag_large_HD","ACE_frag_large","ACE_frag_huge","ACE_frag_huge_HD","ACE_frag_huge" };
        ace_frag_metal = 515;
        ace_frag_charge = 226;
        ace_frag_gurney_c = 2027; //60% amatol (1886) + 40% TNT (2240) = 2027 m/s
        ace_frag_gurney_k = "1/2";
    };

    class LIB_SC500_Bomb: LIB_FAB500_Bomb {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_large","ACE_frag_large","ACE_frag_large_HD","ACE_frag_large","ACE_frag_huge","ACE_frag_huge_HD","ACE_frag_huge" };
        ace_frag_metal = 500;
        ace_frag_charge = 260;
        ace_frag_gurney_c = 2027; //60% amatol (1886) + 40% TNT (2240) = 2027 m/s
        ace_frag_gurney_k = "1/2";
    };

    class LIB_FAB250_Bomb: LIB_Bomb_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_large","ACE_frag_large","ACE_frag_large_HD","ACE_frag_large","ACE_frag_huge","ACE_frag_huge_HD","ACE_frag_huge" };
        ace_frag_metal = 207;
        ace_frag_charge = 113;
        ace_frag_gurney_c = 2027; //60% amatol (1886) + 40% TNT (2240) = 2027 m/s
        ace_frag_gurney_k = "1/2";
    };

    class LIB_SC250_Bomb: LIB_FAB250_Bomb {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_large","ACE_frag_large","ACE_frag_large_HD","ACE_frag_large","ACE_frag_huge","ACE_frag_huge_HD","ACE_frag_huge" };
        ace_frag_metal = 250;
        ace_frag_charge = 130;
        ace_frag_gurney_c = 2027; //60% amatol (1886) + 40% TNT (2240) = 2027 m/s
        ace_frag_gurney_k = "1/2";
    };

    class LIB_SC50_Bomb: LIB_Bomb_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_large","ACE_frag_large","ACE_frag_large_HD","ACE_frag_large","ACE_frag_huge","ACE_frag_huge_HD","ACE_frag_huge" };
        ace_frag_metal = 50;
        ace_frag_charge = 30;
        ace_frag_gurney_c = 2027; //60% amatol (1886) + 40% TNT (2240) = 2027 m/s
        ace_frag_gurney_k = "1/2";
    };

    class LIB_US_500lb_Bomb: LIB_Bomb_base {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_large","ACE_frag_large","ACE_frag_large_HD","ACE_frag_large","ACE_frag_huge","ACE_frag_huge_HD","ACE_frag_huge" };
        ace_frag_metal = 213;
        ace_frag_charge = 63;
        ace_frag_gurney_c = 2027; //60% amatol (1886) + 40% TNT (2240) = 2027 m/s
        ace_frag_gurney_k = "1/2";
    };


    class Sh_82mm_AMOS;
    class LIB_Sh_82_HE: Sh_82mm_AMOS {
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 3400;
        ace_frag_charge = 420;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "1/2";
        ace_rearm_caliber = 82;
    };

    class ARTY_LIB_Sh_82_HE: LIB_Sh_82_HE {
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 3400;
        ace_frag_charge = 420;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "1/2";
        ace_rearm_caliber = 82;
    };

    class LIB_Sh_81_HE: LIB_Sh_82_HE {
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 3110;
        ace_frag_charge = 100;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "1/2";
        ace_rearm_caliber = 81;
    };

    class ARTY_LIB_Sh_81_HE: LIB_Sh_81_HE {
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 3110;
        ace_frag_charge = 400;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "1/2";
        ace_rearm_caliber = 81;
    };

    class ShellBase;
    class LIB_FlakExplosion: ShellBase {
        ace_frag_skip = 1;
    };

    class LIB_Shell_base;
    class LIB_BR471_AP: LIB_Shell_base {
        ace_rearm_caliber = 122;
    };

    class LIB_PzGr39_KWK40_AP: LIB_Shell_base {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_ShellAPCR_base;
    class LIB_PzGr40_KWK40_APCR: LIB_ShellAPCR_base {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_PzGr3942_KwK42_AP: LIB_Shell_base {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_PzGr4042_KwK42_APCR: LIB_ShellAPCR_base {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_PzGr43_AP: LIB_Shell_base {
        ace_rearm_caliber = 88;
        ace_frag_skip = 1;
    };

    class LIB_PzGr40_APCR: LIB_ShellAPCR_base {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_PzGr39_KwK36_AP: LIB_Shell_base {
        ace_rearm_caliber = 88;
        ace_frag_skip = 1;
    };

    class LIB_PzGr40_KwK36_APCR: LIB_ShellAPCR_base {
        ace_rearm_caliber = 88;
        ace_frag_skip = 1;
    };

    class LIB_BR365_AP: LIB_Shell_base {
        ace_rearm_caliber = 85;
        ace_frag_skip = 1;
    };

    class LIB_BR365P_APCR: LIB_ShellAPCR_base {
        ace_rearm_caliber = 85;
        ace_frag_skip = 1;
    };

    class LIB_M61_M1_AP: LIB_Shell_base {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_T45_M1_APCR: LIB_ShellAPCR_base {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_76mm_Shell_Base: LIB_Shell_base {
        ace_rearm_caliber = 76;
        ace_frag_skip = 1;
    };

    class LIB_BR350P_APCR: LIB_76mm_Shell_Base {
        ace_rearm_caliber = 76;
        ace_frag_skip = 1;
    };

    class LIB_BR350B_AP: LIB_76mm_Shell_Base {
        ace_rearm_caliber = 76;
        ace_frag_skip = 1;
    };

	class LIB_KGrRotPz_K51_AP: LIB_Shell_base {
		ace_rearm_caliber = 75;
        ace_frag_skip = 1;
	};
	
    class LIB_Bullet_Plane_base;
    class LIB_B_37mm_AP: LIB_Bullet_Plane_base {
        ace_rearm_caliber = 37;
        ace_frag_skip = 1;
    };

	//I44
	class LIB_S_37L57_M74: LIB_Shell_base {
        ace_rearm_caliber = 37;
        ace_frag_skip = 1;		
	};
	
	class LIB_S_76L55_M79: LIB_Shell_base {
        ace_rearm_caliber = 76;
        ace_frag_skip = 1;		
	};
	
	class LIB_S_76L55_APMk3: LIB_Shell_base {
        ace_rearm_caliber = 76;
        ace_frag_skip = 1;		
	};
	
	class LIB_S_20L55_PzGr: LIB_Shell_base {
        ace_rearm_caliber = 20;
        ace_frag_skip = 1;		
	};
	
	class LIB_S_50L60_PzGr: LIB_Shell_base {
        ace_rearm_caliber = 50;
        ace_frag_skip = 1;		
	};
	
	class LIB_S_37L57_M51: LIB_ShellAPCR_base {
        ace_rearm_caliber = 37;
        ace_frag_skip = 1;				
	};
	
	class LIB_S_76L55_M93: LIB_ShellAPCR_base {
        ace_rearm_caliber = 76;
        ace_frag_skip = 1;				
	};
	
	class LIB_S_76L55_APDSMk1: LIB_ShellAPCR_base {
        ace_rearm_caliber = 76;
        ace_frag_skip = 1;				
	};
	
	class LIB_S_20L55_PzGr40: LIB_ShellAPCR_base {
        ace_rearm_caliber = 20;
        ace_frag_skip = 1;				
	};
	
	class LIB_S_50L60_PzGr40: LIB_ShellAPCR_base {
        ace_rearm_caliber = 50;
        ace_frag_skip = 1;				
	};
	// I44-End	

    class LIB_ShellHE_base;
    class LIB_OF471_HE: LIB_ShellHE_base {
        ace_rearm_caliber = 122;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 25000;
        ace_frag_charge = 3600;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
    };

    class LIB_SprGr34_KWK40_HE: LIB_ShellHE_base {
        ace_rearm_caliber = 75;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 5750;
        ace_frag_charge = 660;
        ace_frag_gurney_c = 1886; //100% Amatol
        ace_frag_gurney_k = "1/2";
    };

    class LIB_SprGr42_KwK42_HE: LIB_ShellHE_base {
        ace_rearm_caliber = 75;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 5740;
        ace_frag_charge = 670;
        ace_frag_gurney_c = 1886;
        ace_frag_gurney_k = "1/2";
    };

    class LIB_SprGr39_HE: LIB_ShellHE_base {
        ace_rearm_caliber = 88;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 10400;
        ace_frag_charge = 590;
        ace_frag_gurney_c = 1886;
        ace_frag_gurney_k = "1/2";
    };

    class LIB_SprGr_KwK36_HE: LIB_ShellHE_base {
        ace_rearm_caliber = 88;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 10400;
        ace_frag_charge = 590;
        ace_frag_gurney_c = 1886;
        ace_frag_gurney_k = "1/2";
    };

    class LIB_O365_HE: LIB_ShellHE_base {
        ace_rearm_caliber = 85;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 9200;
        ace_frag_charge = 646;
        ace_frag_gurney_c = 2440; //100% TNT
        ace_frag_gurney_k = "1/2";
    };

    class LIB_M42A1_M1_HE: LIB_ShellHE_base {
        ace_rearm_caliber = 76;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 5840;
        ace_frag_charge = 390;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
    };
	
	class LIB_SprGr34_K51_HE: LIB_ShellHE_base {
        ace_rearm_caliber = 75;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 4422;
        ace_frag_charge = 454;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
	};
		//I44
	class LIB_S_37L57_M63: LIB_ShellHE_base {
        ace_rearm_caliber = 37;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 730;
        ace_frag_charge = 39;
         ace_frag_gurney_c = 2440; //100% TNT
        ace_frag_gurney_k = "1/2";
	};
	
	class LIB_S_76L55_M42: LIB_ShellHE_base {
        ace_rearm_caliber = 76;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 5840;
        ace_frag_charge = 390;
         ace_frag_gurney_c = 2440; //100% TNT
        ace_frag_gurney_k = "1/2";
	};
	
	class LIB_S_76L55_HEMk1: LIB_ShellHE_base {
        ace_rearm_caliber = 76;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 6990;
        ace_frag_charge = 710;
         ace_frag_gurney_c = 2440; //100% TNT
        ace_frag_gurney_k = "1/2";
	};
	
	class LIB_S_20L55_SprGr: LIB_ShellHE_base {
        ace_rearm_caliber = 20;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_small","ACE_frag_small_HD" };
        ace_frag_metal = 117;
        ace_frag_charge = 37;
        ace_frag_gurney_c = 1886; //100% Amatol
        ace_frag_gurney_k = "1/2";
	};
	
	class LIB_S_50L60_SprGr38: LIB_ShellHE_base	{
        ace_rearm_caliber = 50;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 1780;
        ace_frag_charge = 165;
        ace_frag_gurney_c = 1886; //100% Amatol
        ace_frag_gurney_k = "1/2";
	};
	
	class LIB_S_105L28_Gr39HlC: LIB_ShellHE_base {
        ace_rearm_caliber = 105;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 12350;
        ace_frag_charge = 1700;
        ace_frag_gurney_c = 1886; //100% Amatol
        ace_frag_gurney_k = "1/2";
	};
	
	class LIB_S_105L28_Gr38: LIB_ShellHE_base {
        ace_rearm_caliber = 105;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 14810;
        ace_frag_charge = 1380;
        ace_frag_gurney_c = 1886; //100% Amatol
        ace_frag_gurney_k = "1/2";
	};
	// I44-End

    class LIB_76mm_Shell_Base_HE;
    class LIB_OF350_HE: LIB_76mm_Shell_Base_HE {
        ace_rearm_caliber = 76;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 6200;
        ace_frag_charge = 621;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
    };

    class Sh_155mm_AMOS;
    class LIB_OF471_HE_Arty: Sh_155mm_AMOS {
        ace_rearm_caliber = 122;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 25530;
        ace_frag_charge = 6580;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
    };


    class R_60mm_HE;
    class LIB_R_M8: R_60mm_HE {
        ace_rearm_caliber = 110;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 17;
        ace_frag_charge = 2;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "1/2";
    };

    class LIB_MAIN_pipebomb;
    class LIB_Ladung_Small_ammo: LIB_MAIN_pipebomb {
        // ace_explosives_magazine = "LIB_Ladung_Small_MINE_mag";
        ace_explosives_Explosive = "LIB_Ladung_Small_ammo_Scripted";
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0.07,0,0.055 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };
    class LIB_Ladung_Small_ammo_Scripted: LIB_Ladung_Small_ammo {
        triggerWhenDestroyed = 1;
    };

    class LIB_Ladung_Big_ammo: LIB_MAIN_pipebomb {
        // ace_explosives_magazine = "LIB_Ladung_Big_MINE_mag";
        ace_explosives_Explosive = "LIB_Ladung_Big_ammo_Scripted";
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0.07,0,0.055 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };
    class LIB_Ladung_Big_ammo_Scripted: LIB_Ladung_Big_ammo {
        triggerWhenDestroyed = 1;
    };

    class LIB_US_TNT_4pound_ammo: LIB_MAIN_pipebomb {
        // ace_explosives_magazine = "LIB_US_TNT_4pound_mag";
        ace_explosives_Explosive = "LIB_US_TNT_4pound_ammo_Scripted";
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0.07,0,0.055 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };
    class LIB_US_TNT_4pound_ammo_Scripted: LIB_US_TNT_4pound_ammo {
        triggerWhenDestroyed = 1;
    };

    class LIB_MAIN_mine;
    class LIB_TMI42_ammo: LIB_MAIN_mine {
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.07 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };

    class LIB_SMI35_1_ammo: LIB_MAIN_mine {
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.06 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };

    class LIB_pomzec_ammo: LIB_MAIN_mine {
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 1.85,0,0.1 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };

    class LIB_SMI35_ammo: LIB_MAIN_mine {
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 1.85,0,0.06 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };

    class LIB_STMI_ammo: LIB_MAIN_mine {
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 1.85,0,0.1 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };

    class LIB_shumine42_ammo: LIB_MAIN_mine {
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.07 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };

    class LIB_M3_ammo: LIB_MAIN_mine {
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 1.85,0,0.07 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };

    class LIB_PMD6_ammo: LIB_MAIN_mine {
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.07 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };

    class LIB_TM44_ammo: LIB_MAIN_mine {
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.07 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };

    class LIB_US_M1A1_ATMINE_ammo: LIB_MAIN_mine {
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.07 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };

  class LIB_US_M3_ammo: LIB_MAIN_mine {
        ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 1.85,0,0.07 };
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
    };

};
