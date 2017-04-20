class CfgWeapons
{
	class CannonCore;
    class mortar_82mm: CannonCore {
        class Single1;
    };
	class LIB_BM37_ACE: mortar_82mm {
		displayname = "$STR_LIB_DN_BM37";
		magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum","ACE_1Rnd_82mm_Mo_HE","ACE_1Rnd_82mm_Mo_Smoke","ACE_1Rnd_82mm_Mo_Illum"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
        magazineReloadTime = 0.5;
		class Single1: Single1 {
            reloadTime = 0.5;
        };
	};

	class LIB_GrWr34_ACE: LIB_BM37_ACE {
		displayname = "$STR_LIB_DN_GRWR34";
		magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum","ACE_1Rnd_82mm_Mo_HE","ACE_1Rnd_82mm_Mo_Smoke","ACE_1Rnd_82mm_Mo_Illum"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
        magazineReloadTime = 0.5;
		class Single1: Single1 {
            reloadTime = 0.5;
        };
	};
};
