class CfgWeapons
{
	class CannonCore;
	class LIB_MortarCannon_base: CannonCore {
		class Single1;
	};

	class LIB_BM37: LIB_MortarCannon_base {
		magazines[] += {"LIB_1Rnd_82mm_Mo_Illum"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
		magazineReloadTime = 0.5;
	};

	class LIB_GRWR34: LIB_MortarCannon_base {
		magazines[] += {"LIB_1Rnd_81mm_Mo_Illum"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
		magazineReloadTime = 0.5;
	};

	class LIB_M2_60: LIB_MortarCannon_base {
		magazines[] += {"LIB_1Rnd_60mm_Mo_Illum"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
		magazineReloadTime = 0.5;
	};

	class LIB_Slung_Static_Weapon_Base;
	class LIB_BM37_Tripod: LIB_Slung_Static_Weapon_Base {
		LIB_isTripod = 0;
		magazines[] += {"LIB_1Rnd_82mm_Mo_Illum"}; // Assigning the mortar ammo as magazine makes them show up as ammo in the arsenal, but ammo in the slots will get deleted upon weapon assembly
		class ACE_CSW {
			type = "mount"; // What type of carry it is. Must always be "mount" for the tripod
			deployTime = 4; // How long it takes to deploy the tripod
			pickupTime = 4; // How long it takes to pickup the tripod
			deploy = "ACE_LIB_GrWr34_Tripod_Deployed"; // what vehicle will spawn when the tripod is deployed
		};
	};
	class LIB_BM37_Barrel: LIB_Slung_Static_Weapon_Base {
		magazines[] += {"LIB_1Rnd_82mm_Mo_Illum"};
		class ACE_CSW {
			type = "weapon"; // What type of carry it is. Must always be "weapon" for the weapon
			deployTime = 4;
			pickupTime = 4;
			class assembleTo {
					ACE_LIB_GrWr34_Tripod_Deployed = "LIB_BM37";
			};
		};
	};

	class LIB_GrWr34_Tripod: LIB_Slung_Static_Weapon_Base {
		LIB_isTripod = 0;
		magazines[] += {"LIB_1Rnd_81mm_Mo_Illum"};
		class ACE_CSW {
			type = "mount";
			deployTime = 4;
			pickupTime = 4;
			deploy = "ACE_LIB_GrWr34_Tripod_Deployed";
		};
	};
	class LIB_GrWr34_Barrel: LIB_Slung_Static_Weapon_Base {
		magazines[] += {"LIB_1Rnd_81mm_Mo_Illum"};
		class ACE_CSW {
			type = "weapon";
			deployTime = 4;
			pickupTime = 4;
			class assembleTo {
					ACE_LIB_GrWr34_Tripod_Deployed = "LIB_GrWr34";
			};
		};
	};

	class LIB_M2_60_Tripod: LIB_Slung_Static_Weapon_Base {
		LIB_isTripod = 0;
		magazines[] += {"LIB_1Rnd_60mm_Mo_Illum"};
		class ACE_CSW {
			type = "mount";
			deployTime = 4;
			pickupTime = 4;
			deploy = "ACE_LIB_M2_60_Tripod_Deployed";
		};
	};
	class LIB_M2_60_Barrel: LIB_Slung_Static_Weapon_Base {
		magazines[] += {"LIB_1Rnd_60mm_Mo_Illum"};
		class ACE_CSW {
			type = "weapon";
			deployTime = 4;
			pickupTime = 4;
			class assembleTo {
					ACE_LIB_M2_60_Tripod_Deployed = "LIB_M2_60";
			};
		};
	};
};
