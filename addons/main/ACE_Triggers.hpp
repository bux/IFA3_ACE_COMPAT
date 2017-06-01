class ACE_Triggers {
	class Command;
    class LIB_LadungPM: Command {
        displayName = "Detonator";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Mines\gear_Ladung_charger_ca.paa";
        requires[] = { "ACE_LIB_LadungPM" };
    };

	class Timer;
    class FireCord: Timer {
        displayName = "Black powder fuse";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Mines\gear_Wire_ca.paa";
        requires[] = { "ACE_LIB_FireCord" };
    };

};
