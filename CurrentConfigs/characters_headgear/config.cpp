class CfgPatches
{
	class DZ_Characters_Headgear
	{
		units[]=
		{
			"BaseballCap_Blue",
			"BaseballCap_Beige",
			"BaseballCap_Black",
			"BaseballCap_Olive",
			"BaseballCap_Pink",
			"BaseballCap_Red",
			"BaseballCap_Camo",
			"BaseballCap_CMMG_Black",
			"BaseballCap_CMMG_Pink",
			"MotoHelmet_Black",
			"MotoHelmet_Blue",
			"MotoHelmet_Green",
			"MotoHelmet_Red",
			"MotoHelmet_White",
			"Headtorch_Grey",
			"CowboyHat_Brown",
			"CowboyHat_black",
			"CowboyHat_darkBrown",
			"CowboyHat_green",
			"BoonieHat_black",
			"BoonieHat_Blue",
			"BoonieHat_DPM",
			"BoonieHat_dubok",
			"BoonieHat_flecktran",
			"BoonieHat_NavyBlue",
			"BoonieHat_olive",
			"BoonieHat_orange",
			"BoonieHat_red",
			"BoonieHat_Tan",
			"FlatCap_Black",
			"FlatCap_Grey",
			"FlatCap_Brown",
			"FlatCap_Blue",
			"FlatCap_Red",
			"FlatCap_Check_Black",
			"FlatCap_Check_Brown",
			"FlatCap_Check_Grey",
			"GhillieHoodWoodland"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class Switchable_Base;
	class BallisticHelmet_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_BallisticHelmet_ColorBase0";
		descriptionShort="$STR_CfgVehicles_BallisticHelmet_ColorBase1";
		model="\DZ\characters\headgear\HelmetMich_g.p3d";
		weight=1000;
		itemSize[]={4,3};
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		varWetMax=0.249;
		heatIsolation=0.30000001;
		headSelectionsToHide[]=
		{
			"Clipping_HelmetMich"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=75;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HelmetMich.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HelmetMich.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HelmetMich_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HelmetMich_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HelmetMich_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HelmetMich_m.p3d";
			female="\DZ\characters\headgear\HelmetMich_f.p3d";
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BallisticHelmet_Green: BallisticHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\helmetmich_co.paa",
			"dz\characters\headgear\data\helmetmich_co.paa",
			"dz\characters\headgear\data\helmetmich_co.paa"
		};
	};
	class BallisticHelmet_Black: BallisticHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\helmetmich_bk_co.paa",
			"dz\characters\headgear\data\helmetmich_bk_co.paa",
			"dz\characters\headgear\data\helmetmich_bk_co.paa"
		};
	};
	class BallisticHelmet_UN: BallisticHelmet_ColorBase
	{
		scope=2;
		weight=980;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\helmetmich_un_co.paa",
			"dz\characters\headgear\data\helmetmich_un_co.paa",
			"dz\characters\headgear\data\helmetmich_un_co.paa"
		};
	};
	class BallisticHelmet_BDU: BallisticHelmet_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_CamoHelmet0";
		model="\DZ\characters\headgear\pasgt_g.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\CamoHelmet_BDU_CO.paa",
			"dz\characters\headgear\data\CamoHelmet_BDU_CO.paa",
			"dz\characters\headgear\data\CamoHelmet_BDU_CO.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\camohelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\camohelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\camohelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\camohelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\camohelmet_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class BallisticHelmet_Desert: BallisticHelmet_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_CamoHelmet0";
		model="\DZ\characters\headgear\pasgt_g.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\CamoHelmet_Desert_CO.paa",
			"dz\characters\headgear\data\CamoHelmet_Desert_CO.paa",
			"dz\characters\headgear\data\CamoHelmet_Desert_CO.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\camohelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\camohelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\camohelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\camohelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\camohelmet_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class BallisticHelmet_Woodland: BallisticHelmet_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_CamoHelmet0";
		model="\DZ\characters\headgear\pasgt_g.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\CamoHelmet_Woodland_CO.paa",
			"dz\characters\headgear\data\CamoHelmet_Woodland_CO.paa",
			"dz\characters\headgear\data\CamoHelmet_Woodland_CO.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\camohelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\camohelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\camohelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\camohelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\camohelmet_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class BallisticHelmet_Winter: BallisticHelmet_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_CamoHelmet0";
		model="\DZ\characters\headgear\pasgt_g.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\CamoHelmet_Winter_CO.paa",
			"dz\characters\headgear\data\CamoHelmet_Winter_CO.paa",
			"dz\characters\headgear\data\CamoHelmet_Winter_CO.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\camohelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\camohelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\camohelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\camohelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\camohelmet_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class BallisticHelmet_Navy: BallisticHelmet_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_CamoHelmet0";
		model="\DZ\characters\headgear\pasgt_g.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\CamoHelmet_Navy_CO.paa",
			"dz\characters\headgear\data\CamoHelmet_Navy_CO.paa",
			"dz\characters\headgear\data\CamoHelmet_Navy_CO.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\camohelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\camohelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\camohelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\camohelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\camohelmet_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class HeadCover_Improvised: Clothing
	{
		scope=2;
		displayName="$STR_HeadCover_Improvised0";
		descriptionShort="$STR_HeadCover_Improvised1";
		model="\DZ\characters\headgear\headCover_improvised_g.p3d";
		rotationFlags=16;
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		weight=200;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.15000001;
		repairableWithKits[]={2};
		repairCosts[]={25};
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\headCover_improvised_CO.paa",
			"dz\characters\headgear\data\headCover_improvised_CO.paa",
			"dz\characters\headgear\data\headCover_improvised_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\headCover_improvised.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\headCover_improvised.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\headCover_improvised_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\headCover_improvised_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\headCover_improvised_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\headCover_improvised_m.p3d";
			female="\DZ\characters\headgear\headCover_improvised_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BaseballCap_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_BaseballCap_ColorBase0";
		descriptionShort="$STR_CfgVehicles_BaseballCap_ColorBase1";
		model="\DZ\characters\headgear\BaseballCap_ground.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=110;
		itemSize[]={3,2};
		varWetMax=1;
		heatIsolation=0.2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\BaseballCapII.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\BaseballCapII.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\BaseballCapII_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\BaseballCap_m.p3d";
			female="\DZ\characters\headgear\BaseballCap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BaseballCap_Blue: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa",
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa",
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa"
		};
	};
	class BaseballCap_Beige: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa",
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa",
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa"
		};
	};
	class BaseballCap_Black: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_black_co.paa"
		};
	};
	class BaseballCap_Olive: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa",
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa",
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa"
		};
	};
	class BaseballCap_Pink: BaseballCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa"
		};
	};
	class BaseballCap_Red: BaseballCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_red_co.paa",
			"\dz\characters\headgear\data\baseballcapii_red_co.paa",
			"\dz\characters\headgear\data\baseballcapii_red_co.paa"
		};
	};
	class BaseballCap_Camo: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa",
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa",
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa"
		};
	};
	class BaseballCap_CMMG_Black: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa"
		};
	};
	class BaseballCap_CMMG_Pink: BaseballCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa"
		};
	};
	class ZSh3PilotHelmet: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_ZSh3PilotHelmet0";
		descriptionShort="$STR_CfgVehicles_ZSh3PilotHelmet1";
		model="\DZ\characters\headgear\HeloHelmet_ground.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=1450;
		itemSize[]={4,4};
		varWetMax=0.49000001;
		heatIsolation=0.30000001;
		headSelectionsToHide[]=
		{
			"Clipping_HeloHelmet"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\HeloHelmet_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=75;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeloHelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeloHelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeloHelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeloHelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeloHelmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.55000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.55000001;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeloHelmet.p3d";
			female="\DZ\characters\headgear\HeloHelmet.p3d";
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class ZSh3PilotHelmet_Green: ZSh3PilotHelmet
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\HeloHelmet_green_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_green_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_green_co.paa"
		};
	};
	class ZSh3PilotHelmet_Black: ZSh3PilotHelmet
	{
		scope=2;
		visibilityModifier=0.85000002;
		color="Black";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\HeloHelmet_black_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_black_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_black_co.paa"
		};
	};
	class ConstructionHelmet_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_ConstructionHelmet_ColorBase0";
		descriptionShort="$STR_CfgVehicles_ConstructionHelmet_ColorBase1";
		model="\DZ\characters\headgear\ConstructionHelmet_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=470;
		itemSize[]={4,3};
		varWetMax=0.249;
		heatIsolation=0.1;
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\ConstructionHelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\ConstructionHelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\ConstructionHelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\ConstructionHelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\ConstructionHelmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ConstructionHelmet_m.p3d";
			female="\DZ\characters\headgear\ConstructionHelmet_f.p3d";
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class ConstructionHelmet_Blue: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ConstructionHelmet_blue_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_blue_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_blue_co.paa"
		};
	};
	class ConstructionHelmet_Lime: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ConstructionHelmet_lime_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_lime_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_lime_co.paa"
		};
	};
	class ConstructionHelmet_Orange: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ConstructionHelmet_orange_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_orange_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_orange_co.paa"
		};
	};
	class ConstructionHelmet_Red: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ConstructionHelmet_red_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_red_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_red_co.paa"
		};
	};
	class ConstructionHelmet_White: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ConstructionHelmet_white_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_white_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_white_co.paa"
		};
	};
	class ConstructionHelmet_Yellow: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ConstructionHelmet_yellow_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_yellow_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_yellow_co.paa"
		};
	};
	class BurlapSackCover: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_BurlapSack0";
		descriptionShort="$STR_CfgVehicles_BurlapSack1";
		model="\dz\characters\headgear\Head_sack_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=1;
		weight=510;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.30000001;
		headSelectionsToHide[]=
		{
			"Clipping_BurlapSack"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\head_sack_co.paa",
			"dz\characters\headgear\data\head_sack_co.paa",
			"dz\characters\headgear\data\head_sack_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\Head_Sack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\Head_Sack.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\Head_Sack_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\Head_Sack_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\Head_Sack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Head_sack.p3d";
			female="\DZ\characters\headgear\Head_sack.p3d";
		};
		class Protection
		{
			biological=0.25;
			dust_particle_breath=0.44999999;
			dust_particle_eyes=0.89999998;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="none";
		soundVoicePriority=10;
	};
	class BeanieHat_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_BeanieHat_ColorBase0";
		descriptionShort="$STR_CfgVehicles_BeanieHat_ColorBase1";
		model="\DZ\characters\headgear\BeanieHat_ground.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=90;
		itemSize[]={3,2};
		varWetMax=1;
		heatIsolation=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_BeanieHat"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\BeanieHat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\BeanieHat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\BeanieHat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\BeanieHat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\BeanieHat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\BeanieHat_m.p3d";
			female="\DZ\characters\headgear\BeanieHat_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BeanieHat_Beige: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_beige_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_beige_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_beige_co.paa"
		};
	};
	class BeanieHat_Black: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_black_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_black_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_black_co.paa"
		};
	};
	class BeanieHat_Blue: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_blue_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_blue_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_blue_co.paa"
		};
	};
	class BeanieHat_Brown: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_brown_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_brown_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_brown_co.paa"
		};
	};
	class BeanieHat_Green: BeanieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_green_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_green_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_green_co.paa"
		};
	};
	class BeanieHat_Grey: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_grey_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_grey_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_grey_co.paa"
		};
	};
	class BeanieHat_Pink: BeanieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_pink_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_pink_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_pink_co.paa"
		};
	};
	class BeanieHat_Red: BeanieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_red_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_red_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_red_co.paa"
		};
	};
	class Ushanka_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_Ushanka_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Ushanka_ColorBase1";
		model="\DZ\characters\headgear\ushanka_ground.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=320;
		itemSize[]={3,2};
		varWetMax=1;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_ushanka"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\Ushanka.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\Ushanka.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\Ushanka_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\Ushanka_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\Ushanka_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ushanka_m.p3d";
			female="\DZ\characters\headgear\ushanka_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Ushanka_Black: Ushanka_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Ushanka_black_co.paa",
			"\DZ\characters\headgear\data\Ushanka_black_co.paa",
			"\DZ\characters\headgear\data\Ushanka_black_co.paa"
		};
	};
	class Ushanka_Blue: Ushanka_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Ushanka_blue_co.paa",
			"\DZ\characters\headgear\data\Ushanka_blue_co.paa",
			"\DZ\characters\headgear\data\Ushanka_blue_co.paa"
		};
	};
	class Ushanka_Green: Ushanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Ushanka_green_co.paa",
			"\DZ\characters\headgear\data\Ushanka_green_co.paa",
			"\DZ\characters\headgear\data\Ushanka_green_co.paa"
		};
	};
	class PumpkinHelmet: Clothing
	{
		scope=2;
		displayName="$STR_cfgvehicles_pumpkinhelmet0";
		descriptionShort="$STR_cfgvehicles_pumpkinhelmet1";
		model="\DZ\characters\headgear\PumpkinHelmet_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		weight=500;
		itemSize[]={2,2};
		varWetMax=0.048999999;
		heatIsolation=1;
		noMask=1;
		noNVStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_PumpkinHelmet"
		};
		class Reflectors
		{
			class Beam
			{
				color[]={1,0.55000001,0,1};
				brightness=1;
				radius=20;
				angle=70;
				angleInnerRatio=0.25;
				dayLight=1;
				flareAngleBias=40;
				position="beamStart";
				direction="beamEnd";
				hitpoint="bulb";
				selection="bulb";
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\PumpkinHelmet.p3d";
			female="\DZ\characters\headgear\PumpkinHelmet.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLabels[]={1,0.69999999,0.5,0.30000001,0};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\pumpkin_emissive.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\pumpkin_emissive.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\pumpkin_emissive_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\pumpkin_emissive_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\pumpkin_emissive_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
		class Protection
		{
			biological=0.25;
			dust_particle_breath=1;
			dust_particle_eyes=1;
		};
		soundVoiceType="none";
		soundVoicePriority=10;
	};
	class MotoHelmet_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_MotoHelmet_ColorBase0";
		descriptionShort="$STR_CfgVehicles_MotoHelmet_ColorBase1";
		model="\DZ\characters\headgear\MotoHelmet_ground.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		weight=1210;
		itemSize[]={4,4};
		varWetMax=0.49000001;
		heatIsolation=0.69999999;
		noMask=1;
		noNVStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_MotoHelmet"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MotoHelmet.p3d";
			female="\DZ\characters\headgear\MotoHelmet.p3d";
		};
		class Protection
		{
			biological=0.25;
			dust_particle_breath=1;
			dust_particle_eyes=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\MotoHelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\MotoHelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="motohelmet";
		soundVoicePriority=10;
	};
	class MotoHelmet_Black: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_black_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
	};
	class MotoHelmet_Grey: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_grey_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
	};
	class MotoHelmet_Green: MotoHelmet_ColorBase
	{
		scope=2;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_green_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
	};
	class MotoHelmet_Lime: MotoHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_lime_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
	};
	class MotoHelmet_Blue: MotoHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_blue_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
	};
	class MotoHelmet_Red: MotoHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_red_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
	};
	class MotoHelmet_White: MotoHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_white_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
	};
	class MotoHelmet_Yellow: MotoHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_yellow_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
	};
	class DarkMotoHelmet_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_MotoHelmet_ColorBase0";
		descriptionShort="$STR_CfgVehicles_MotoHelmet_ColorBase1";
		model="\DZ\characters\headgear\MotoHelmet_ground.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		weight=1210;
		itemSize[]={4,4};
		varWetMax=0.49000001;
		heatIsolation=0.69999999;
		noMask=1;
		noNVStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_MotoHelmet"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"Camo1"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MotoHelmet.p3d";
			female="\DZ\characters\headgear\MotoHelmet.p3d";
		};
		class Protection
		{
			biological=0.25;
			dust_particle_breath=1;
			dust_particle_eyes=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\MotoHelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\MotoHelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="motohelmet";
		soundVoicePriority=10;
	};
	class DarkMotoHelmet_Black: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_black_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
	};
	class DarkMotoHelmet_Grey: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_grey_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
	};
	class DarkMotoHelmet_Green: DarkMotoHelmet_ColorBase
	{
		scope=2;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_green_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
	};
	class DarkMotoHelmet_Lime: DarkMotoHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_lime_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
	};
	class DarkMotoHelmet_Blue: DarkMotoHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_blue_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
	};
	class DarkMotoHelmet_Red: DarkMotoHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_red_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
	};
	class DarkMotoHelmet_White: DarkMotoHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_white_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
	};
	class DarkMotoHelmet_Yellow: DarkMotoHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_yellow_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
	};
	class DarkMotoHelmet_YellowScarred: DarkMotoHelmet_ColorBase
	{
		scope=2;
		descriptionShort="$STR_CfgVehicles_MotoHelmet_YellowScarred1";
		model="\DZ\characters\headgear\MotoHelmet_scarred_ground.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo_scarred",
			"camoGround",
			"camoGround_scarred"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\motohelmetvisor_dark_co.paa",
			"dz\characters\headgear\data\motohelmetvisor_scarred_co.paa",
			"dz\characters\headgear\data\motohelmet_yellow_co.paa",
			"dz\characters\headgear\data\motohelmet_scarred_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\headgear\data\motohelmetvisor_nontrans.rvmat",
			"dz\characters\headgear\data\motohelmetvisor_scarred.rvmat",
			"dz\characters\headgear\data\motohelmet.rvmat",
			"dz\characters\headgear\data\motohelmet_scarred.rvmat"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MotoHelmet_scarred.p3d";
			female="\DZ\characters\headgear\MotoHelmet_scarred.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\MotoHelmet.rvmat",
								"DZ\characters\headgear\data\motohelmetvisor_nontrans.rvmat",
								"DZ\characters\headgear\data\motohelmet_scarred.rvmat",
								"DZ\characters\headgear\data\MotoHelmetVisor_scarred.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\MotoHelmet.rvmat",
								"DZ\characters\headgear\data\motohelmetvisor_nontrans.rvmat",
								"DZ\characters\headgear\data\motohelmet_scarred.rvmat",
								"DZ\characters\headgear\data\MotoHelmetVisor_scarred.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
								"DZ\characters\headgear\data\motohelmetvisor_nontrans_damage.rvmat",
								"DZ\characters\headgear\data\motohelmet_scarred_damage.rvmat",
								"DZ\characters\headgear\data\MotoHelmetVisor_scarred_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
								"DZ\characters\headgear\data\motohelmetvisor_nontrans_damage.rvmat",
								"DZ\characters\headgear\data\motohelmet_scarred_damage.rvmat",
								"DZ\characters\headgear\data\MotoHelmetVisor_scarred_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
								"DZ\characters\headgear\data\motohelmetvisor_nontrans_destruct.rvmat",
								"DZ\characters\headgear\data\motohelmet_scarred_destruct.rvmat",
								"DZ\characters\headgear\data\MotoHelmetVisor_scarred_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeMachete";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeMachete_Heavy";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeMachete_Heavy";
				range=3.3;
			};
		};
	};
	class DarkMotoHelmet_YellowScarred_Test: DarkMotoHelmet_YellowScarred
	{
		scope=2;
		descriptionShort="$STR_CfgVehicles_MotoHelmet_YellowScarred1";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0,1,0,1,CO)",
			"#(argb,8,8,3)color(0,0,1,1,CO)",
			"#(argb,8,8,3)color(1,0,0,1,CO)",
			"#(argb,8,8,3)color(0,0,0,1,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\headgear\data\motohelmetvisor_nontrans.rvmat",
			"dz\characters\headgear\data\motohelmetvisor_scarred.rvmat",
			"dz\characters\headgear\data\motohelmet.rvmat",
			"dz\characters\headgear\data\motohelmet_scarred.rvmat"
		};
	};
	class Headtorch_ColorBase: Switchable_Base
	{
		displayName="$STR_CfgVehicles_Headtorch_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		visibilityModifier=0.89999998;
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		inventorySlot[]=
		{
			"Eyewear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
		soundImpactType="glass";
	};
	class Headtorch_Grey: Headtorch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\headtorch_Grey_co.paa",
			"dz\characters\headgear\data\headtorch_Grey_co.paa",
			"dz\characters\headgear\data\headtorch_Grey_co.paa",
			"dz\data\data\light_flare2_ca.paa",
			"dz\characters\headgear\data\headtorch_Grey_co.paa",
			"#(argb,8,8,3)color(0.0745098,0.141176,0.184314,0.3,ca)",
			"dz\characters\headgear\data\headtorch_Grey_co.paa"
		};
	};
	class Headtorch_Black: Headtorch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\headtorch_Black_co.paa",
			"dz\characters\headgear\data\headtorch_Black_co.paa",
			"dz\characters\headgear\data\headtorch_Black_co.paa",
			"dz\data\data\light_flare2_ca.paa",
			"dz\characters\headgear\data\headtorch_Black_co.paa",
			"#(argb,8,8,3)color(0.0745098,0.141176,0.184314,0.3,ca)",
			"dz\characters\headgear\data\headtorch_Black_co.paa"
		};
	};
	class Bandana_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_cfgvehicles_bandana_colorbase0";
		descriptionShort="$STR_cfgvehicles_bandana_colorbase1";
		model="\DZ\characters\headgear\BandanaHybrid_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		inventorySlot[]=
		{
			"Headgear",
			"Mask"
		};
		rotationFlags=16;
		weight=120;
		itemSize[]={3,1};
		ragQuantity=1;
		varWetMax=1;
		heatIsolation=0.40000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_BandanaHead",
			"Clipping_BandanaFace"
		};
		hideSelectionsByinventorySlot=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
		simpleHiddenSelections[]=
		{
			"hide_headgear",
			"hide_mask"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\BandanaH.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\BandanaH.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\BandanaH_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\BandanaH_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\BandanaH_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\BandanaHybrid_m.p3d";
			female="\DZ\characters\headgear\BandanaHybrid_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Bandana_RedPattern: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\BandanaFH_ground_redpattern_co.paa",
			"DZ\characters\headgear\data\BandanaH_redpattern_co.paa",
			"DZ\characters\headgear\data\BandanaF_redpattern_co.paa",
			"DZ\characters\headgear\data\BandanaH_redpattern_co.paa",
			"DZ\characters\headgear\data\BandanaF_redpattern_co.paa"
		};
	};
	class Bandana_BlackPattern: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BandanaFH_ground_blackpattern_co.paa",
			"DZ\characters\headgear\data\BandanaH_blackpattern_co.paa",
			"DZ\characters\headgear\data\BandanaF_blackpattern_co.paa",
			"DZ\characters\headgear\data\BandanaH_blackpattern_co.paa",
			"DZ\characters\headgear\data\BandanaF_blackpattern_co.paa"
		};
	};
	class Bandana_PolkaPattern: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\BandanaFH_g_karkulka_co.paa",
			"DZ\characters\headgear\data\BandanaH_karkulka_co.paa",
			"DZ\characters\headgear\data\BandanaF_karkulka_co.paa",
			"DZ\characters\headgear\data\BandanaH_karkulka_co.paa",
			"DZ\characters\headgear\data\BandanaF_karkulka_co.paa"
		};
	};
	class Bandana_Greenpattern: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\BandanaFHG_olive_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_olive_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_olive_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_olive_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_olive_co.paa"
		};
	};
	class Bandana_CamoPattern: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\BandanaFHG_TTsKO_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa"
		};
	};
	class Bandana_Blue: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\BandanaFH_g_blue_co.paa",
			"DZ\characters\headgear\data\BandanaH_blue_co.paa",
			"DZ\characters\headgear\data\BandanaF_blue_co.paa",
			"DZ\characters\headgear\data\BandanaH_blue_co.paa",
			"DZ\characters\headgear\data\BandanaF_blue_co.paa"
		};
	};
	class Bandana_Pink: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\BandanaFH_g_pink_co.paa",
			"DZ\characters\headgear\data\BandanaH_pink_co.paa",
			"DZ\characters\headgear\data\BandanaF_pink_co.paa",
			"DZ\characters\headgear\data\BandanaH_pink_co.paa",
			"DZ\characters\headgear\data\BandanaF_pink_co.paa"
		};
	};
	class Bandana_Yellow: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\BandanaFH_g_yellow_co.paa",
			"DZ\characters\headgear\data\BandanaH_yellow_co.paa",
			"DZ\characters\headgear\data\BandanaF_yellow_co.paa",
			"DZ\characters\headgear\data\BandanaH_yellow_co.paa",
			"DZ\characters\headgear\data\BandanaF_yellow_co.paa"
		};
	};
	class Shemag_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_Shemag_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Shemag_ColorBase1";
		model="\DZ\characters\headgear\ShemagHybrid_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		inventorySlot[]=
		{
			"Headgear",
			"Mask"
		};
		rotationFlags=2;
		weight=300;
		itemSize[]={2,2};
		ragQuantity=4;
		varWetMax=1;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		headSelectionsToHide[]=
		{
			"Clipping_BandanaHead",
			"Clipping_BandanaFace"
		};
		hideSelectionsByinventorySlot=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
		simpleHiddenSelections[]=
		{
			"hide_headgear",
			"hide_mask"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\ShemagFH_g.rvmat",
								"DZ\characters\headgear\data\ShemagH.rvmat",
								"DZ\characters\headgear\data\ShemagF.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\ShemagFH_g.rvmat",
								"DZ\characters\headgear\data\ShemagH.rvmat",
								"DZ\characters\headgear\data\ShemagF.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\ShemagFH_g_damage.rvmat",
								"DZ\characters\headgear\data\ShemagH_damage.rvmat",
								"DZ\characters\headgear\data\ShemagF_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\ShemagFH_g_damage.rvmat",
								"DZ\characters\headgear\data\ShemagH_damage.rvmat",
								"DZ\characters\headgear\data\ShemagF_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\ShemagFH_g_destruct.rvmat",
								"DZ\characters\headgear\data\ShemagH_destruct.rvmat",
								"DZ\characters\headgear\data\ShemagF_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Protection
		{
			dust_particle_eyes=0.2;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ShemagHybrid_m.p3d";
			female="\DZ\characters\headgear\ShemagHybrid_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Shemag_Brown: Shemag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\ShemagFH_g_brown_co.paa",
			"DZ\characters\headgear\data\ShemagH_brown_co.paa",
			"DZ\characters\headgear\data\ShemagF_brown_co.paa",
			"DZ\characters\headgear\data\ShemagH_brown_co.paa",
			"DZ\characters\headgear\data\ShemagF_brown_co.paa"
		};
	};
	class Shemag_Green: Shemag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\ShemagFH_g_green_co.paa",
			"DZ\characters\headgear\data\ShemagH_green_co.paa",
			"DZ\characters\headgear\data\ShemagF_green_co.paa",
			"DZ\characters\headgear\data\ShemagH_green_co.paa",
			"DZ\characters\headgear\data\ShemagF_green_co.paa"
		};
	};
	class Shemag_Red: Shemag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\ShemagFH_g_red_co.paa",
			"DZ\characters\headgear\data\ShemagH_red_co.paa",
			"DZ\characters\headgear\data\ShemagF_red_co.paa",
			"DZ\characters\headgear\data\ShemagH_red_co.paa",
			"DZ\characters\headgear\data\ShemagF_red_co.paa"
		};
	};
	class Shemag_White: Shemag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\ShemagFH_g_white_co.paa",
			"DZ\characters\headgear\data\ShemagH_white_co.paa",
			"DZ\characters\headgear\data\ShemagF_white_co.paa",
			"DZ\characters\headgear\data\ShemagH_white_co.paa",
			"DZ\characters\headgear\data\ShemagF_white_co.paa"
		};
	};
	class RadarCap_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_RadarCap_ColorBase0";
		descriptionShort="$STR_CfgVehicles_RadarCap_ColorBase1";
		model="\DZ\characters\headgear\RadarCap_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=160;
		itemSize[]={3,2};
		varWetMax=1;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_RadarCap"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\RadarCap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\RadarCap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\RadarCap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\RadarCap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\RadarCap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\RadarCap_m.p3d";
			female="\DZ\characters\headgear\RadarCap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class RadarCap_Black: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\RadarCap_black_co.paa",
			"DZ\characters\headgear\data\RadarCap_black_co.paa",
			"DZ\characters\headgear\data\RadarCap_black_co.paa"
		};
	};
	class RadarCap_Blue: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\RadarCap_blue_co.paa",
			"DZ\characters\headgear\data\RadarCap_blue_co.paa",
			"DZ\characters\headgear\data\RadarCap_blue_co.paa"
		};
	};
	class RadarCap_Brown: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\RadarCap_brown_co.paa",
			"DZ\characters\headgear\data\RadarCap_brown_co.paa",
			"DZ\characters\headgear\data\RadarCap_brown_co.paa"
		};
	};
	class RadarCap_Green: RadarCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\RadarCap_green_co.paa",
			"DZ\characters\headgear\data\RadarCap_green_co.paa",
			"DZ\characters\headgear\data\RadarCap_green_co.paa"
		};
	};
	class RadarCap_Red: RadarCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\RadarCap_red_co.paa",
			"DZ\characters\headgear\data\RadarCap_red_co.paa",
			"DZ\characters\headgear\data\RadarCap_red_co.paa"
		};
	};
	class MilitaryBeret_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_MilitaryBeret_ColorBase0";
		descriptionShort="$STR_CfgVehicles_MilitaryBeret_ColorBase1";
		model="\DZ\characters\headgear\RadarCap_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=230;
		itemSize[]={3,1};
		varWetMax=1;
		heatIsolation=0.2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_MilitaryBeret_xx"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\MilitaryBeret.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\MilitaryBeret.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\MilitaryBeret_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\MilitaryBeret_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\MilitaryBeret_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class MilitaryBeret_Red: MilitaryBeret_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_red_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_red_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_red_co.paa"
		};
	};
	class MilitaryBeret_UN: MilitaryBeret_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\MilitaryBeret_UN_g.p3d";
		lootTag[]=
		{
			"Military_west"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_UN_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_UN_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_blue_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_blue_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_blue_co.paa"
		};
	};
	class MilitaryBeret_NZ: MilitaryBeret_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\MilitaryBeret_NZ_g.p3d";
		lootTag[]=
		{
			"Military_west"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_NZ_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_NZ_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa"
		};
	};
	class MilitaryBeret_ChDKZ: MilitaryBeret_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\MilitaryBeret_ChDKZ_g.p3d";
		lootTag[]=
		{
			"Military_east"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_ChDKZ_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_ChDKZ_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_black_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_black_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_black_co.paa"
		};
	};
	class MilitaryBeret_CDF: MilitaryBeret_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\MilitaryBeret_CDF_g.p3d";
		lootTag[]=
		{
			"Military_east"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_CDF_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_CDF_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa"
		};
	};
	class FlatCap_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_FlatCap_ColorBase0";
		descriptionShort="$STR_CfgVehicles_FlatCap_ColorBase1";
		model="\DZ\characters\headgear\FlatCap_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=240;
		itemSize[]={3,2};
		varWetMax=1;
		heatIsolation=0.40000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_FlatCap"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=45;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\FlatCap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\FlatCap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\FlatCap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\FlatCap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\FlatCap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\FlatCap.p3d";
			female="\DZ\characters\headgear\FlatCap.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FlatCap_Black: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_black_co.paa",
			"\DZ\characters\headgear\data\FlatCap_black_co.paa",
			"\DZ\characters\headgear\data\FlatCap_black_co.paa"
		};
	};
	class FlatCap_Blue: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_blue_co.paa",
			"\DZ\characters\headgear\data\FlatCap_blue_co.paa",
			"\DZ\characters\headgear\data\FlatCap_blue_co.paa"
		};
	};
	class FlatCap_Red: FlatCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_red_co.paa",
			"\DZ\characters\headgear\data\FlatCap_red_co.paa",
			"\DZ\characters\headgear\data\FlatCap_red_co.paa"
		};
	};
	class FlatCap_Brown: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_brown_co.paa",
			"\DZ\characters\headgear\data\FlatCap_brown_co.paa",
			"\DZ\characters\headgear\data\FlatCap_brown_co.paa"
		};
	};
	class FlatCap_Grey: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_grey_co.paa",
			"\DZ\characters\headgear\data\FlatCap_grey_co.paa",
			"\DZ\characters\headgear\data\FlatCap_grey_co.paa"
		};
	};
	class FlatCap_BrownCheck: FlatCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_brown_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_brown_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_brown_check_co.paa"
		};
	};
	class FlatCap_GreyCheck: FlatCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_grey_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_grey_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_grey_check_co.paa"
		};
	};
	class FlatCap_BlackCheck: FlatCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_black_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_black_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_black_check_co.paa"
		};
	};
	class ZmijovkaCap_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_ZmijovkaCap_ColorBase0";
		descriptionShort="$STR_CfgVehicles_ZmijovkaCap_ColorBase1";
		model="\DZ\characters\headgear\ZmijovkaCap_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=17;
		weight=110;
		itemSize[]={3,2};
		varWetMax=1;
		heatIsolation=0.89999998;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_ZmijovkaCap"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\ZmijovkaCap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\ZmijovkaCap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\ZmijovkaCap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\ZmijovkaCap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\ZmijovkaCap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ZmijovkaCap_m.p3d";
			female="\DZ\characters\headgear\ZmijovkaCap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class ZmijovkaCap_Black: ZmijovkaCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ZmijovkaCap_black_co.paa",
			"\DZ\characters\headgear\data\ZmijovkaCap_black_co.paa",
			"\DZ\characters\headgear\data\ZmijovkaCap_black_co.paa"
		};
	};
	class ZmijovkaCap_Blue: ZmijovkaCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ZmijovkaCap_blue_co.paa",
			"\DZ\characters\headgear\data\ZmijovkaCap_blue_co.paa",
			"\DZ\characters\headgear\data\ZmijovkaCap_blue_co.paa"
		};
	};
	class ZmijovkaCap_Brown: ZmijovkaCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ZmijovkaCap_brown_co.paa",
			"\DZ\characters\headgear\data\ZmijovkaCap_brown_co.paa",
			"\DZ\characters\headgear\data\ZmijovkaCap_brown_co.paa"
		};
	};
	class ZmijovkaCap_Green: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ZmijovkaCap_green_co.paa",
			"\DZ\characters\headgear\data\ZmijovkaCap_green_co.paa",
			"\DZ\characters\headgear\data\ZmijovkaCap_green_co.paa"
		};
	};
	class ZmijovkaCap_Red: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ZmijovkaCap_red_co.paa",
			"\DZ\characters\headgear\data\ZmijovkaCap_red_co.paa",
			"\DZ\characters\headgear\data\ZmijovkaCap_red_co.paa"
		};
	};
	class CowboyHat_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_CowboyHat_ColorBase0";
		descriptionShort="$STR_CfgVehicles_CowboyHat_ColorBase1";
		model="\DZ\characters\headgear\CowboyHat_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=370;
		itemSize[]={3,2};
		varWetMax=0.49000001;
		heatIsolation=0.40000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_CowboyHat"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\CowboyHat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\CowboyHat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\CowboyHat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\CowboyHat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\CowboyHat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\CowboyHat.p3d";
			female="\DZ\characters\headgear\CowboyHat.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CowboyHat_Brown: CowboyHat_ColorBase
	{
		scope=2;
		color="Brown";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_Brown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_Brown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_Brown_co.paa"
		};
	};
	class CowboyHat_black: CowboyHat_ColorBase
	{
		scope=2;
		color="black";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_black_co.paa",
			"DZ\characters\headgear\data\CowboyHat_black_co.paa",
			"DZ\characters\headgear\data\CowboyHat_black_co.paa"
		};
	};
	class CowboyHat_darkBrown: CowboyHat_ColorBase
	{
		scope=2;
		color="darkBrown";
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa"
		};
	};
	class CowboyHat_green: CowboyHat_ColorBase
	{
		scope=2;
		color="green";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_green_co.paa",
			"DZ\characters\headgear\data\CowboyHat_green_co.paa",
			"DZ\characters\headgear\data\CowboyHat_green_co.paa"
		};
	};
	class BoonieHat_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_BoonieHat_ColorBase0";
		descriptionShort="$STR_CfgVehicles_BoonieHat_ColorBase1";
		model="\DZ\characters\headgear\BoonieHat_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=170;
		itemSize[]={3,2};
		attachments[]=
		{
			"Hook"
		};
		varWetMax=1;
		heatIsolation=0.30000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_BoonieHat"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\BoonieHat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\BoonieHat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\BoonieHat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\BoonieHat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\BoonieHat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\BoonieHat.p3d";
			female="\DZ\characters\headgear\BoonieHat.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BoonieHat_Black: BoonieHat_ColorBase
	{
		scope=2;
		color="black";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_black_co.paa",
			"DZ\characters\headgear\data\BoonieHat_black_co.paa",
			"DZ\characters\headgear\data\BoonieHat_black_co.paa"
		};
	};
	class BoonieHat_Blue: BoonieHat_ColorBase
	{
		scope=2;
		color="Blue";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_Blue_co.paa",
			"DZ\characters\headgear\data\BoonieHat_Blue_co.paa",
			"DZ\characters\headgear\data\BoonieHat_Blue_co.paa"
		};
	};
	class BoonieHat_DPM: BoonieHat_ColorBase
	{
		scope=2;
		color="DPM";
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_DPM_co.paa",
			"DZ\characters\headgear\data\BoonieHat_DPM_co.paa",
			"DZ\characters\headgear\data\BoonieHat_DPM_co.paa"
		};
	};
	class BoonieHat_Dubok: BoonieHat_ColorBase
	{
		scope=2;
		color="dubok";
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_dubok_co.paa",
			"DZ\characters\headgear\data\BoonieHat_dubok_co.paa",
			"DZ\characters\headgear\data\BoonieHat_dubok_co.paa"
		};
	};
	class BoonieHat_Flecktran: BoonieHat_ColorBase
	{
		scope=2;
		color="flecktran";
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_flecktran_co.paa",
			"DZ\characters\headgear\data\BoonieHat_flecktran_co.paa",
			"DZ\characters\headgear\data\BoonieHat_flecktran_co.paa"
		};
	};
	class BoonieHat_NavyBlue: BoonieHat_ColorBase
	{
		scope=2;
		color="NavyBlue";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_NavyBlue_co.paa",
			"DZ\characters\headgear\data\BoonieHat_NavyBlue_co.paa",
			"DZ\characters\headgear\data\BoonieHat_NavyBlue_co.paa"
		};
	};
	class BoonieHat_Olive: BoonieHat_ColorBase
	{
		scope=2;
		color="olive";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_olive_co.paa",
			"DZ\characters\headgear\data\BoonieHat_olive_co.paa",
			"DZ\characters\headgear\data\BoonieHat_olive_co.paa"
		};
	};
	class BoonieHat_Orange: BoonieHat_ColorBase
	{
		scope=2;
		color="orange";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_orange_co.paa",
			"DZ\characters\headgear\data\BoonieHat_orange_co.paa",
			"DZ\characters\headgear\data\BoonieHat_orange_co.paa"
		};
	};
	class BoonieHat_Red: BoonieHat_ColorBase
	{
		scope=2;
		color="red";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_red_co.paa",
			"DZ\characters\headgear\data\BoonieHat_red_co.paa",
			"DZ\characters\headgear\data\BoonieHat_red_co.paa"
		};
	};
	class BoonieHat_Tan: BoonieHat_ColorBase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_Tan_co.paa",
			"DZ\characters\headgear\data\BoonieHat_Tan_co.paa",
			"DZ\characters\headgear\data\BoonieHat_Tan_co.paa"
		};
	};
	class BoonieHat_Winter: BoonieHat_ColorBase
	{
		scope=2;
		color="winter";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_winter_co.paa",
			"DZ\characters\headgear\data\BoonieHat_winter_co.paa",
			"DZ\characters\headgear\data\BoonieHat_winter_co.paa"
		};
	};
	class OfficerHat: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_OfficerHat0";
		descriptionShort="$STR_CfgVehicles_OfficerHat1";
		model="\DZ\characters\headgear\Officerhat_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		weight=340;
		itemSize[]={3,2};
		varWetMax=0.79000002;
		heatIsolation=0.2;
		visibilityModifier=0.98000002;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_OfficerHat"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\Officerhat_co.paa",
			"dz\characters\headgear\data\Officerhat_co.paa",
			"dz\characters\headgear\data\Officerhat_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=35;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\Officerhat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\Officerhat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\Officerhat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\Officerhat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\Officerhat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Officerhat_m.p3d";
			female="\DZ\characters\headgear\Officerhat_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PoliceCap: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_PoliceCap0";
		descriptionShort="$STR_CfgVehicles_PoliceCap1";
		model="\DZ\characters\headgear\PoliceCap_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		weight=320;
		itemSize[]={3,2};
		varWetMax=0.79000002;
		heatIsolation=0.2;
		visibilityModifier=0.98000002;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_Policecap"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\PoliceCap_co.paa",
			"dz\characters\headgear\data\PoliceCap_co.paa",
			"dz\characters\headgear\data\PoliceCap_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\PoliceCap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\PoliceCap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\PoliceCap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\PoliceCap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\PoliceCap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\PoliceCap_m.p3d";
			female="\DZ\characters\headgear\PoliceCap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PilotkaCap: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_PilotkaCap0";
		descriptionShort="$STR_CfgVehicles_PilotkaCap1";
		model="\DZ\characters\headgear\pilotka_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		weight=140;
		itemSize[]={3,1};
		varWetMax=1;
		heatIsolation=0.2;
		visibilityModifier=0.98000002;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_pilotka"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\Pilotka_co.paa",
			"dz\characters\headgear\data\Pilotka_co.paa",
			"dz\characters\headgear\data\Pilotka_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\pilotka.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\pilotka.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\pilotka_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\pilotka_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\pilotka_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\pilotka_m.p3d";
			female="\DZ\characters\headgear\pilotka_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TankerHelmet: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_TankerHelmet0";
		descriptionShort="$STR_CfgVehicles_TankerHelmet1";
		model="\DZ\characters\headgear\TankerHelmet_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=17;
		weight=980;
		itemSize[]={4,3};
		varWetMax=1;
		heatIsolation=0.89999998;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_TankerHelmet"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\TankerHelmet_black_co.paa",
			"\DZ\characters\headgear\data\TankerHelmet_black_co.paa",
			"\DZ\characters\headgear\data\TankerHelmet_black_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\TankerHelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\TankerHelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\TankerHelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\TankerHelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\TankerHelmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\TankerHelmet.p3d";
			female="\DZ\characters\headgear\TankerHelmet.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class GorkaHelmet: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_GorkaHelmet0";
		descriptionShort="$STR_CfgVehicles_GorkaHelmet1";
		model="\DZ\characters\headgear\Maska_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		attachments[]=
		{
			"Glass"
		};
		weight=1100;
		itemSize[]={4,4};
		color="Green";
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		headSelectionsToHide[]=
		{
			"Clipping_Maska"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\maska_co.paa",
			"\DZ\characters\headgear\data\maska_co.paa",
			"\DZ\characters\headgear\data\maska_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Maska.p3d";
			female="\DZ\characters\headgear\Maska.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					transferToAttachmentsCoef=3;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\maska.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\maska.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\maska_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\maska_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\maska_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class GorkaHelmet_Green: GorkaHelmet
	{
		scope=2;
		visibilityModifier=0.69999999;
		color="Green";
		lootCategory="Crafted";
	};
	class GorkaHelmet_Black: GorkaHelmet
	{
		scope=2;
		visibilityModifier=0.69999999;
		color="Black";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\maska_black_co.paa",
			"\DZ\characters\headgear\data\maska_black_co.paa",
			"\DZ\characters\headgear\data\maska_black_co.paa"
		};
	};
	class FirefightersHelmet_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_FirefightersHelmet_ColorBase0";
		descriptionShort="$STR_CfgVehicles_FirefightersHelmet_ColorBase1";
		model="\DZ\characters\headgear\FireHelmet_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		weight=870;
		itemSize[]={4,3};
		varWetMax=0.249;
		heatIsolation=0.5;
		headSelectionsToHide[]=
		{
			"Clipping_FireHelmet"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\FireHelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\FireHelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\FireHelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\FireHelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\FireHelmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\FireHelmet.p3d";
			female="\DZ\characters\headgear\FireHelmet.p3d";
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FirefightersHelmet_Red: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FireHelmet_red_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_red_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_red_co.paa"
		};
	};
	class FirefightersHelmet_White: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FireHelmet_white_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_white_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_white_co.paa"
		};
	};
	class FirefightersHelmet_Yellow: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FireHelmet_yellow_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_yellow_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_yellow_co.paa"
		};
	};
	class SkateHelmet_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_SkateHelmet_ColorBase0";
		descriptionShort="$STR_CfgVehicles_SkateHelmet_ColorBase1";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		model="\DZ\characters\headgear\ProtecSkateHelmet2_g.p3d";
		weight=460;
		itemSize[]={4,3};
		varWetMax=0.249;
		heatIsolation=0.1;
		headSelectionsToHide[]=
		{
			"Clipping_ProtecSkateHelmet2"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\ProtecSkateHelmet2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\ProtecSkateHelmet2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\ProtecSkateHelmet2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\ProtecSkateHelmet2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\ProtecSkateHelmet2_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ProtecSkateHelmet2_m.p3d";
			female="\DZ\characters\headgear\ProtecSkateHelmet2_f.p3d";
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SkateHelmet_Black: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_black_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_black_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_black_CO.paa"
		};
	};
	class SkateHelmet_Blue: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_blue_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_blue_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_blue_CO.paa"
		};
	};
	class SkateHelmet_Gray: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_gray_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_gray_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_gray_CO.paa"
		};
	};
	class SkateHelmet_Green: SkateHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_green_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_green_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_green_CO.paa"
		};
	};
	class SkateHelmet_Red: SkateHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_red_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_red_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_red_CO.paa"
		};
	};
	class WeldingMask: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_WeldingMask0";
		descriptionShort="$STR_CfgVehicles_WeldingMask1";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		model="\DZ\characters\masks\Welding_Mask_g.p3d";
		weight=2200;
		itemSize[]={3,4};
		varWetMax=0.249;
		heatIsolation=0.1;
		visibilityModifier=0.85000002;
		noMask=1;
		noNVStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_Welding_Mask"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Welding_Mask_CO.paa",
			"\DZ\characters\masks\data\Welding_Mask_CO.paa",
			"\DZ\characters\masks\data\Welding_Mask_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\masks\data\Welding_Mask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\Welding_Mask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\Welding_Mask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\Welding_Mask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\Welding_Mask_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\Welding_Mask_m.p3d";
			female="\DZ\characters\masks\Welding_Mask_f.p3d";
		};
		class Protection
		{
			biological=0.25;
			dust_particle_breath=1;
			dust_particle_eyes=1;
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="none";
		soundVoicePriority=10;
	};
	class PrisonerCap: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_PrisonerCap0";
		descriptionShort="$STR_CfgVehicles_PrisonerCap1";
		model="\DZ\characters\headgear\prison_cap_g.p3d";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=17;
		weight=80;
		itemSize[]={3,2};
		varWetMax=1;
		heatIsolation=0.1;
		headSelectionsToHide[]=
		{
			"Clipping_prison_cap"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\prison_cap_co.paa",
			"\DZ\characters\headgear\data\prison_cap_co.paa",
			"\DZ\characters\headgear\data\prison_cap_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\prison_cap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\prison_cap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\prison_cap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\prison_cap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\prison_cap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\prison_cap_m.p3d";
			female="\DZ\characters\headgear\prison_cap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class GhillieHood_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_GhillieHood_ColorBase0";
		descriptionShort="$STR_CfgVehicles_GhillieHood_ColorBase1";
		model="\DZ\characters\headgear\GhillieHood_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=2;
		weight=410;
		itemSize[]={4,3};
		varWetMax=1;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_GhillieHood"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\GhillieHood.p3d";
			female="\DZ\characters\headgear\GhillieHood.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class GhillieHood_Tan: GhillieHood_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_tan_co.paa",
			"\dz\characters\backpacks\data\ghillie_tan_co.paa",
			"\dz\characters\backpacks\data\ghillie_tan_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieHood_Woodland: GhillieHood_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_green_co.paa",
			"\dz\characters\backpacks\data\ghillie_green_co.paa",
			"\dz\characters\backpacks\data\ghillie_green_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_destruct_co.paa"
							}
						}
					};
				};
			};
			componentNames[]=
			{
				"dmg_all"
			};
		};
	};
	class GhillieHood_Mossy: GhillieHood_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa",
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa",
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_destruct_co.paa"
							}
						}
					};
				};
				componentNames[]=
				{
					"dmg_all"
				};
			};
		};
	};
	class GhillieHood_Winter: GhillieHood_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_winter_co.paa",
			"\dz\characters\backpacks\data\ghillie_winter_co.paa",
			"\dz\characters\backpacks\data\ghillie_winter_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_destruct_co.paa"
							}
						}
					};
				};
				componentNames[]=
				{
					"dmg_all"
				};
			};
		};
	};
	class LeatherHat_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_LeatherHat_ColorBase0";
		descriptionShort="$STR_CfgVehicles_LeatherHat_ColorBase1";
		model="\DZ\characters\headgear\Hat_Leather_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=320;
		itemSize[]={4,3};
		varWetMax=0.249;
		heatIsolation=0.40000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_Hat_leather"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\Hat_Leather_CO.paa",
			"dz\characters\headgear\data\Hat_Leather_CO.paa",
			"dz\characters\headgear\data\Hat_Leather_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Hat_Leather_m.p3d";
			female="\DZ\characters\headgear\Hat_Leather_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class LeatherHat_Natural: LeatherHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\headgear\data\Hat_Leather_natural.rvmat",
			"dz\characters\headgear\data\Hat_Leather_natural.rvmat",
			"dz\characters\headgear\data\Hat_Leather_natural.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\Hat_Leather_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\Data\Hat_Leather_natural_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\Data\Hat_Leather_natural_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherHat_Beige: LeatherHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\headgear\data\Hat_Leather_beige.rvmat",
			"dz\characters\headgear\data\Hat_Leather_beige.rvmat",
			"dz\characters\headgear\data\Hat_Leather_beige.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\Hat_Leather_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\Data\Hat_Leather_beige_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\Data\Hat_Leather_beige_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherHat_Brown: LeatherHat_ColorBase
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\headgear\data\Hat_Leather_brown.rvmat",
			"dz\characters\headgear\data\Hat_Leather_brown.rvmat",
			"dz\characters\headgear\data\Hat_Leather_brown.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\Hat_Leather_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\Data\Hat_Leather_brown_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\Data\Hat_Leather_brown_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherHat_Black: LeatherHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\headgear\data\Hat_Leather_black.rvmat",
			"dz\characters\headgear\data\Hat_Leather_black.rvmat",
			"dz\characters\headgear\data\Hat_Leather_black.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\Hat_Leather_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\Data\Hat_Leather_black_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\Data\Hat_Leather_black_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class MedicalScrubsHat_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_MedicalScrubsHat_ColorBase0";
		descriptionShort="$STR_CfgVehicles_MedicalScrubsHat_ColorBase1";
		model="\DZ\characters\headgear\MedicalScrubs_Hat_g.p3d";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=16;
		weight=460;
		itemSize[]={3,1};
		varWetMax=1;
		heatIsolation=0.1;
		headSelectionsToHide[]=
		{
			"Clipping_MedicalScrubs_Hat"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\MedicalScrubs_Hat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\MedicalScrubs_Hat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\MedicalScrubs_Hat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\MedicalScrubs_Hat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\MedicalScrubs_Hat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MedicalScrubs_Hat_f.p3d";
			female="\DZ\characters\headgear\MedicalScrubs_Hat_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class MedicalScrubsHat_Blue: MedicalScrubsHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_blue_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_blue_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_blue_co.paa"
		};
	};
	class MedicalScrubsHat_White: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_white_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_white_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_white_co.paa"
		};
	};
	class MedicalScrubsHat_Green: MedicalScrubsHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_green_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_green_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_green_co.paa"
		};
	};
	class GreatHelm: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_GreatHelm0";
		descriptionShort="$STR_CfgVehicles_GreatHelm1";
		model="\DZ\characters\headgear\greathelm_g.p3d";
		repairableWithKits[]={10};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\greathelm_CO.paa"
		};
		weight=2000;
		itemSize[]={4,4};
		varWetMax=0.249;
		heatIsolation=0.30000001;
		noMask=1;
		noNVStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_grathelm"
		};
		soundImpactType="metal";
		soundVoiceType="metalhelmet";
		soundVoicePriority=10;
		class ClothingTypes
		{
			male="\DZ\characters\headgear\greathelm.p3d";
			female="\DZ\characters\headgear\greathelm.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=125;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\greathelm.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\greathelm.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\greathelm_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\greathelm_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\greathelm_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class Protection
		{
			biological=0.25;
			dust_particle_breath=0.44999999;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="GreatHelm_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Ssh68Helmet: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_Ssh68Helmet0";
		descriptionShort="$STR_CfgVehicles_Ssh68Helmet1";
		model="\DZ\characters\headgear\Ssh68Helmet_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		weight=1500;
		itemSize[]={4,3};
		varWetMax=0.249;
		heatIsolation=0.2;
		visibilityModifier=0.69999999;
		headSelectionsToHide[]=
		{
			"Clipping_Ssh68Helmet"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\SSH68Helmet_olive_co.paa",
			"\DZ\characters\headgear\data\SSH68Helmet_olive_co.paa",
			"\DZ\characters\headgear\data\SSH68Helmet_olive_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=85;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\SSH68Helmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\SSH68Helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\SSH68Helmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\SSH68Helmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\SSH68Helmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Ssh68Helmet.p3d";
			female="\DZ\characters\headgear\Ssh68Helmet.p3d";
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class DirtBikeHelmet_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_DirtBikeHelmet_ColorBase0";
		descriptionShort="$STR_CfgVehicles_DirtBikeHelmet_ColorBase1";
		model="\DZ\characters\headgear\MxHelmet_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		weight=1600;
		itemSize[]={4,3};
		varWetMax=0.249;
		heatIsolation=0.5;
		attachments[]=
		{
			"DBHelmetVisor",
			"DBHelmetMouth"
		};
		headSelectionsToHide[]=
		{
			"Clipping_MxHelmet"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camo"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=75;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\MxHelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\MxHelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\MxHelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\MxHelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\MxHelmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.55000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.55000001;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MxHelmet.p3d";
			female="\DZ\characters\headgear\MxHelmet.p3d";
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class DirtBikeHelmet_Green: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MxHelmet_green_co.paa",
			"\DZ\characters\headgear\data\MxHelmet_green_co.paa"
		};
	};
	class DirtBikeHelmet_Chernarus: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MxHelmet_chernarus_co.paa",
			"\DZ\characters\headgear\data\MxHelmet_chernarus_co.paa"
		};
	};
	class DirtBikeHelmet_Khaki: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MxHelmet_khaki_co.paa",
			"\DZ\characters\headgear\data\MxHelmet_khaki_co.paa"
		};
	};
	class DirtBikeHelmet_Police: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MxHelmet_police_co.paa",
			"\DZ\characters\headgear\data\MxHelmet_police_co.paa"
		};
	};
	class DirtBikeHelmet_Red: DirtBikeHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MxHelmet_red_co.paa",
			"\DZ\characters\headgear\data\MxHelmet_red_co.paa"
		};
	};
	class DirtBikeHelmet_Black: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MxHelmet_black_co.paa",
			"\DZ\characters\headgear\data\MxHelmet_black_co.paa"
		};
	};
	class DirtBikeHelmet_Blue: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MxHelmet_blue_co.paa",
			"\DZ\characters\headgear\data\MxHelmet_blue_co.paa"
		};
	};
	class DirtBikeHelmet_Visor: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_DirtBikeHelmet_Visor0";
		descriptionShort="$STR_CfgVehicles_DirtBikeHelmet_Visor1";
		model="\dz\characters\headgear\MxHelmet_visor.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=34;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"DBHelmetVisor"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\MxHelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\MxHelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\MxHelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\MxHelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\MxHelmet_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="plastic";
	};
	class DirtBikeHelmet_Mouthguard: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_DirtBikeHelmet_Mouthguard0";
		descriptionShort="$STR_CfgVehicles_DirtBikeHelmet_Mouthguard1";
		model="\dz\characters\headgear\MxHelmet_mouthguard.p3d";
		rotationFlags=34;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"DBHelmetMouth"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\MxHelmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\MxHelmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\MxHelmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\MxHelmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\MxHelmet_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="plastic";
	};
	class NBCHoodBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_NBCHoodBase0";
		descriptionShort="$STR_CfgVehicles_NBCHoodBase1";
		model="\DZ\characters\headgear\NBC_Hood_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		weight=460;
		itemSize[]={2,2};
		repairableWithKits[]={5,6};
		repairCosts[]={30,30};
		varWetMax=0.249;
		heatIsolation=0.40000001;
		headSelectionsToHide[]=
		{
			"Clipping_NBC_Hood"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\NBC_Hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\NBC_Hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\NBC_Hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\NBC_Hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\NBC_Hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Protection
		{
			chemical=1;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\NBC_Hood_m.p3d";
			female="\DZ\characters\headgear\NBC_Hood_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class NBCHoodGray: NBCHoodBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\NBC_Hood_grey_co.paa",
			"\dz\characters\headgear\data\NBC_Hood_grey_co.paa",
			"\dz\characters\headgear\data\NBC_Hood_grey_co.paa"
		};
	};
	class NBCHoodYellow: NBCHoodBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\NBC_Hood_yellow_co.paa",
			"\dz\characters\headgear\data\NBC_Hood_yellow_co.paa",
			"\dz\characters\headgear\data\NBC_Hood_yellow_co.paa"
		};
	};
	class NBCHoodWhite: NBCHoodBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\NBC_Hood_white_co.paa",
			"\dz\characters\headgear\data\NBC_Hood_white_co.paa",
			"\dz\characters\headgear\data\NBC_Hood_white_co.paa"
		};
	};
	class HockeyHelmet_ColorBase: Clothing
	{
		displayName="$STR_cfgvehicles_hockeyhelmet0";
		descriptionShort="$STR_cfgvehicles_hockeyhelmet1";
		model="\DZ\characters\headgear\Hockey_helmet_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		weight=610;
		itemSize[]={4,3};
		varWetMax=0.249;
		heatIsolation=0.1;
		headSelectionsToHide[]=
		{
			"Clipping_Hockey_hekmet"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\Hockey_helmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\Hockey_helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\Hockey_helmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\Hockey_helmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\Hockey_helmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Hockey_helmet.p3d";
			female="\DZ\characters\headgear\Hockey_helmet.p3d";
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class HockeyHelmet_Black: HockeyHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Hockey_helmet_black_CO.paa",
			"\DZ\characters\headgear\data\Hockey_helmet_black_CO.paa",
			"\DZ\characters\headgear\data\Hockey_helmet_black_CO.paa"
		};
	};
	class HockeyHelmet_Blue: HockeyHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Hockey_helmet_blue_CO.paa",
			"\DZ\characters\headgear\data\Hockey_helmet_blue_CO.paa",
			"\DZ\characters\headgear\data\Hockey_helmet_blue_CO.paa"
		};
	};
	class HockeyHelmet_Red: HockeyHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Hockey_helmet_red_CO.paa",
			"\DZ\characters\headgear\data\Hockey_helmet_red_CO.paa",
			"\DZ\characters\headgear\data\Hockey_helmet_red_CO.paa"
		};
	};
	class HockeyHelmet_White: HockeyHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Hockey_helmet_white_CO.paa",
			"\DZ\characters\headgear\data\Hockey_helmet_white_CO.paa",
			"\DZ\characters\headgear\data\Hockey_helmet_white_CO.paa"
		};
	};
	class SantasHat: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_SantasHat0";
		descriptionShort="$STR_CfgVehicles_SantasHat1";
		model="\DZ\characters\headgear\SantasHat_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		repairableWithKits[]={2};
		repairCosts[]={25};
		weight=450;
		itemSize[]={3,2};
		varWetMax=0.048999999;
		heatIsolation=1;
		visibilityModifier=1;
		headSelectionsToHide[]=
		{
			"Clipping_SantasHat"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\SantasHat_CO.paa",
			"\DZ\characters\headgear\data\SantasHat_CO.paa",
			"\DZ\characters\headgear\data\SantasHat_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\SantasHat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\SantasHat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\SantasHat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\SantasHat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\SantasHat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\SantasHat_m.p3d";
			female="\DZ\characters\headgear\SantasHat_f.p3d";
		};
	};
	class WitchHood_ColorBase: Clothing
	{
		displayName="$STR_WitchHood0";
		descriptionShort="$STR_WitchHood1";
		model="\DZ\characters\headgear\WitchHood_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		repairableWithKits[]={2};
		repairCosts[]={25};
		weight=250;
		itemSize[]={2,2};
		varWetMax=0.048999999;
		heatIsolation=1;
		visibilityModifier=1;
		headSelectionsToHide[]=
		{
			"Clipping_WitchHood"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\WitchHood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\WitchHood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\WitchHood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\WitchHood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\WitchHood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Protection
		{
			dust_particle_breath=0.2;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\WitchHood_m.p3d";
			female="\DZ\characters\headgear\WitchHood_f.p3d";
		};
	};
	class WitchHood_Black: WitchHood_ColorBase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\WitchHood_black_co.paa",
			"\DZ\characters\headgear\data\WitchHood_black_co.paa",
			"\DZ\characters\headgear\data\WitchHood_black_co.paa"
		};
	};
	class WitchHood_Brown: WitchHood_ColorBase
	{
		scope=2;
		color="Brown";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\WitchHood_brown_co.paa",
			"\DZ\characters\headgear\data\WitchHood_brown_co.paa",
			"\DZ\characters\headgear\data\WitchHood_brown_co.paa"
		};
	};
	class WitchHood_Red: WitchHood_ColorBase
	{
		scope=2;
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\WitchHood_red_co.paa",
			"\DZ\characters\headgear\data\WitchHood_red_co.paa",
			"\DZ\characters\headgear\data\WitchHood_red_co.paa"
		};
	};
	class WitchHoodCoif_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_cfgvehicles_ArmoredHood_ColorBase0";
		descriptionShort="$STR_cfgvehicles_ArmoredHood_ColorBase1";
		model="\DZ\characters\headgear\WitchHoodCoif_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		repairableWithKits[]=
		{
			"RepairPliers"
		};
		repairCosts[]={20};
		weight=5250;
		itemSize[]={2,3};
		varWetMax=0.49000001;
		heatIsolation=1;
		visibilityModifier=1;
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		soundImpactType="metal";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"Hood"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=220;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\WitchHood.rvmat",
								"DZ\characters\headgear\data\Chainmail_Coif.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\WitchHood.rvmat",
								"DZ\characters\headgear\data\Chainmail_Coif.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\WitchHood_damage.rvmat",
								"DZ\characters\headgear\data\Chainmail_Coif_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\WitchHood_damage.rvmat",
								"DZ\characters\headgear\data\Chainmail_Coif_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\WitchHood_destruct.rvmat",
								"DZ\characters\headgear\data\Chainmail_Coif_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.69999999;
					};
					class Blood
					{
						damage=0.25;
					};
					class Shock
					{
						damage=1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.55000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.55000001;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.1;
					};
					class Shock
					{
						damage=0.64999998;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\WitchHoodCoif_m.p3d";
			female="\DZ\characters\headgear\WitchHoodCoif_f.p3d";
		};
	};
	class WitchHoodCoif_Black: WitchHoodCoif_ColorBase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Chainmail_Coif_CO.paa",
			"\DZ\characters\headgear\data\Chainmail_Coif_CO.paa",
			"\DZ\characters\headgear\data\Chainmail_Coif_CO.paa",
			"\DZ\characters\headgear\data\WitchHood_black_co.paa"
		};
	};
	class WitchHoodCoif_Brown: WitchHoodCoif_ColorBase
	{
		scope=2;
		color="Brown";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Chainmail_Coif_CO.paa",
			"\DZ\characters\headgear\data\Chainmail_Coif_CO.paa",
			"\DZ\characters\headgear\data\Chainmail_Coif_CO.paa",
			"\DZ\characters\headgear\data\WitchHood_brown_co.paa"
		};
	};
	class WitchHoodCoif_Red: WitchHoodCoif_ColorBase
	{
		scope=2;
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Chainmail_Coif_CO.paa",
			"\DZ\characters\headgear\data\Chainmail_Coif_CO.paa",
			"\DZ\characters\headgear\data\Chainmail_Coif_CO.paa",
			"\DZ\characters\headgear\data\WitchHood_red_co.paa"
		};
	};
	class WitchHat: Clothing
	{
		scope=2;
		displayName="$STR_WitchHat0";
		descriptionShort="$STR_WitchHat1";
		model="\DZ\characters\headgear\WitchHat_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		repairableWithKits[]={3};
		repairCosts[]={25};
		weight=450;
		itemSize[]={3,2};
		varWetMax=0.048999999;
		heatIsolation=1;
		visibilityModifier=1;
		headSelectionsToHide[]=
		{
			"Clipping_WitchHat"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\WitchHat_co.paa",
			"\DZ\characters\headgear\data\WitchHat_co.paa",
			"\DZ\characters\headgear\data\WitchHat_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\WitchHat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\WitchHat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\WitchHat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\WitchHat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\WitchHat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\WitchHat_m.p3d";
			female="\DZ\characters\headgear\WitchHat_f.p3d";
		};
	};
	class Mich2001Helmet: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_Mich2001Helmet0";
		descriptionShort="$STR_CfgVehicles_Mich2001Helmet1";
		model="\DZ\characters\headgear\Mich2001_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		rotationFlags=2;
		weight=1200;
		itemSize[]={4,3};
		noNVStrap=1;
		varWetMax=0.249;
		heatIsolation=0.25;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\mich2001_CO.paa",
			"\DZ\characters\headgear\data\mich2001_CO.paa",
			"\DZ\characters\headgear\data\mich2001_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\mich2001.rvmat",
								"DZ\characters\headgear\data\mich2001_rail.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\mich2001.rvmat",
								"DZ\characters\headgear\data\mich2001_rail.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\mich2001_damage.rvmat",
								"DZ\characters\headgear\data\mich2001_rail_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\mich2001_damage.rvmat",
								"DZ\characters\headgear\data\mich2001_rail_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\mich2001_destruct.rvmat",
								"DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Mich2001.p3d";
			female="\DZ\characters\headgear\Mich2001.p3d";
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class NorseHelm: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_NorseHelm0";
		descriptionShort="$STR_CfgVehicles_NorseHelm1";
		model="\DZ\characters\headgear\norsehelm_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;
		weight=2000;
		itemSize[]={4,4};
		noNVStrap=1;
		noEyewear=1;
		noMask=1;
		varWetMax=0.249;
		heatIsolation=0;
		visibilityModifier=1.2;
		repairableWithKits[]={10};
		repairCosts[]={25};
		headSelectionsToHide[]=
		{
			"Clipping_Maska"
		};
		soundImpactType="metal";
		class ClothingTypes
		{
			male="\DZ\characters\headgear\norsehelm_m.p3d";
			female="\DZ\characters\headgear\norsehelm_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\norsehelm.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\norsehelm.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\norsehelm_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\norsehelm_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\norsehelm_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.64999998;
					};
				};
			};
		};
		class Protection
		{
			dust_particle_eyes=0.40000001;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="GreatHelm_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Chainmail_Coif: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_Chainmail_Coif0";
		descriptionShort="$STR_CfgVehicles_Chainmail_Coif1";
		model="\DZ\characters\headgear\Chainmail_Coif_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;
		weight=5000;
		itemSize[]={2,3};
		varWetMax=0.249;
		heatIsolation=0.64999998;
		visibilityModifier=1.2;
		repairableWithKits[]=
		{
			"RepairPliers"
		};
		repairCosts[]={25};
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		soundImpactType="metal";
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Chainmail_Coif_m.p3d";
			female="\DZ\characters\headgear\Chainmail_Coif_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\Chainmail_Coif.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\Chainmail_Coif.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\Chainmail_Coif_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\Chainmail_Coif_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\Chainmail_Coif_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.69999999;
					};
					class Blood
					{
						damage=0.25;
					};
					class Shock
					{
						damage=1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.55000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.55000001;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.1;
					};
					class Shock
					{
						damage=0.64999998;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="GreatHelm_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class MorozkoHat: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_MorozkoHat0";
		descriptionShort="$STR_CfgVehicles_MorozkoHat1";
		model="\DZ\characters\headgear\MorozkoHat_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		overrideDrawArea=0.028999999;
		rotationFlags=2;
		weight=450;
		itemSize[]={3,2};
		varWetMax=0.048999999;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		headSelectionsToHide[]=
		{
			"Clipping_ushanka"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\MorozkoHat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\MorozkoHat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\MorozkoHat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\MorozkoHat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\MorozkoHat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MorozkoHat_m.p3d";
			female="\DZ\characters\headgear\MorozkoHat_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class WinterCoif_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_WinterCoif0";
		descriptionShort="$STR_CfgVehicles_WinterCoif1";
		model="\DZ\characters\headgear\WinterCoif_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=2;
		weight=300;
		itemSize[]={2,2};
		varWetMax=0.79000002;
		heatIsolation=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		headSelectionsToHide[]=
		{
			"Clipping_ushanka"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\WinterCoif.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\WinterCoif.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\WinterCoif_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\WinterCoif_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\WinterCoif_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Protection
		{
			biological=0.5;
			chemical=0.60000002;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\WinterCoif_m.p3d";
			female="\DZ\characters\headgear\WinterCoif_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class WinterCoif_Black: WinterCoif_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\WinterCoif_Black_co.paa",
			"\DZ\characters\headgear\data\WinterCoif_Black_co.paa",
			"\DZ\characters\headgear\data\WinterCoif_Black_co.paa"
		};
	};
	class WinterCoif_Blue: WinterCoif_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\WinterCoif_Blue_co.paa",
			"\DZ\characters\headgear\data\WinterCoif_Blue_co.paa",
			"\DZ\characters\headgear\data\WinterCoif_Blue_co.paa"
		};
	};
	class WinterCoif_Green: WinterCoif_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\WinterCoif_Green_co.paa",
			"\DZ\characters\headgear\data\WinterCoif_Green_co.paa",
			"\DZ\characters\headgear\data\WinterCoif_Green_co.paa"
		};
	};
	class WinterCoif_Skull: WinterCoif_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\WinterCoif_Skull_co.paa",
			"\DZ\characters\headgear\data\WinterCoif_Skull_co.paa",
			"\DZ\characters\headgear\data\WinterCoif_Skull_co.paa"
		};
	};
	class OKZKCap_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_OKZKCap0";
		descriptionShort="$STR_CfgVehicles_OKZKCap1";
		model="\DZ\characters\headgear\OKZKCap_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=2;
		weight=450;
		itemSize[]={2,2};
		varWetMax=0.79000002;
		heatIsolation=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		headSelectionsToHide[]=
		{
			"Clipping_Maska"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\OKZKCap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\OKZKCap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\OKZKCap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\OKZKCap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\OKZKCap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\OKZKCap_m.p3d";
			female="\DZ\characters\headgear\OKZKCap_f.p3d";
		};
		class Protection
		{
			biological=0.5;
			chemical=0.25;
			dust_particle_breath=0.44999999;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class OKZKCap_Beige: OKZKCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\OKZKCap_Beige_co.paa",
			"\DZ\characters\headgear\data\OKZKCap_Beige_co.paa",
			"\DZ\characters\headgear\data\OKZKCap_Beige_co.paa"
		};
	};
	class OKZKCap_Green: OKZKCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\OKZKCap_Green_co.paa",
			"\DZ\characters\headgear\data\OKZKCap_Green_co.paa",
			"\DZ\characters\headgear\data\OKZKCap_Green_co.paa"
		};
	};
	class PetushokHat_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_PetushokHat0";
		descriptionShort="$STR_CfgVehicles_PetushokHat1";
		model="\DZ\characters\headgear\PetushokHat_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=2;
		weight=90;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.89999998;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		headSelectionsToHide[]=
		{
			"Clipping_BeanieHat"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=40;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\PetushokHat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\PetushokHat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\PetushokHat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\PetushokHat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\PetushokHat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\PetushokHat_m.p3d";
			female="\DZ\characters\headgear\PetushokHat_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PetushokHat_Black: PetushokHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\PetushokHat_Black_co.paa",
			"\DZ\characters\headgear\data\PetushokHat_Black_co.paa",
			"\DZ\characters\headgear\data\PetushokHat_Black_co.paa"
		};
	};
	class PetushokHat_Yellow: PetushokHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\PetushokHat_Yellow_co.paa",
			"\DZ\characters\headgear\data\PetushokHat_Yellow_co.paa",
			"\DZ\characters\headgear\data\PetushokHat_Yellow_co.paa"
		};
	};
	class PetushokHat_Green: PetushokHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\PetushokHat_Green_co.paa",
			"\DZ\characters\headgear\data\PetushokHat_Green_co.paa",
			"\DZ\characters\headgear\data\PetushokHat_Green_co.paa"
		};
	};
	class ChristmasHeadband_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_ChristmasHeadband0";
		descriptionShort="$STR_CfgVehicles_ChristmasHeadband1";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.60000002;
		rotationFlags=2;
		weight=300;
		itemSize[]={2,2};
		varWetMax=0.49000001;
		heatIsolation=0.2;
		repairableWithKits[]={};
		repairCosts[]={};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class ChristmasHeadband_Antlers: ChristmasHeadband_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\ChristmasHeadband_Antlers_g.p3d";
		color="_Lights_Antlers";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ChristmasHeadband_Antlers_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Antlers_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Antlers_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Antlers.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Antlers.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Antlers_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Antlers_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Antlers_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ChristmasHeadband_Antlers_m.p3d";
			female="\DZ\characters\headgear\ChristmasHeadband_Antlers_f.p3d";
		};
	};
	class ChristmasHeadband_Gingerbread: ChristmasHeadband_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\ChristmasHeadband_Gingerbread_g.p3d";
		color="_Lights_Gingerbread";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Gingerbread.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Gingerbread.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ChristmasHeadband_Gingerbread_m.p3d";
			female="\DZ\characters\headgear\ChristmasHeadband_Gingerbread_f.p3d";
		};
	};
	class ChristmasHeadband_Trees: ChristmasHeadband_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\ChristmasHeadband_Trees_g.p3d";
		color="_Lights_Trees";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ChristmasHeadband_Trees_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Trees_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Trees_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Trees.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Trees.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Trees_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Trees_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Trees_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ChristmasHeadband_Trees_m.p3d";
			female="\DZ\characters\headgear\ChristmasHeadband_Trees_f.p3d";
		};
	};
	class ChristmasHeadband_Lights_Antlers: ChristmasHeadband_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\ChristmasHeadband_Antlers_Lights_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"glass_b",
			"glass_g",
			"glass_r"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ChristmasHeadband_Antlers_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Antlers_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Antlers_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Antlers_Lights_e_CO.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Antlers_Lights_e_CO.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Antlers_Lights_e_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Antlers_Lights.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Antlers_Lights.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Antlers_Lights_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Antlers_Lights_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Antlers_Lights_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ChristmasHeadband_Antlers_Lights_m.p3d";
			female="\DZ\characters\headgear\ChristmasHeadband_Antlers_Lights_f.p3d";
		};
	};
	class ChristmasHeadband_Lights_Gingerbread: ChristmasHeadband_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\ChristmasHeadband_Gingerbread_Lights_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"glass_b",
			"glass_g",
			"glass_r"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_Lights_e_CO.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_Lights_e_CO.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_Lights_e_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_Lights.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_Lights.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_Lights_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_Lights_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Gingerbread_Lights_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ChristmasHeadband_Gingerbread_Lights_m.p3d";
			female="\DZ\characters\headgear\ChristmasHeadband_Gingerbread_Lights_f.p3d";
		};
	};
	class ChristmasHeadband_Lights_Trees: ChristmasHeadband_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\ChristmasHeadband_Trees_Lights_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"glass_b",
			"glass_g",
			"glass_r"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ChristmasHeadband_Trees_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Trees_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Trees_co.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Trees_Lights_e_CO.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Trees_Lights_e_CO.paa",
			"\DZ\characters\headgear\data\ChristmasHeadband_Trees_Lights_e_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Trees_Lights.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Trees_Lights.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Trees_Lights_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Trees_Lights_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\ChristmasHeadband_Trees_Lights_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ChristmasHeadband_Trees_Lights_m.p3d";
			female="\DZ\characters\headgear\ChristmasHeadband_Trees_Lights_f.p3d";
		};
	};
	class Headdress_Colorbase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_Headdress0";
		descriptionShort="$STR_CfgVehicles_Headdress1";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.30000001;
		rotationFlags=16;
		weight=2000;
		itemSize[]={4,3};
		varWetMax=0.249;
		heatIsolation=0.69999999;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"Wolfhead_base",
			"Fur_cards",
			"Fur_cards_reversed"
		};
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Headdress_Wolf: Headdress_Colorbase
	{
		scope=2;
		model="\DZ\characters\headgear\wolfheaddress_g.p3d";
		hiddenSelectionsMaterials[]=
		{
			"\DZ\characters\headgear\data\wolfheaddress.rvmat",
			"\DZ\characters\headgear\data\wolfheaddress_fur_alpha.rvmat",
			"\DZ\characters\headgear\data\wolfheaddress_fur_alpha_reversed.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\wolfheaddress_CO.paa",
			"\DZ\characters\headgear\data\wolfheaddress_fur_CA.paa",
			"\DZ\characters\headgear\data\wolfheaddress_fur_CA.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\wolfheaddress.rvmat",
								"DZ\characters\headgear\data\wolfheaddress_fur_alpha.rvmat",
								"DZ\characters\headgear\data\wolfheaddress_fur_alpha_reversed.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\wolfheaddress.rvmat",
								"DZ\characters\headgear\data\wolfheaddress_fur_alpha.rvmat",
								"DZ\characters\headgear\data\\wolfheaddress_fur_alpha_reversed.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\wolfheaddress_damage.rvmat",
								"DZ\characters\headgear\data\wolfheaddress_fur_alpha_damage.rvmat",
								"DZ\characters\headgear\data\wolfheaddress_fur_alpha_reversed_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\wolfheaddress_damage.rvmat",
								"DZ\characters\headgear\data\wolfheaddress_fur_alpha_damage.rvmat",
								"DZ\characters\headgear\data\wolfheaddress_fur_alpha_reversed_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\wolfheaddress_destruct.rvmat",
								"DZ\characters\headgear\data\wolfheaddress_fur_alpha_destruct.rvmat",
								"DZ\characters\headgear\data\wolfheaddress_fur_alpha_reversed_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\wolfheaddress_m.p3d";
			female="\DZ\characters\headgear\wolfheaddress_f.p3d";
		};
	};
	class Headdress_Bear: Headdress_Colorbase
	{
		scope=2;
		model="\DZ\characters\headgear\bearheaddress_g.p3d";
		rotationFlags=2;
		weight=3000;
		itemSize[]={4,4};
		heatIsolation=1;
		hiddenSelectionsMaterials[]=
		{
			"\DZ\characters\headgear\data\Bearheaddress.rvmat",
			"\DZ\characters\headgear\data\Bearheaddress_Fur.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Bearheaddress_CO.paa",
			"\DZ\characters\headgear\data\Bearheaddress_Fur_CA.paa",
			"\DZ\characters\headgear\data\Bearheaddress_Fur_CA.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\Bearheaddress.rvmat",
								"DZ\characters\headgear\data\Bearheaddress_Fur.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\Bearheaddress.rvmat",
								"DZ\characters\headgear\data\Bearheaddress_Fur.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\bearheaddress_damage.rvmat",
								"DZ\characters\headgear\data\bearheaddress_fur_alpha_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\bearheaddress_damage.rvmat",
								"DZ\characters\headgear\data\bearheaddress_fur_alpha_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\bearheaddress_destruct.rvmat",
								"DZ\characters\headgear\data\bearheaddress_fur_alpha_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.64999998;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\bearheaddress_m.p3d";
			female="\DZ\characters\headgear\bearheaddress_f.p3d";
		};
	};
	class Headdress_Fox: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_Headdress0";
		descriptionShort="$STR_CfgVehicles_Headdress1";
		model="\DZ\characters\headgear\foxheaddress_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		overrideDrawArea=0.028999999;
		rotationFlags=2;
		weight=400;
		itemSize[]={2,2};
		varWetMax=0.49000001;
		heatIsolation=1;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\foxheaddress_CO.paa",
			"\DZ\characters\headgear\data\foxheaddress_CO.paa",
			"\DZ\characters\headgear\data\foxheaddress_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\foxheaddress.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\foxheaddress.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\foxheaddress_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\foxheaddress_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\foxheaddress_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\foxheaddress_m.p3d";
			female="\DZ\characters\headgear\foxheaddress_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SnowstormUshanka_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_SnowstormUshanka0";
		descriptionShort="$STR_CfgVehicles_SnowstormUshanka1";
		model="\DZ\characters\headgear\SnowstormUshanka_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=2;
		weight=350;
		itemSize[]={2,3};
		varWetMax=1;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_ushanka"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\SnowstormUshanka.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\SnowstormUshanka.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\SnowstormUshanka_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\SnowstormUshanka_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\SnowstormUshanka_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Protection
		{
			dust_particle_breath=0.69999999;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\SnowstormUshanka_m.p3d";
			female="\DZ\characters\headgear\SnowstormUshanka_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SnowstormUshanka_Brown: SnowstormUshanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\SnowstormUshanka_brown_CO.paa",
			"\DZ\characters\headgear\data\SnowstormUshanka_brown_CO.paa",
			"\DZ\characters\headgear\data\SnowstormUshanka_brown_CO.paa"
		};
	};
	class SnowstormUshanka_Navy: SnowstormUshanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\SnowstormUshanka_navy_CO.paa",
			"\DZ\characters\headgear\data\SnowstormUshanka_navy_CO.paa",
			"\DZ\characters\headgear\data\SnowstormUshanka_navy_CO.paa"
		};
	};
	class SnowstormUshanka_Olive: SnowstormUshanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\SnowstormUshanka_olive_CO.paa",
			"\DZ\characters\headgear\data\SnowstormUshanka_olive_CO.paa",
			"\DZ\characters\headgear\data\SnowstormUshanka_olive_CO.paa"
		};
	};
	class SnowstormUshanka_White: SnowstormUshanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\SnowstormUshanka_white_CO.paa",
			"\DZ\characters\headgear\data\SnowstormUshanka_white_CO.paa",
			"\DZ\characters\headgear\data\SnowstormUshanka_white_CO.paa"
		};
	};
	class BudenovkaHat_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_Budenovka_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Budenovka_ColorBase1";
		model="\DZ\characters\headgear\Budenovka_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=2;
		weight=450;
		itemSize[]={3,2};
		varWetMax=1;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_Maska"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=110;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\Budenovka.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\Budenovka.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\Budenovka_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\Budenovka_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\Budenovka_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Budenovka_m.p3d";
			female="\DZ\characters\headgear\Budenovka_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BudenovkaHat_Gray: BudenovkaHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Budenovka_co.paa",
			"\DZ\characters\headgear\data\Budenovka_co.paa",
			"\DZ\characters\headgear\data\Budenovka_co.paa"
		};
	};
	class SherpaHat_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_SherpaHat_ColorBase0";
		descriptionShort="$STR_CfgVehicles_SherpaHat_ColorBase1";
		model="\DZ\characters\headgear\SherpaHat_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=2;
		weight=350;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		headSelectionsToHide[]=
		{
			"Clipping_Maska"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"Braids"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\SherpaHat.rvmat",
								"DZ\characters\headgear\data\SherpaHat_Braids.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\SherpaHat.rvmat",
								"DZ\characters\headgear\data\SherpaHat_Braids.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\SherpaHat_damage.rvmat",
								"DZ\characters\headgear\data\SherpaHat_Braids_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\SherpaHat_damage.rvmat",
								"DZ\characters\headgear\data\SherpaHat_Braids_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\SherpaHat_destruct.rvmat",
								"DZ\characters\headgear\data\SherpaHat_Braids_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\SherpaHat_m.p3d";
			female="\DZ\characters\headgear\SherpaHat_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SherpaHat_Red: SherpaHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\SherpaHat_red_CO.paa",
			"\DZ\characters\headgear\data\SherpaHat_red_CO.paa",
			"\DZ\characters\headgear\data\SherpaHat_red_CO.paa",
			"\DZ\characters\headgear\data\SherpaHat_red_CO.paa"
		};
	};
	class SherpaHat_Black: SherpaHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\SherpaHat_black_CO.paa",
			"\DZ\characters\headgear\data\SherpaHat_black_CO.paa",
			"\DZ\characters\headgear\data\SherpaHat_black_CO.paa",
			"\DZ\characters\headgear\data\SherpaHat_black_CO.paa"
		};
	};
	class SherpaHat_Blue: SherpaHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\SherpaHat_blue_CO.paa",
			"\DZ\characters\headgear\data\SherpaHat_blue_CO.paa",
			"\DZ\characters\headgear\data\SherpaHat_blue_CO.paa",
			"\DZ\characters\headgear\data\SherpaHat_blue_CO.paa"
		};
	};
	class LeafCrown_Colorbase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_LeafCrown_ColorBase0";
		descriptionShort="$STR_CfgVehicles_LeafCrown_ColorBase1";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		visibilityModifier=0.89999998;
		rotationFlags=2;
		weight=100;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0.1;
		headSelectionsToHide[]={};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class LeafCrown_Spring: LeafCrown_Colorbase
	{
		scope=2;
		model="\DZ\characters\headgear\LeafCrown_Spring_g.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Spring.rvmat",
								"DZ\characters\headgear\data\LeafCrown_Spring2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Spring.rvmat",
								"DZ\characters\headgear\data\LeafCrown_Spring2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Spring_damage.rvmat",
								"DZ\characters\headgear\data\LeafCrown_Spring2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Spring_damage.rvmat",
								"DZ\characters\headgear\data\LeafCrown_Spring2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Spring_destruct.rvmat",
								"DZ\characters\headgear\data\LeafCrown_Spring2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\LeafCrown_Spring.p3d";
			female="\DZ\characters\headgear\LeafCrown_Spring.p3d";
		};
	};
	class LeafCrown_Summer: LeafCrown_Colorbase
	{
		scope=2;
		model="\DZ\characters\headgear\LeafCrown_Summer_g.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Summer.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Summer.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Summer_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Summer_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Summer_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\LeafCrown_Summer.p3d";
			female="\DZ\characters\headgear\LeafCrown_Summer.p3d";
		};
	};
	class LeafCrown_Autumn: LeafCrown_Colorbase
	{
		scope=2;
		model="\DZ\characters\headgear\LeafCrown_Autumn_g.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Autumn.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Autumn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Autumn_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Autumn_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Autumn_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\LeafCrown_Autumn.p3d";
			female="\DZ\characters\headgear\LeafCrown_Autumn.p3d";
		};
	};
	class LeafCrown_Winter: LeafCrown_Colorbase
	{
		scope=2;
		model="\DZ\characters\headgear\LeafCrown_Winter_g.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Winter.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Winter.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Winter_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Winter_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\LeafCrown_Winter_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\LeafCrown_Winter.p3d";
			female="\DZ\characters\headgear\LeafCrown_Winter.p3d";
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMxHelmet_visor: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"DBHelmetVisor"
		};
		model="\dz\characters\headgear\MxHelmet_visor.p3d";
	};
	class ProxyMxHelmet_mouthguard: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"DBHelmetMouth"
		};
		model="\dz\characters\headgear\MxHelmet_mouthguard.p3d";
	};
	class Proxyhelmet_flashlight: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"helmetFlashlight"
		};
		model="\dz\characters\headgear\proxies\helmet_flashlight.p3d";
	};
};
