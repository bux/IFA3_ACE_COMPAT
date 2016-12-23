#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

#define VSoft		0
#define VArmor		1
#define VAir		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define LockNo		0
#define LockCadet		1
#define LockYes		2

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Weapons_F","A3_Static_F","LIB_weapons","ace_interaction","ace_mk6mortar"};
        author = CSTRING(Team);
        authors[] = { "WOG", "El Tyranos" };
        authorUrl = CSTRING(Url);
        url = CSTRING(Url);
        VERSION_CONFIG;
    };
};

#include "ACE_Settings.hpp"
#include "Extended_PreStart_EventHandlers.hpp"
#include "Extended_PreInit_EventHandlers.hpp"
#include "Extended_PostInit_EventHandlers.hpp"
#include "Extended_FiredBIS_EventHandlers.hpp"


class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class BaseSoundModeType;


class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscListbox;
class RscListNBox;
class RscPicture;
class RscControlsGroup;
class ScrollBar;
class RscActiveText;
class RscStructuredText;
#include "CfgCloudlets.hpp"
#include "ifa3_GrenadeExplosion.hpp"
#include "if_WPExplosion.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "RscInGameUI.hpp"
#include "ACE_D30_RangeTable_Dialog.hpp"
