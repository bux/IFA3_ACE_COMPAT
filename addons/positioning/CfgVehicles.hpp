class CfgVehicles {
	class LandVehicle;	// External class reference
    class StaticWeapon : LandVehicle {};
	
	class StaticMGWeapon : StaticWeapon {
		
		class ACE_SelfActions {
			class ACE_IFa3_right {
				displayName = "$STR_ifa3_ace_pos_right";
				condition = "alive _target";
				statement = "_target call ACE_pos_fnc_rotationRight";
				icon = "\z\ifa3_comp_ace\addons\positioning\ui\right.paa";
			};	
			class ACE_IFa3_left{
				displayName = "$STR_ifa3_ace_pos_left";
				condition = "alive _target";
				statement = "_target call ACE_pos_fnc_rotationLeft";
				icon = "\z\ifa3_comp_ace\addons\positioning\ui\left.paa";
			};			
		};				
	};
	class StaticATWeapon : StaticWeapon {
		
		class ACE_SelfActions {
			class ACE_IFa3_right {
				displayName = "$STR_ifa3_ace_pos_right";
				condition = "alive _target";
				statement = "_target call ACE_pos_fnc_rotationRight";
				icon = "\z\ifa3_comp_ace\addons\positioning\ui\right.paa";
			};	
			class ACE_IFa3_left{
				displayName = "$STR_ifa3_ace_pos_left";
				condition = "alive _target";
				statement = "_target call ACE_pos_fnc_rotationLeft";
				icon = "\z\ifa3_comp_ace\addons\positioning\ui\left.paa";
			};			
		};				
	};
	
	class StaticMortar : StaticWeapon {};
	
	class LIB_Mortar_ACE : StaticMortar {
		class ACE_SelfActions {
			class ACE_IFa3_right {
				displayName = "$STR_ifa3_ace_pos_right";
				condition = "alive _target";
				statement = "_target call ACE_pos_fnc_rotationRight";
				icon = "\z\ifa3_comp_ace\addons\positioning\ui\right.paa";
			};	
			class ACE_IFa3_left{
				displayName = "$STR_ifa3_ace_pos_left";
				condition = "alive _target";
				statement = "_target call ACE_pos_fnc_rotationLeft";
				icon = "\z\ifa3_comp_ace\addons\positioning\ui\left.paa";
			};			
		};	
	};
};
