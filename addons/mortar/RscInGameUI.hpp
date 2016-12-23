class VScrollbar
	{
		width = 0.021;
		autoScrollSpeed = -1;
		autoScrollDelay = 5;
		autoScrollRewind = 0;
		shadow=0;
	};

class HScrollbar
	{
		height = 0.028;
		shadow=0;
	};


class RscInGameUI
{
	class RscWeaponRangeArtillery
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group","CA_RangeElements_group"};

		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;

			class VScrollbar: VScrollbar
			{
				width = 0;
			};

			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";

			class controls
			{
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					//sizeEx = "0.028*SafezoneH";
					sizeEx = 0;
					shadow = false;
					font = "EtelkaMonospacePro";
					text = 015;
					x = "25.3 * 		(0.01875 * SafezoneH)";
					y = "6.3 * 		(0.025 * SafezoneH)";
					w = "2.2 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};

				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = 0;
					shadow = false;
					font = "EtelkaMonospacePro";
					text = 34.5;
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};

				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = 0;
					shadow = false;
					font = "EtelkaMonospacePro";
					text = 4.5;
					x = "38.3 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};

				class CA_Solution_text: RscText
				{
					style = 0;
					sizeEx = 0;
					colorText[] = {0.95,0.95,0.95,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					idc = 1011;
					text = SOLUTION;
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};

				class CA_distance_text: RscText
				{
					style = 0;
					sizeEx = 0;
					colorText[] = {0.95,0.95,0.95,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					idc = 1010;
					text = RNG;
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};

				class CA_Distance: RscText
				{
					idc = 173;
					style = 1;
					sizeEx = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					text = 2456;
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};

				class CA_time_text: RscText
				{
					style = 0;
					sizeEx = 0;
					colorText[] = {0.95,0.95,0.95,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					idc = 1012;
					text = TRV;
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};

				class CA_Time: RscText
				{
					idc = 174;
					style = 1;
					sizeEx = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					text = "25";
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};

				class CA_ElevCtrl_text: RscText
				{
					style = 0;
					sizeEx = 0;
					colorText[] = {0.95,0.95,0.95,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					idc = 1015;
					text = "ELEV CTRL";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};

				class CA_Elev_text: RscText
				{
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					idc = 1013;
					text = ELEV;
					x = "41.85 * (0.01875 * SafezoneH)";
					y = "19.2 * (0.025 * SafezoneH)";
					w = "5.2 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};

				class CA_Elev: RscText
				{
					idc = 175;
					style = 1;
					//sizeEx = "0.038*SafezoneH";
					sizeEx = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					text = 80.5;
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};

				class CA_Elev_Need_text: RscText
				{
					style = 0;
					sizeEx = 0;
					colorText[] = {0.95,0.95,0.95,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					idc = 1014;
					text = REL;
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};

				class CA_Elev_Need: RscText
				{
					idc = 176;
					style = 1;
					//sizeEx = "0.038*SafezoneH";
					sizeEx = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					text = 35.4;
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};

				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					text = VIS;
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};

		class CA_RangeElements_group: RscControlsGroup
		{
			idc = 177;

			class VScrollbar: VScrollbar
			{
				width = 0;
			};

			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";

			class controls
			{
				class CA_OORange: RscText
				{
					style = 2;
					sizeEx = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					idc = 1007;
					text = "[RANGE]";
					x = "24.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};

				class CA_OORangeCross: RscText
				{
					style = 0x30 + 0x800;
					sizeEx = 0;
					shadow = false;
					idc = 1009;
					text = "";
					x = "20.5 * 		(0.01875 * SafezoneH)";
					y = "14 * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};

	class ACE_Mk6_RscWeaponRangeArtillery: RscWeaponRangeArtillery
	{
		onLoad = "uiNamespace setVariable ['ACE_Mk6_RscWeaponRangeArtillery',_this select 0]; ['infoDisplayChanged',[_this select 0,'Mk6Mortar']] call ace_common_fnc_localEvent;";
		controls[] = {"ACE_ChargeDisplay",ACE_MILS_GROUP,"CA_IGUI_elements_group","CA_RangeElements_group"};

		class ACE_ChargeDisplay: RscStructuredText
		{
			idc = 80085;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.1};
			x = "(profilenamespace getVariable ['IGUI_GRID_WEAPON_X',((safezoneX + safezoneW) - (12.4 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getVariable ['IGUI_GRID_WEAPON_Y',(safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class ACE_MILS_GROUP: CA_IGUI_elements_group
		{
			idc = 80170;

			class controls
			{
				class CA_Heading_MILS: RscText
				{
					idc = 80156;
					style = 2;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = false;
					font = "EtelkaMonospacePro";
					text = 015;
					x = "25 * (0.01875 * SafezoneH)";
					y = "3.3 * (0.025 * SafezoneH)";
					w = "3.3333 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};

				class CA_Elev_MILS: RscText
				{
					idc = 80175;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = false;
					font = "EtelkaMonospacePro";
					text = 80.5;
					align="left";
					x = "43.3 * (0.01875 * SafezoneH)";
					y = "19.2 * (0.025 * SafezoneH)";
					w = "5.2 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};

				class CA_Elev_Need_MILS: CA_Elev_MILS
				{
					idc = 80176;
					sizeEx = 0;
					y = "30.8 * (0.025 * SafezoneH)";
				};
			};
		};
	};
};
