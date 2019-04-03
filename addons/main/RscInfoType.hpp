class RscInGameUI {
  class RscUnitInfo;
  class RscUnitInfoSoldier;
  class RscUnitInfoTank_IF;
  class RscUnitInfoSoldier_IF;
  class RscUnitStaticWeapon_LIB_IF_StaticCannon;
  class RscUnitInfoAir_IF;

  class RscUnitInfoSoldier_LIB_IF: RscUnitInfoSoldier_IF
	{
    onLoad = QUOTE([ARR_4(""onLoad"",_this,""RscUnitInfo"",'IGUI')] call (uinamespace getvariable 'BIS_fnc_initDisplay'); uiNamespace setVariable [ARR_2('ACE_dlgSoldier', _this select 0)]; [ARR_2('ace_infoDisplayChanged', [ARR_2(_this select 0, 'Soldier')])] call CBA_fnc_localEvent;  with UINameSpace do {[ARR_2(_this,'onLoad')] call LIB_UI_System_Tank_Interface_Display_Interface};);
  };
  class RscUnitInfoTank_LIB_IF: RscUnitInfoTank_IF
	{
    onLoad = QUOTE([ARR_4(""onLoad"",_this,""RscUnitInfo"",'IGUI')] call (uinamespace getvariable 'BIS_fnc_initDisplay'); uiNamespace setVariable [ARR_2('ACE_dlgVehicle', _this select 0)]; with UINameSpace do {[ARR_2(_this,'onLoad')] call LIB_UI_System_Tank_Interface_Display_Interface};);
  };
  class RscUnitInfoTank_LIB_StuG_III_G_IF: RscUnitInfoTank_LIB_IF
  {
    onLoad = QUOTE([ARR_4(""onLoad"",_this,""RscUnitInfo"",'IGUI')] call (uinamespace getvariable 'BIS_fnc_initDisplay'); with UINameSpace do {LIB_Art_Sight_Display = (_this select 0); [ARR_2(_this,'onLoad')] call LIB_UI_System_Tank_Interface_Display_Interface; [] call LIB_UI_System_Tanks_StuG_III_G_init;}; uiNamespace setVariable [ARR_2('ACE_dlgVehicle',     _this select 0)];);
  };
  class RscUnitStaticWeapon_LIB_IF: RscUnitInfoSoldier_IF
	{
    onLoad = QUOTE([ARR_4(""onLoad"",_this,""RscUnitInfo"",'IGUI')] call (uinamespace getvariable 'BIS_fnc_initDisplay'); uiNamespace setVariable [ARR_2('ACE_dlgSoldier', _this select 0)]; [ARR_2('ace_infoDisplayChanged', [ARR_2(_this select 0, 'Soldier')])] call CBA_fnc_localEvent;  with UINameSpace do {[ARR_2(_this,'onLoad')] call LIB_UI_System_Tank_Interface_Display_Interface};);
  };
  class RscUnitStaticWeapon_ZIS3_IF: RscUnitStaticWeapon_LIB_IF_StaticCannon
	{
    onLoad = QUOTE([ARR_4(""onLoad"",_this,""RscUnitInfo"",'IGUI')] call (uinamespace getvariable 'BIS_fnc_initDisplay'); with UINameSpace do {LIB_Art_Sight_Display = (_this select 0); [ARR_2(_this,'onLoad')] call LIB_UI_System_Tank_Interface_Display_Interface; [] call LIB_UI_System_StaticWeapons_Zis3_init;}; uiNamespace setVariable [ARR_2('ACE_dlgVehicle',     _this select 0)];);
  };
  class RscUnitStaticWeapon_PAK40_IF: RscUnitStaticWeapon_LIB_IF_StaticCannon
	{
    onLoad = QUOTE([ARR_4(""onLoad"",_this,""RscUnitInfo"",'IGUI')] call (uinamespace getvariable 'BIS_fnc_initDisplay'); with UINameSpace do {LIB_Art_Sight_Display = (_this select 0); [ARR_2(_this,'onLoad')] call LIB_UI_System_Tank_Interface_Display_Interface; [] call LIB_UI_System_StaticWeapons_Pak40_init;}; uiNamespace setVariable [ARR_2('ACE_dlgVehicle',     _this select 0)];);
  };
  class RscUnitInfoAir_LIB_IF: RscUnitInfoAir_IF
  {
    onLoad = QUOTE([ARR_4(""onLoad"",_this,""RscUnitInfo"",'IGUI')] call (uinamespace getvariable 'BIS_fnc_initDisplay'); uiNamespace setVariable [ARR_2('ACE_dlgAircraft',_this select 0)]; with UINameSpace do {[ARR_2(_this,'onLoad')] call LIB_UI_System_Tank_Interface_Display_Interface};);
  };
};
