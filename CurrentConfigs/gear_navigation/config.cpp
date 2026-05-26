class CfgPatches
{
	class DZ_Gear_Navigation
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgLocationTypes
{
	class Name
	{
		name="keypoint";
		drawStyle="name";
		texture="#(argb,1,1,1)color(1,1,1,1)";
		color[]={0,0,0,1};
		size=0;
		font="gui/fonts/MetronBook-Bold28";
		textSize=0.029999999;
		shadow=0;
		importance=1;
	};
	class NameIcon
	{
		name="keypoint";
		drawStyle="icon";
		texture="#(argb,1,1,1)color(1,1,1,1)";
		color[]={0,0,0,1};
		size=0;
		font="gui/fonts/MetronBook-Bold28";
		textSize=0.029999999;
		shadow=0;
		importance=1;
	};
	class Capital: Name
	{
		textSize=0.059999999;
		importance=7;
	};
	class City: Name
	{
		textSize=0.050000001;
		importance=6;
	};
	class Village: Name
	{
		textSize=0.039999999;
		importance=5;
	};
	class Local: Name
	{
		color[]={0.44,0.38,0.30000001,1};
		textSize=0.029999999;
		importance=2;
	};
	class Marine: Name
	{
		color[]={0.050000001,0.40000001,0.80000001,0.80000001};
		textSize=0.029999999;
		importance=2;
	};
	class Ruin: NameIcon
	{
		texture="\DZ\gear\navigation\data\map_ruin_ca.paa";
		textSize=0.029999999;
		importance=2;
		size=7;
	};
	class Camp: NameIcon
	{
		color[]={0.44,0.38,0.30000001,1};
		texture="\DZ\gear\navigation\data\map_camp_ca.paa";
		textSize=0.039999999;
		size=9;
	};
	class Hill: NameIcon
	{
		color[]={0,0,0,1};
		texture="\DZ\gear\navigation\data\map_hill_ca.paa";
		size=9;
	};
	class ViewPoint: NameIcon
	{
		color[]={0.77999997,0,0.050000001,1};
		texture="\DZ\gear\navigation\data\map_viewpoint_ca.paa";
		size=9;
	};
	class RockArea: NameIcon
	{
		color[]={0,0,0,1};
		texture="\DZ\gear\navigation\data\map_rock_ca.paa";
		size=9;
	};
	class RailroadStation: NameIcon
	{
		color[]={0,0,0,1};
		texture="\DZ\gear\navigation\data\map_station_ca.paa";
		size=9;
	};
	class IndustrialSite: NameIcon
	{
		color[]={0,0,0,1};
		texture="\DZ\gear\navigation\data\map_factory_ca.paa";
		size=9;
	};
	class LocalOffice: NameIcon
	{
		color[]={0.22,0.20999999,0.50999999,1};
		texture="\DZ\gear\navigation\data\map_govoffice_ca.paa";
		size=10;
	};
	class BorderCrossing: NameIcon
	{
		color[]={0.77999997,0,0.050000001,1};
		texture="\DZ\gear\navigation\data\map_border_cross_ca.paa";
		size=9;
	};
	class VegetationBroadleaf: NameIcon
	{
		color[]={0.25,0.40000001,0.2,1};
		texture="\DZ\gear\navigation\data\map_broadleaf_ca.paa";
		size=9;
	};
	class VegetationFir: NameIcon
	{
		color[]={0.25,0.40000001,0.2,1};
		texture="\DZ\gear\navigation\data\map_fir_ca.paa";
		size=9;
	};
	class VegetationPalm: NameIcon
	{
		color[]={0.25,0.40000001,0.2,1};
		texture="\DZ\gear\navigation\data\map_palm_ca.paa";
		size=9;
	};
	class VegetationVineyard: NameIcon
	{
		color[]={0.25,0.40000001,0.2,1};
		texture="\DZ\gear\navigation\data\map_vineyard_ca.paa";
		size=9;
	};
};
class MapDefaults;
class CfgVehicles
{
	class Inventory_Base;
	class ItemMap: Inventory_Base
	{
	};
	class ItemCompass: Inventory_Base
	{
	};
	class ItemGPS: Inventory_Base
	{
	};
	class ChernarusMap: ItemMap
	{
		scope=2;
		displayName="$STR_CfgVehicles_ChernarusMap0";
		descriptionShort="$STR_CfgVehicles_ChernarusMap1";
		model="\dz\gear\navigation\Map_chernarus_animated.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=40;
		selectionPaper="paper";
		simulation="ItemMap";
		hiddenSelections[]=
		{
			"texture_map_closed",
			"texture_map_opened",
			"texture_legend"
		};
		absorbency=1;
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
								"DZ\gear\navigation\data\Map_chernarus.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\navigation\data\Map_chernarus.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\navigation\data\Map_chernarus_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MapProperties: MapDefaults
		{
			scaleMin=0.079999998;
			scaleMax=0.347;
		};
		class AnimationSources
		{
			class map_closed
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class map_opened
			{
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
		};
	};
	class ChernarusMap_Open: ChernarusMap
	{
	};
	class ChernarusMap_Open_Test: ChernarusMap
	{
		descriptionShort="a map for the video team";
		class AnimationSources
		{
			class map_closed
			{
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
			class map_opened
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
		};
	};
	class Compass: ItemCompass
	{
		scope=2;
		displayName="$STR_CfgVehicles_Compass0";
		descriptionShort="$STR_CfgVehicles_Compass1";
		model="\dz\gear\navigation\compass.p3d";
		animClass="Compass";
		itemSize[]={1,2};
		weight=190;
		simulation="ItemCompass";
		inventorySlot[]=
		{
			"WalkieTalkie",
			"Chemlight"
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
								"DZ\gear\navigation\data\compass.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\navigation\data\compass.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\navigation\data\compass_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\navigation\data\compass_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\navigation\data\compass_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class cover
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
		};
		soundImpactType="glass";
		class AnimEvents
		{
			class SoundWeapon
			{
				class compass_open
				{
					soundSet="compass_open_SoundSet";
					id=204;
				};
				class compass_close
				{
					soundSet="compass_close_SoundSet";
					id=205;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class Chemlight
			{
				position[]={0.050000001,0.059999999,0.050000001};
				orientation[]={0,0,-97};
			};
			class WalkieTalkie
			{
				position[]={-0.050000001,0.055,0.064999998};
				orientation[]={-90,0,-90};
			};
		};
	};
	class OrienteeringCompass: ItemCompass
	{
		scope=2;
		displayName="$STR_CfgVehicles_OrienteeringCompass0";
		descriptionShort="$STR_CfgVehicles_OrienteeringCompass1";
		model="\dz\gear\navigation\compass_modern.p3d";
		animClass="Compass";
		itemSize[]={1,2};
		weight=130;
		simulation="ItemCompass";
		inventorySlot[]=
		{
			"WalkieTalkie",
			"Chemlight"
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
								"DZ\gear\navigation\data\compass_modern.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\navigation\data\compass_modern.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\navigation\data\compass_modern_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\navigation\data\compass_modern_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\navigation\data\compass_modern_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class wheel
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
		};
		soundImpactType="plastic";
		class InventorySlotsOffsets
		{
			class Chemlight
			{
				position[]={0.039999999,0.079999998,0.075000003};
				orientation[]={-10,0,-100};
			};
			class WalkieTalkie
			{
				position[]={-0.064999998,0.079999998,0.064999998};
				orientation[]={-90,0,-90};
			};
		};
	};
	class GPSReceiver: ItemGPS
	{
		scope=2;
		displayName="$STR_GPSReceiver0";
		descriptionShort="$STR_GPSReceiver1";
		model="\dz\gear\navigation\GPSReceiver.p3d";
		itemSize[]={1,2};
		weight=350;
		rotationFlags=1;
		simulation="ItemGPS";
		inventorySlot[]=
		{
			"WalkieTalkie",
			"Chemlight"
		};
		attachments[]=
		{
			"BatteryD"
		};
		repairableWithKits[]={7};
		repairCosts[]={50};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=3;
		};
		hiddenSelections[]=
		{
			"grid_1_0",
			"grid_1_1",
			"grid_1_2",
			"grid_2_0",
			"grid_2_1",
			"grid_2_2",
			"alt_0",
			"alt_1",
			"alt_2",
			"alt_3"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa"
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
								"DZ\gear\navigation\data\GPSReceiver.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\navigation\data\GPSReceiver.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\navigation\data\GPSReceiver_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\navigation\data\GPSReceiver_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\navigation\data\GPSReceiver_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class InventorySlotsOffsets
		{
			class Chemlight
			{
				position[]={0,0,0};
				orientation[]={90,10,0};
			};
		};
		class AnimationSources
		{
			class DisplayState
			{
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
		};
		soundImpactType="plastic";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyGPSReceiver: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"WalkieTalkie"
		};
		model="\dz\gear\navigation\GPSReceiver.p3d";
	};
};
