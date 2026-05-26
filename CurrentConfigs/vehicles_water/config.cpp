class CfgPatches
{
	class DZ_Vehicles_Water
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
class CfgVehicles
{
	class Boat;
	class BoatScript: Boat
	{
		debug_ItemCategory=8;
		storageCategory=4;
		class Crew
		{
			class Driver
			{
				actionSel="seat_driver";
				proxyPos="crewDriver";
				getInPos="pos_driver";
				getInDir="pos_driver_dir";
				isDriver=1;
			};
		};
		class Buoyancy
		{
			linearDampeningCoefficient=0;
			angularDampeningCoefficient=0;
			linearDragCoefficient=0.2;
			quadraticDragCoefficient=0.2;
			falloffPower=0.80000001;
			sinkRate=0.050000001;
		};
	};
	class Boat_01_ColorBase: BoatScript
	{
		scope=1;
		displayName="$STR_cfgvehicle_Boat010";
		descriptionShort="$STR_cfgvehicle_Boat011";
		model="\DZ\vehicles\water\Boat_01\Boat_01.p3d";
		fuelCapacity=25;
		fuelConsumption=5.5;
		animPhysDetachSpeed=5;
		attachments[]=
		{
			"SparkPlug"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"damage_unhide"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\vehicles\water\Boat_01\data\boat_01_orange_co.paa",
			"DZ\vehicles\water\Boat_01\data\boat_01_orange_co.paa"
		};
		class AnimationSources
		{
			class FoldingEngine
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class ShowDamage
			{
				source="user";
				animPeriod=9.9999997e-05;
				initPhase=0;
			};
			class HideDamage
			{
				source="user";
				animPeriod=9.9999997e-05;
				initPhase=1;
			};
			class HideAntiwater
			{
				source="user";
				animPeriod=9.9999997e-05;
				initPhase=0;
			};
		};
		class Crew: Crew
		{
			class Driver: Driver
			{
			};
			class Cargo1
			{
				actionSel="seat_cargo1";
				proxyPos="crewCargo1";
				getInPos="pos_cargo1";
				getInDir="pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel="seat_cargo2";
				proxyPos="crewCargo2";
				getInPos="pos_cargo2";
				getInDir="pos_cargo2_dir";
			};
			class Cargo3
			{
				actionSel="seat_Cargo3";
				proxyPos="crewCargo3";
				getInPos="pos_cargo3";
				getInDir="pos_cargo3_dir";
			};
		};
		class SimulationModule
		{
			class Engine
			{
				torqueCurve[]={500,50,1000,90,1500,130,2500,220,3500,310,4800,220,6500,50,7000,0};
				inertia=1.1;
				frictionTorque=200;
				rollingFriction=1.5;
				viscousFriction=0.80000001;
				rpmIdle=700;
				rpmMin=750;
				rpmClutch=1250;
				rpmRedline=6500;
			};
			class Clutch
			{
				maxTorqueTransfer=500;
				uncoupleTime=0.69999999;
				coupleTime=0.69999999;
			};
			class Gearbox
			{
				reverse=1.2;
				ratios[]={0.88};
			};
			class Throttle
			{
				defaultThrust=0.75;
				turboIncrease=2.4000001;
				regularIncrease=1.35;
				slowIncrease=1.12;
				turboDecrease=1.5;
				regularDecrease=1.5;
				slowDecrease=1;
				autoDecrease=1;
			};
			class Steering
			{
				maxSteeringAngle=21;
				increaseSpeed[]={0,12,30,8,50,4};
				decreaseSpeed[]={0,24,30,16,50,8};
				centeringSpeed[]={0,12,30,8,50,4};
			};
			class Propeller
			{
				position[]={0,-0.11,-2.0999999};
				radius=0.1245;
				outerRadius=0.134;
				innerRadius=0.094999999;
				efficiency=0.87;
				cavitationThreshold=0.5;
				pitch=40;
				width=0.1;
				numberOfBlades=3;
				mass=0.52999997;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
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
			class DamageZones
			{
				class Chassis
				{
					displayName="$STR_CfgVehicleDmg_Chassis0";
					fatalInjuryCoef=0;
					componentNames[]=
					{
						"dmgZone_chassis"
					};
					class Health
					{
						hitpoints=600;
						transferToGlobalCoef=1;
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Engine
				{
					displayName="$STR_CfgVehicleDmg_Engine0";
					fatalInjuryCoef=0.001;
					memoryPoints[]=
					{
						"dmgZone_engine",
						"dmgZone_propeller"
					};
					componentNames[]=
					{
						"dmgZone_engine",
						"dmgZone_propeller"
					};
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_destruct.rvmat"
								}
							}
						};
					};
					inventorySlots[]=
					{
						"Sparkplug"
					};
					inventorySlotsCoefs[]={0.5};
				};
				class LeftFloat
				{
					displayName="$STR_cfgvehicleDmg_Floater0";
					fatalInjuryCoef=0;
					memoryPoints[]=
					{
						"dmgZone_leftFloat"
					};
					componentNames[]=
					{
						"dmgZone_leftFloat"
					};
					class Health
					{
						hitpoints=200;
						transferToGlobalCoef=1.05;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_destruct.rvmat"
								}
							}
						};
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class RightFloat
				{
					displayName="$STR_cfgvehicleDmg_Floater1";
					fatalInjuryCoef=0;
					memoryPoints[]=
					{
						"dmgZone_rightFloat"
					};
					componentNames[]=
					{
						"dmgZone_rightFloat"
					};
					class Health
					{
						hitpoints=200;
						transferToGlobalCoef=1.05;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_destruct.rvmat"
								}
							}
						};
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class FrontFloat
				{
					displayName="$STR_cfgvehicleDmg_Floater2";
					fatalInjuryCoef=0;
					memoryPoints[]=
					{
						"dmgZone_frontFloat"
					};
					componentNames[]=
					{
						"dmgZone_frontFloat"
					};
					class Health
					{
						hitpoints=200;
						transferToGlobalCoef=1.05;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\water\Boat_01\data\Boat_01_destruct.rvmat"
								}
							}
						};
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="$STR_attachment_Engine0";
				description="";
				icon="set:dayz_inventory image:cat_vehicle_engine";
				attachmentSlots[]=
				{
					"SparkPlug"
				};
			};
		};
	};
	class Boat_01_Orange: Boat_01_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\vehicles\water\Boat_01\data\boat_01_orange_co.paa",
			"DZ\vehicles\water\Boat_01\data\boat_01_orange_co.paa"
		};
	};
	class Boat_01_Blue: Boat_01_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\vehicles\water\Boat_01\data\boat_01_blue_co.paa",
			"DZ\vehicles\water\Boat_01\data\boat_01_blue_co.paa"
		};
	};
	class Boat_01_Black: Boat_01_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\vehicles\water\Boat_01\data\boat_01_co.paa",
			"DZ\vehicles\water\Boat_01\data\boat_01_co.paa"
		};
	};
	class Boat_01_Camo: Boat_01_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\vehicles\water\Boat_01\data\Boat_01_OMK_CO.paa",
			"DZ\vehicles\water\Boat_01\data\Boat_01_OMK_CO.paa"
		};
	};
};
