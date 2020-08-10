class CfgWeapons
{
	class CannonCore;
	class mortar_82mm: CannonCore {
		class Single1;
	};

	class LIB_BM37_ACE: mortar_82mm {
		author = "IFA3 Team";
		displayname = "$STR_DN_LIB_BM37";
		magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
		magazineReloadTime = 0.5;
		class Single1: Single1 {
			reloadTime = 0.5;
		};
	};

	class LIB_GrWr34_ACE: mortar_82mm {
		author = "IFA3 Team";
		displayname = "$STR_DN_LIB_GRWR34";
		magazines[] = {"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_Smoke","LIB_1Rnd_81mm_Mo_Illum"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
		magazineReloadTime = 0.5;
		class Single1: Single1 {
			reloadTime = 0.5;
		};
	};

	class LIB_M2_60_ACE: mortar_82mm {
		author = "IFA3 Team";
		displayname = "$STR_DN_LIB_M2_60";
		magazines[] = {"LIB_1Rnd_60mm_Mo_HE","LIB_1Rnd_60mm_Mo_Smoke","LIB_1Rnd_60mm_Mo_Illum"};
		modes[] = {"Single1","Single2"};
		reloadTime = 0.5;
		magazineReloadTime = 0.5;
		class Single1: Single1 {
			reloadTime = 0.5;
		};
	};

	class LIB_Slung_Static_Weapon_Base;


	////// BM 37 82mm
	class LIB_BM37_Tripod: LIB_Slung_Static_Weapon_Base {
		// Assigning the mortar ammo as magazine makes them show up as ammo in the arsenal, but ammo in the slots will get deleted upon weapon assembly
		magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum"};

		// ACE CSW Compat
		class ACE_CSW {
			type = "mount"; // What type of carry it is. Must always be "mount" for the tripod
			deployTime = 4; // How long it takes to deploy the tripod
			pickupTime = 4; // How long it takes to pickup the tripod
			deploy = "LIB_BM37_Tripod_Deployed"; // what vehicle will spawn when the tripod is deployed
		};
	};
	class LIB_BM37_Barrel: LIB_Slung_Static_Weapon_Base {
		// Assigning the mortar ammo as magazine makes them show up as ammo in the arsenal, but ammo in the slots will get deleted upon weapon assembly
		magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum"};

		// ACE CSW Compat
		class ACE_CSW {
			type = "weapon"; // What type of carry it is. Must always be "weapon" for the carry weapon
			deployTime = 4; // How long it takes to deploy the weapon onto the tripod
			pickupTime = 4; // How long it takes to disassemble weapon from the tripod
			class assembleTo {
					LIB_BM37_Tripod_Deployed = "LIB_BM37_ACE";
			};
		};
	};


	////// GrWr 34 81mm
	class LIB_GrWr34_Tripod: LIB_Slung_Static_Weapon_Base {
		// Assigning the mortar ammo as magazine makes them show up as ammo in the arsenal, but ammo in the slots will get deleted upon weapon assembly
		magazines[] = {"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_Smoke","LIB_1Rnd_81mm_Mo_Illum"};

		// ACE CSW Compat
		class ACE_CSW {
			type = "mount"; // What type of carry it is. Must always be "mount" for the tripod
			deployTime = 4; // How long it takes to deploy the tripod
			pickupTime = 4; // How long it takes to pickup the tripod
			deploy = "LIB_GrWr34_Tripod_Deployed"; // what vehicle will spawn when the tripod is deployed
		};
	};
	class LIB_GrWr34_Barrel: LIB_Slung_Static_Weapon_Base {
		// Assigning the mortar ammo as magazine makes them show up as ammo in the arsenal, but ammo in the slots will get deleted upon weapon assembly
		magazines[] = {"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_Smoke","LIB_1Rnd_81mm_Mo_Illum"};

		// ACE CSW Compat
		class ACE_CSW {
			type = "weapon"; // What type of carry it is. Must always be "weapon" for the carry weapon
			deployTime = 4; // How long it takes to deploy the weapon onto the tripod
			pickupTime = 4; // How long it takes to disassemble weapon from the tripod
			class assembleTo {
					LIB_GrWr34_Tripod_Deployed = "LIB_GrWr34_ACE";
			};
		};
	};


	////// M2 60mm
	class LIB_M2_60_Tripod: LIB_Slung_Static_Weapon_Base {
		// Assigning the mortar ammo as magazine makes them show up as ammo in the arsenal, but ammo in the slots will get deleted upon weapon assembly
		magazines[] = {"LIB_1Rnd_60mm_Mo_HE","LIB_1Rnd_60mm_Mo_Smoke","LIB_1Rnd_60mm_Mo_Illum"};

		// ACE CSW Compat
		class ACE_CSW {
			type = "mount"; // What type of carry it is. Must always be "mount" for the tripod
			deployTime = 4; // How long it takes to deploy the tripod
			pickupTime = 4; // How long it takes to pickup the tripod
			deploy = "LIB_M2_60_Tripod_Deployed"; // what vehicle will spawn when the tripod is deployed
		};
	};
	class LIB_M2_60_Barrel: LIB_Slung_Static_Weapon_Base {
		// Assigning the mortar ammo as magazine makes them show up as ammo in the arsenal, but ammo in the slots will get deleted upon weapon assembly
		magazines[] = {"LIB_1Rnd_60mm_Mo_HE","LIB_1Rnd_60mm_Mo_Smoke","LIB_1Rnd_60mm_Mo_Illum"};

		// ACE CSW Compat
		class ACE_CSW {
			type = "weapon"; // What type of carry it is. Must always be "weapon" for the carry weapon
			deployTime = 4; // How long it takes to deploy the weapon onto the tripod
			pickupTime = 4; // How long it takes to disassemble weapon from the tripod
			class assembleTo {
					LIB_M2_60_Tripod_Deployed = "LIB_M2_60_ACE";
			};
		};
	};
};
