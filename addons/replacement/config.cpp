#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_medical"};
        author = CSTRING(Team);
        authors[] = { "El Tyranos" };
        authorUrl = CSTRING(Url);
        url = CSTRING(Url);
        VERSION_CONFIG;
    };
};
class CfgVehicles {
    class MapBoard_altis_F;
    class ACE_bodyBagObject: MapBoard_altis_F {
        hiddenSelectionsTextures[] = {"z\ifa3_comp_ace\addons\replacement\data\bodybag_co.paa"};
        hiddenSelectionsMaterials[] = {"z\ifa3_comp_ace\addons\replacement\data\bodybag.rvmat"};
    };
};
