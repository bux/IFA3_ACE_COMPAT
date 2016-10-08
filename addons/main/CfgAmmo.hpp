class CfgAmmo {

    class B_9x18_Ball;
    class LIB_B_9x19_Ball: B_9x18_Ball {
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

    class BulletBase;
    class LIB_B_45ACP_Ball: BulletBase {
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

    class LIB_B_762x54_Ball: BulletBase {
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

    class LIB_B_127x108_Ball: BulletBase {
        ACE_caliber = 12.954;
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

    class LIB_B_23mm_AA: BulletBase {
        ace_rearm_caliber = 23;
    };

    class LIB_SprGr_FlaK_38: LIB_B_23mm_AA {
        ace_rearm_caliber = 20;
    };

    class LIB_4x_SprGr_FlaK_38: LIB_B_23mm_AA {
        ace_rearm_caliber = 20;
    };

    class B_37mm_AA: LIB_B_23mm_AA {
        ace_rearm_caliber = 37;
    };

    class RocketBase;
    class LIB_PzFaust_30m: RocketBase {
        ace_frag_enabled = 1;
        ace_frag_metal = 3200;
        ace_frag_charge = 400;
        ace_frag_gurney_c = 2635; //50:50 mix of TNT (2440) and tri-hexogen (2830) = 2635
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };

    class LIB_R_88mm_RPzB: RocketBase {
        ace_frag_enabled = 1;
        ace_frag_metal = 3300;
        ace_frag_charge = 700;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };

    class LIB_60mm_M6: RocketBase {
        ace_frag_enabled = 1;
        ace_frag_metal = 3300;
        ace_frag_charge = 700;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };

    class GrenadeHand;
    class LIB_shg24: GrenadeHand {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 110;
        ace_frag_charge = 165;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };

    class LIB_shg24x7: GrenadeHand {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 770;
        ace_frag_charge = 1155;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };

    class LIB_m39: GrenadeHand {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 340;
        ace_frag_charge = 112;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };

    class LIB_f1: GrenadeHand {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 600;
        ace_frag_charge = 60;
        ace_frag_gurney_c = 2320;
        ace_frag_gurney_k = "3/5";
    };

    class LIB_rg42: GrenadeHand {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_small_HD" };
        ace_frag_metal = 500;
        ace_frag_charge = 200;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };

    class LIB_rpg6: GrenadeHand {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 1100;
        ace_frag_charge = 570;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };

    class LIB_pwm: GrenadeHand {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_tiny_HD" };
        ace_frag_metal = 1000;
        ace_frag_charge = 500;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };

    class LIB_US_Mk_2: GrenadeHand {
        ace_frag_enabled = 1;
        ace_frag_skip = 0;
        ace_frag_force = 1;
        ace_frag_classes[] = { "ACE_frag_small_HD" };
        ace_frag_metal = 595;
        ace_frag_charge = 57;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
    };

    class BombCore;
    class LIB_FAB500_Bomb: BombCore {
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
        ace_frag_metal = 500;
        ace_frag_charge = 260;
    };

    class LIB_FAB250_Bomb: LIB_FAB500_Bomb {
        ace_frag_metal = 207;
        ace_frag_charge = 113;
    };

    class LIB_SC250_Bomb: LIB_FAB250_Bomb {
        ace_frag_metal = 250;
        ace_frag_charge = 130;
    };

    class LIB_SC50_Bomb: LIB_SC250_Bomb {
        ace_frag_metal = 50;
        ace_frag_charge = 30;
    };

    class LIB_US_500lb_Bomb: LIB_FAB500_Bomb {
        ace_frag_metal = 213;
        ace_frag_charge = 63;
    };


    class ShellBase;
    class LIB_Sh_82_HE: ShellBase {
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 3400;
        ace_frag_charge = 420;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "1/2";
        ace_rearm_caliber = 82;
    };

    class ARTY_LIB_Sh_82_HE: ShellBase {
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 3400;
        ace_frag_charge = 420;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "1/2";
        ace_rearm_caliber = 82;
    };

    class LIB_Sh_81_HE: ShellBase {
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 3110;
        ace_frag_charge = 100;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "1/2";
        ace_rearm_caliber = 81;
    };

    class ARTY_LIB_Sh_81_HE: ShellBase {
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 3110;
        ace_frag_charge = 400;
        ace_frag_gurney_c = 2027;
        ace_frag_gurney_k = "1/2";
        ace_rearm_caliber = 81;
    };

    class LIB_FlakExplosion: ShellBase {
        ace_frag_skip = 1;
    };

    class LIB_BR471_AP: ShellBase {
        ace_rearm_caliber = 122;
    };

    class LIB_PzGr39_KWK40_AP: ShellBase {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_PzGr40_KWK40_APCR: ShellBase {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_PzGr3942_KwK42_AP: ShellBase {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_PzGr4042_KwK42_APCR: ShellBase {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_PzGr43_AP: ShellBase {
        ace_rearm_caliber = 88;
        ace_frag_skip = 1;
    };

    class LIB_PzGr40_APCR: ShellBase {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_PzGr39_KwK36_AP: ShellBase {
        ace_rearm_caliber = 88;
        ace_frag_skip = 1;
    };

    class LIB_PzGr40_KwK36_APCR: ShellBase {
        ace_rearm_caliber = 88;
        ace_frag_skip = 1;
    };

    class LIB_BR365_AP: ShellBase {
        ace_rearm_caliber = 85;
        ace_frag_skip = 1;
    };

    class LIB_BR365P_APCR: ShellBase {
        ace_rearm_caliber = 85;
        ace_frag_skip = 1;
    };

    class LIB_M61_M1_AP: ShellBase {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_T45_M1_APCR: ShellBase {
        ace_rearm_caliber = 75;
        ace_frag_skip = 1;
    };

    class LIB_76mm_Shell_Base: ShellBase {
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

    class LIB_B_37mm_AP: ShellBase {
        ace_rearm_caliber = 37;
        ace_frag_skip = 1;
    };


    class ShellBase_HE;
    class LIB_OF471_HE: ShellBase_HE {
        ace_rearm_caliber = 122;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 25000;
        ace_frag_charge = 3600;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
    };

    class LIB_SprGr34_KWK40_HE: ShellBase_HE {
        ace_rearm_caliber = 75;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 5750;
        ace_frag_charge = 660;
        ace_frag_gurney_c = 1886; //100% Amatol
        ace_frag_gurney_k = "1/2";
    };

    class LIB_SprGr42_KwK42_HE: ShellBase_HE {
        ace_rearm_caliber = 75;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 5740;
        ace_frag_charge = 670;
        ace_frag_gurney_c = 1886;
        ace_frag_gurney_k = "1/2";
    };

    class LIB_SprGr39_HE: ShellBase_HE {
        ace_rearm_caliber = 88;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 10400;
        ace_frag_charge = 590;
        ace_frag_gurney_c = 1886;
        ace_frag_gurney_k = "1/2";
    };

    class LIB_SprGr_KwK36_HE: ShellBase_HE {
        ace_rearm_caliber = 88;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 10400;
        ace_frag_charge = 590;
        ace_frag_gurney_c = 1886;
        ace_frag_gurney_k = "1/2";
    };

    class LIB_O365_HE: ShellBase_HE {
        ace_rearm_caliber = 85;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 9200;
        ace_frag_charge = 646;
        ace_frag_gurney_c = 2440; //100% TNT
        ace_frag_gurney_k = "1/2";
    };

    class LIB_M42A1_M1_HE: ShellBase_HE {
        ace_rearm_caliber = 76;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 5840;
        ace_frag_charge = 390;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
    };


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

    class LIB_OF471_HE_Arty: ShellBase {
        ace_rearm_caliber = 122;
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium","ACE_frag_medium_HD" };
        ace_frag_metal = 25530;
        ace_frag_charge = 6580;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
    };


    class LIB_Rocket;
    class LIB_R_M8: LIB_Rocket {
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
        // ace_explosives_Explosive = "LIB_Ladung_Small_ammo";
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0.07,0,0.055 };
        digDistance = 0;
    };

    class LIB_Ladung_Big_ammo: LIB_MAIN_pipebomb {
        // ace_explosives_magazine = "LIB_Ladung_Big_MINE_mag";
        // ace_explosives_Explosive = "LIB_Ladung_Big_ammo";
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0.07,0,0.055 };
        digDistance = 0.14;
    };

    class LIB_US_TNT_4pound_ammo: LIB_MAIN_pipebomb {
        // ace_explosives_magazine = "LIB_US_TNT_4pound_mag";
        // ace_explosives_Explosive = "LIB_US_TNT_4pound_ammo";
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0.07,0,0.055 };
        digDistance = 0.05;
    };

    class LIB_MAIN_mine;
    class LIB_TMI42_ammo: LIB_MAIN_mine {
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.07 };
        digDistance = 0.13;
    };

    class LIB_SMI35_1_ammo: LIB_MAIN_mine {
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.06 };
        digDistance = 0.02;
    };

    class LIB_pomzec_ammo: LIB_MAIN_mine {
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 1.85,0,0.1 };
        digDistance = 0.18;
    };

    class LIB_SMI35_ammo: LIB_MAIN_mine {
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 1.85,0,0.06 };
        digDistance = 0.02;
    };

    class LIB_STMI_ammo: LIB_MAIN_mine {
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 1.85,0,0.1 };
        digDistance = 0.18;
    };

    class LIB_shumine42_ammo: LIB_MAIN_mine {
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.07 };
        digDistance = 0.01;
    };

    class LIB_M3_ammo: LIB_MAIN_mine {
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 1.85,0,0.07 };
        digDistance = 0.15;
    };

    class LIB_PMD6_ammo: LIB_MAIN_mine {
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.07 };
        digDistance = 0.015;
    };

    class LIB_TM44_ammo: LIB_MAIN_mine {
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.07 };
        digDistance = 0.1;
    };

    class LIB_US_M1A1_ATMINE_ammo: LIB_MAIN_mine {
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 0,0,0.07 };
        digDistance = 0.11;
    };

    class LIB_US_M3_ammo: LIB_MAIN_mine {
		ace_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = { 1.85,0,0.07 };
        digDistance = 0.05;
    };

};
