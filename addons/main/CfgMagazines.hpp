class CfgMagazines {

    class CA_Magazine;
    class LIB_50Rnd_792x57: CA_Magazine {
        ACE_isBelt = 1;
    };

    class LIB_50Rnd_792x57_Veh;
    class LIB_250Rnd_792x57: LIB_50Rnd_792x57_Veh {
        ACE_isBelt = 1;
    };


    class LIB_Mine_Magazine: CA_Magazine {
        useAction = 0;
        useActionTitle = "";
    };

    class LIB_TMI_42_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_DelayTime = 2.5;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_TMI_42_MINE";
        class ACE_Triggers {
            SupportedTriggers[] = { "PressurePlate" };
            class PressurePlate {
                digDistance = -0.045;
            };
        };
    };

    class LIB_SMI_35_1_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_DelayTime = 2.5;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_SMI_SMi35_1_MINE";
        class ACE_Triggers {
            SupportedTriggers[] = { "Tripwire" };
            class Tripwire {
                digDistance = 0.095;
            };
        };
    };

    class LIB_pomzec_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_DelayTime = 2.5;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_pomzec_MINE";
        class ACE_Triggers {
            SupportedTriggers[] = { "Tripwire" };
            class Tripwire {
                digDistance = -0.155;
            };
        };
    };

    class LIB_SMI_35_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_DelayTime = 2.5;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_SMI_35_MINE";
        class ACE_Triggers {
            SupportedTriggers[] = { "Tripwire" };
            class Tripwire {
                digDistance = 0.09;
            };
        };
    };

    class LIB_STMI_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_DelayTime = 2.5;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_STMI_MINE";
        class ACE_Triggers {
            SupportedTriggers[] = { "Tripwire" };
            class Tripwire {
                digDistance = -0.155;
            };
        };
    };

    class LIB_shumine_42_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_DelayTime = 2.5;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_shumine42_MINE";
        class ACE_Triggers {
            SupportedTriggers[] = { "PressurePlate" };
            class PressurePlate {
                digDistance = -0.02;
            };
        };
    };

    class LIB_Ladung_Small_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_Ladung_Small";
        // ace_explosives_DelayTime = 1;
        class ACE_Triggers {
            SupportedTriggers[] = { "FireCord","LIB_LadungPM" };
            class FireCord {
                FuseTime = 0.5;
            };
            class LIB_LadungPM {
                FuseTime = 0.5;
            };
        };
    };

    class LIB_Ladung_Big_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_Ladung_Big";
        // ace_explosives_DelayTime = 1;
        class ACE_Triggers {
            SupportedTriggers[] = { "FireCord","LIB_LadungPM" };
            class FireCord {
                FuseTime = 0.5;
            };
            class LIB_LadungPM {
                FuseTime = 0.5;
            };
        };
    };

    class LIB_M3_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_DelayTime = 2.5;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_M3_MINE";
        class ACE_Triggers {
            SupportedTriggers[] = { "Tripwire" };
            class Tripwire {
                digDistance = -0.11;
            };
        };
    };

    class LIB_PMD6_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_DelayTime = 2.5;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_PMD6_MINE";
        class ACE_Triggers {
            SupportedTriggers[] = { "PressurePlate" };
            class PressurePlate {
                digDistance = -0.01;
            };
        };
    };

    class LIB_TM44_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_DelayTime = 2.5;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_TM_44_MINE";
        class ACE_Triggers {
            SupportedTriggers[] = { "PressurePlate" };
            class PressurePlate {
                digDistance = 0.01;
            };
        };
    };

    class LIB_US_M1A1_ATMINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_DelayTime = 2.5;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_US_M1A1_ATMINE";
        model = "\WW2\Assets_m\Weapons\Mines_m\WW2_M1a1_at_mag.p3d";
        class ACE_Triggers {
            SupportedTriggers[] = { "PressurePlate" };
            class PressurePlate {
                digDistance = -0.028;
            };
        };
    };

    class LIB_US_TNT_4pound_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_US_TNT";
        // ace_explosives_DelayTime = 1;
        class ACE_Triggers {
            SupportedTriggers[] = { "FireCord","LIB_LadungPM" };
            class FireCord {
                FuseTime = 0.5;
            };
            class LIB_LadungPM {
                FuseTime = 0.5;
            };
        };
    };

    class LIB_US_M3_MINE_mag: LIB_Mine_Magazine {
        ace_explosives_Placeable = 1;
        ace_explosives_DelayTime = 2.5;
        ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_US_M3_MINE";
        class ACE_Triggers {
            SupportedTriggers[] = { "Tripwire" };
            class Tripwire {
                digDistance = -0.025;
            };
        };
    };

};
