
class Extended_PreStart_EventHandlers
{
	class ace_mk6mortar
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\mk6mortar\XEH_preStart.sqf'";
	};
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

class Extended_FiredBIS_EventHandlers {
    class LIB_GrWr34_ACE {
        class ADDON {
            firedBIS = QUOTE(_this call FUNC(handleFired));
        };
    };
	class LIB_BM37_ACE {
        class ADDON {
            firedBIS = QUOTE(_this call FUNC(handleFired));
        };
    };
	class LIB_M2_60_ACE {
        class ADDON {
            firedBIS = QUOTE(_this call FUNC(handleFired));
        };
    };
};