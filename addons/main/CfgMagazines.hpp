class CfgMagazines
{
	class LIB_Mine_Magazine;
	class CA_Magazine;
	class LIB_50Rnd_792x57: CA_Magazine	{
		ACE_isBelt = 1;
	};
	class LIB_250Rnd_792x57: LIB_50Rnd_792x57	{
		ACE_isBelt = 1;
	};
/*
	class LIB_TMI_42_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_DelayTime = 2.5;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_TMI_42_MINE";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"PressurePlate"};
			class PressurePlate
			{
				digDistance = -0.045;
			};
		};
		mass = 35;
	};
	class LIB_SMI_35_1_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_DelayTime = 2.5;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_SMI_SMi35_1_MINE";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Tripwire"};
			class Tripwire
			{
				digDistance = 0.095;
			};
		};
		mass = 20;
	};
	class LIB_pomzec_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_DelayTime = 2.5;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_pomzec_MINE";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Tripwire"};
			class Tripwire
			{
				digDistance = -0.155;
			};
		};
		mass = 10;
	};
	class LIB_SMI_35_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_DelayTime = 2.5;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_SMI_35_MINE";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Tripwire"};
			class Tripwire
			{
				digDistance = 0.09;
			};
		};
		mass = 20;
	};
	class LIB_STMI_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_DelayTime = 2.5;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_STMI_MINE";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Tripwire"};
			class Tripwire
			{
				digDistance = -0.155;
			};
		};
		mass = 10;
	};
	class LIB_shumine_42_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_DelayTime = 2.5;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_shumine42_MINE";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"PressurePlate"};
			class PressurePlate
			{
				digDistance = -0.02;
			};
		};
		mass = 6;
	};
	class LIB_Ladung_Small_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_Ladung_Small";
		ace_explosives_DelayTime = 1;
		class ACE_Triggers
		{
			SupportedTriggers[] = {"FireCord","LIB_LadungPM_Ger","LIB_LadungPM_Sov","LIB_LadungPM_Us"};
			class FireCord
			{
				FuseTime = 0.5;
			};
			class LIB_LadungPM_Ger
			{
				FuseTime = 0.5;
			};
			class LIB_LadungPM_Sov: LIB_LadungPM_Ger
			{
			};
			class LIB_LadungPM_Us: LIB_LadungPM_Ger
			{
			};
		};
		mass = 15;
	};
	class LIB_Ladung_Big_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_Ladung_Big";
		ace_explosives_DelayTime = 1;
		class ACE_Triggers
		{
			SupportedTriggers[] = {"FireCord","LIB_LadungPM_Ger","LIB_LadungPM_Sov","LIB_LadungPM_Us"};
			class FireCord
			{
				FuseTime = 0.5;
				digDistance = -0.16;
			};
			class LIB_LadungPM_Ger
			{
				FuseTime = 0.5;
				digDistance = -0.16;
			};
			class LIB_LadungPM_Sov: LIB_LadungPM_Ger
			{
			};
			class LIB_LadungPM_Us: LIB_LadungPM_Ger
			{
			};
		};
		mass = 20;
	};
	class LIB_M3_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_DelayTime = 2.5;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_M3_MINE";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Tripwire"};
			class Tripwire
			{
				digDistance = -0.11;
			};
		};
		mass = 20;
	};
	class LIB_PMD6_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_DelayTime = 2.5;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_PMD6_MINE";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"PressurePlate"};
			class PressurePlate
			{
				digDistance = -0.01;
			};
		};
		mass = 15;
	};
	class LIB_TM44_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_DelayTime = 2.5;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_TM_44_MINE";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"PressurePlate"};
			class PressurePlate
			{
				digDistance = 0.01;
			};
		};
		mass = 35;
	};
	class LIB_TROTIL_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_TROTIL";
		ace_explosives_DelayTime = 1;
		class ACE_Triggers
		{
			SupportedTriggers[] = {"FireCord","LIB_LadungPM_Ger","LIB_LadungPM_Sov","LIB_LadungPM_Us"};
			class FireCord
			{
				FuseTime = 0.5;
			};
			class LIB_LadungPM_Ger
			{
				FuseTime = 0.5;
			};
			class LIB_LadungPM_Sov: LIB_LadungPM_Ger
			{
			};
			class LIB_LadungPM_Us: LIB_LadungPM_Ger
			{
			};
		};
		mass = 15;
	};
	class LIB_MARKER_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_MARKER_MINE";
		ace_explosives_DelayTime = 1;
	};
	class LIB_US_M1A1_ATMINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_DelayTime = 2.5;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_US_M1A1_ATMINE";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"PressurePlate"};
			class PressurePlate
			{
				digDistance = -0.028;
			};
		};
		mass = 35;
	};
	class LIB_US_TNT_4pound_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_US_TNT";
		ace_explosives_DelayTime = 1;
		class ACE_Triggers
		{
			SupportedTriggers[] = {"FireCord","LIB_LadungPM_Ger","LIB_LadungPM_Sov","LIB_LadungPM_Us"};
			class FireCord
			{
				FuseTime = 0.5;
				digDistance = -0.09;
			};
			class LIB_LadungPM_Ger
			{
				FuseTime = 0.5;
				digDistance = -0.09;
			};
			class LIB_LadungPM_Sov: LIB_LadungPM_Ger
			{
			};
			class LIB_LadungPM_Us: LIB_LadungPM_Ger
			{
			};
		};
		mass = 20;
	};
	class LIB_US_M3_MINE_mag: LIB_Mine_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_DelayTime = 2.5;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_US_M3_MINE";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Tripwire"};
			class Tripwire
			{
				digDistance = -0.025;
			};
		};
		mass = 20;
	};
	class LIB_SIGN_MINES_mag: CA_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_SIGN_MINES";
		ace_explosives_DelayTime = 1;
	};
	class LIB_SIGN_MINEN_mag: CA_Magazine	{
		ace_explosives_Placeable = 1;
		ace_explosives_SetupObject = "ACE_Explosives_Place_LIB_SIGN_MINEN";
		ace_explosives_DelayTime = 1;
	};

//	Investigate
	class LIB_Ladung_PM_MINE_mag: LIB_Mine_Magazine
	class LIB_PM_Provod_50: LIB_Mine_Magazine
	class LIB_PM_Provod_75: LIB_PM_Provod_50
	class LIB_PM_Provod_100: LIB_PM_Provod_50
	class LIB_PM_MINE_mag: LIB_Mine_Magazine
	class LIB_US_BM10_PM_mag: LIB_Mine_Magazine*/
};