#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "IFA3_ACE_COMPAT_main" };
        author = ECSTRING(main,Team);
        authors[] = { "bux" };
        authorUrl = ECSTRING(main,Url);
        url = ECSTRING(main,Url);
        VERSION_CONFIG;
    };
};
