class CfgWeapons
{
	class ACE_ItemCore;
	class InventoryItem_Base_F;

	class ACE_RangeTable_BM37: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		scope = public;
		displayName = "$STR_ace_ifa3mortar_rangetable_name_3";
		descriptionShort = "$STR_ace_ifa3mortar_rangetable_description_3";
		picture = "\z\ifa3_comp_ace\addons\mortar\UI\icon_rangeTable.paa";

		class ItemInfo: InventoryItem_Base_F
		{
			mass = 0.5;
		};
	};

	class ACE_RangeTable_GrWr34: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		scope = public;
		displayName = "$STR_ace_ifa3mortar_rangetable_name_6";
		descriptionShort = "$STR_ace_ifa3mortar_rangetable_description_6";
		picture = "\z\ifa3_comp_ace\addons\mortar\UI\icon_rangeTable.paa";

		class ItemInfo: InventoryItem_Base_F
		{
			mass = 0.5;
		};
	};

	class CannonCore;
	class LIB_BM37_ACE: CannonCore
	{
		scope = protected;
		displayname = $STR_LIB_DN_BM37;
		nameSound = "veh_StaticMortar";
		cursor = "Missile";
		cursorAim = "EmptyCursor";
		cursorSize = 1;
		class StandardSound
		{
			SoundSetShot[]=
			{
				"Mortar82mm_Shot_SoundSet",
				"Mortar82mm_Tail_SoundSet"
			};
		};
		reloadSound[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		soundServo[] = {"",db-80,1};
		magazines[] = {"lex_82mm_HE_round","lex_82mm_Smoke_round","lex_82mm_Illum_round"};
		minRange = 80;
		minRangeProbab = 0.7;
		midRange = 2000;
		midRangeProbab = 0.7;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		reloadTime = 0;
		magazineReloadTime = 0;
		maxLeadSpeed = 100;	// max estimated speed km/h
		autoReload = true;
		canLock = LockNo;
		modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};

		class Single1: Mode_SemiAuto
		{
			displayName = $STR_LIB_DN_MODE_SEMI_CLOSE;
			showToPlayer = true;
			reloadSound[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
			soundServo[] = {"",db-80,1};
			reloadTime = 1;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 5.5;

			sounds[] = {"StandardSound"};

			class StandardSound
			{
				SoundSetShot[]=
				{
					"Mortar82mm_Shot_SoundSet",
					"Mortar82mm_Tail_SoundSet"
				};
			};
			artilleryCharge = 0.35;
		};

		class Single2: Mode_Burst
		{
			displayName = $STR_LIB_DN_MODE_SEMI_MID;
			showToPlayer = true;
			reloadSound[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
			soundServo[] = {"",db-80,1};
			reloadTime = 1;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 5.6;

			sounds[] = {"StandardSound"};

			class StandardSound
			{
				SoundSetShot[]=
				{
					"Mortar82mm_Shot_SoundSet",
					"Mortar82mm_Tail_SoundSet"
				};
			};
			artilleryCharge = 0.7;
		};

		class Single3: Mode_FullAuto
		{
			displayName = $STR_LIB_DN_MODE_SEMI_FAR;
			showToPlayer = true;
			reloadSound[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
			soundServo[] = {"",db-80,1};
			reloadTime = 1;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 6;

			sounds[] = {"StandardSound"};

			class StandardSound
			{
				SoundSetShot[]=
				{
					"Mortar82mm_Shot_SoundSet",
					"Mortar82mm_Tail_SoundSet"
				};
			};
			artilleryCharge = 1;
		};

		class Burst1: Mode_Burst
		{
			showToPlayer = false;
			reloadSound[]= {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
			displayName = "Burst (close)";
			burst = 4;
			soundServo[] = {"",db-80,1};
			soundBurst = 0;
			reloadTime = 1;
			minRange = 59*0.3;
			minRangeProbab = 0.5;
			midRange = 257*0.3;
			midRangeProbab = 0.7;
			maxRange = 583*0.3;
			maxRangeProbab = 0.5;
			artilleryDispersion = 8.93;
			artilleryCharge = 0.35;
			sounds[] = {"StandardSound"};

			class StandardSound
			{
				SoundSetShot[]=
				{
					"Mortar82mm_Shot_SoundSet",
					"Mortar82mm_Tail_SoundSet"
				};
			};
		};

		class Burst2: Burst1
		{
			showToPlayer = false;
			displayName = "Burst (medium)";
			minRange = 290*0.3;
			minRangeProbab = 0.4;
			midRange = 1272*0.3;
			midRangeProbab = 0.6;
			maxRange = 2882*0.3;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.7;
		};

		class Burst3: Burst1
		{
			showToPlayer = false;
			displayName = "Burst (far)";
			minRange = 803*0.3;
			minRangeProbab = 0.3;
			midRange = 3532*0.3;
			midRangeProbab = 0.4;
			maxRange = 8005*0.3;
			maxRangeProbab = 0.3;
			artilleryCharge = 1;
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "AutoCannonFired";
				positionName = "usti hlavne";
				directionName = "usti hlavne";
			};
		};
	};

	class LIB_GRWR34_ACE: LIB_BM37_ACE
	{
		displayname = $STR_LIB_DN_GRWR34;
	};
};
