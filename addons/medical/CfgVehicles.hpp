class CfgVehicles
{
	class O_Soldier_base_F;
	class LIB_SOV_Soldier_base: O_Soldier_base_F
	{
		class HitPoints
		{
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
};