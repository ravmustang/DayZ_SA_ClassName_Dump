class CfgPatches
{
	class DZ_Worlds_Chernarusplus_World
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Surfaces"
		};
	};
};
class CfgWorlds
{
	class DefaultWorld;
	class CAWorld: DefaultWorld
	{
		class Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
				class Weather7;
				class Weather8;
			};
		};
	};
	class ChernarusPlus: CAWorld
	{
		access=3;
		cutscenes[]=
		{
			"ChernarusPlusIntro"
		};
		description="Chernarus";
		worldName="DZ\worlds\chernarusplus\world\ChernarusPlus.wrp";
		ceFiles="DZ\worlds\chernarusplus\ce";
		class Navmesh
		{
			navmeshName="\dz\Worlds\chernarusplus\navmesh\navmesh.nm";
			filterIsolatedIslandsOnLoad=1;
			visualiseOffset=0;
			class GenParams
			{
				tileWidth=50;
				cellSize1=0.25;
				cellSize2=0.1;
				cellSize3=0.1;
				filterIsolatedIslands=1;
				seedPosition[]={7500,0,7500};
				class Agent
				{
					diameter=0.60000002;
					standHeight=1.5;
					crouchHeight=1;
					proneHeight=0.5;
					maxStepHeight=0.44999999;
					maxSlope=60;
				};
				class Links
				{
					class ZedJump387_050
					{
						jumpLength=1.5;
						jumpHeight=0.5;
						minCenterHeight=0.30000001;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump0";
						flags[]=
						{
							"jumpOver"
						};
						color=1727987712;
					};
					class ZedJump388_050
					{
						jumpLength=1.5;
						jumpHeight=0.5;
						minCenterHeight=-0.5;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump0";
						flags[]=
						{
							"jumpOver"
						};
						color=1725781248;
					};
					class ZedJump387_110
					{
						jumpLength=3.9000001;
						jumpHeight=1.1;
						minCenterHeight=0.5;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump0";
						flags[]=
						{
							"jumpOver"
						};
						color=1711308800;
					};
					class ZedJump420_160
					{
						jumpLength=4;
						jumpHeight=1.6;
						minCenterHeight=1.1;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump0";
						flags[]=
						{
							"jumpOver"
						};
						color=1711276287;
					};
					class ZedJump265_210
					{
						jumpLength=2.45;
						jumpHeight=2.5;
						minCenterHeight=1.8;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump0";
						flags[]=
						{
							"climb"
						};
						color=1720975571;
					};
					class Fence50_110deer
					{
						typeId=100;
						jumpLength=8;
						jumpHeight=1.1;
						minCenterHeight=0.5;
						jumpDropdownMin=1;
						jumpDropdownMax=-1;
						areaType="jump2";
						flags[]=
						{
							"jumpOver"
						};
						color=1722460927;
					};
					class Fence110_160deer
					{
						typeId=101;
						jumpLength=8;
						jumpHeight=1.6;
						minCenterHeight=1.1;
						jumpDropdownMin=1;
						jumpDropdownMax=-1;
						areaType="jump3";
						flags[]=
						{
							"jumpOver"
						};
						color=1713700856;
					};
					class Fence50_110hen
					{
						typeId=110;
						jumpLength=4;
						jumpHeight=1.1;
						minCenterHeight=0.5;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump4";
						flags[]=
						{
							"jumpOver"
						};
						color=-22016;
					};
					class Fence110_160hen
					{
						typeId=111;
						jumpLength=4;
						jumpHeight=1.6;
						minCenterHeight=1.1;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump4";
						flags[]=
						{
							"jumpOver"
						};
						color=-22016;
					};
				};
			};
		};
		longitude=30;
		latitude=-56;
		mapDisplayNameKey="#STR_CfgVehicles_ChernarusMap0";
		mapDescriptionKey="#STR_CfgVehicles_ChernarusMap1";
		mapTextureClosed="dz\gear\navigation\data\map_chernarus_co.paa";
		mapTextureOpened="dz\structures\signs\tourist\data\karta_co.paa";
		mapTextureLegend="dz\structures\signs\tourist\data\karta_side_co.paa";
		userMapPath="dz\gear\navigation\data\usermap";
		class OutsideTerrain
		{
			satellite="DZ\worlds\chernarusplus\data\outside_sat_co.paa";
			enableTerrainSynth=1;
			class Layers
			{
				class Layer0
				{
					nopx="DZ\surfaces\data\terrain\cp_grass_nopx.paa";
					texture="DZ\surfaces\data\terrain\cp_grass_ca.paa";
				};
			};
		};
		class Grid
		{
			offsetX=0;
			offsetY=0;
			class Zoom1
			{
				zoomMax=0.15000001;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=100;
			};
			class Zoom2
			{
				zoomMax=0.85000002;
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=1000;
			};
			class Zoom3
			{
				zoomMax=1e+30;
				format="XY";
				formatX="0";
				formatY="0";
				stepX=10000;
				stepY=10000;
			};
		};
		startTime="9:00";
		startDate="5/10/2015";
		centerPosition[]={7100,7750,300};
		ilsPosition[]={4827,9595};
		ilsDirection[]={0.49599999,0.079999998,-0.86699998};
		ilsTaxiIn[]={4717,9862,4820,9922,4819,9959,4731,10115,4648,10269};
		ilsTaxiOff[]={4591,10366,4516,10497,4426,10653,4390,10713,4325,10831,4271,10911,4229,10904,4135,10840};
		drawTaxiway=1;
		class SecondaryAirports
		{
			class ChernarusPlusAirstrip1
			{
				ilsPosition[]={12410,12400};
				ilsDirection[]={0.926,0.079999998,-0.37799999};
				ilsTaxiIn[]={12385,12363,12250,12419,11939,12545};
				ilsTaxiOff[]={11917,12555,11864,12578,11875,12602};
				drawTaxiway=1;
			};
			class ChernarusPlusAirstrip2
			{
				ilsPosition[]={5244,2175};
				ilsDirection[]={0.64200002,0.079999998,-0.76700002};
				ilsTaxiIn[]={4958,2449,4975,2460,5072,2367};
				ilsTaxiOff[]={4888,2573,4973,2472,4958,2449};
				drawTaxiway=0;
			};
		};
		minTreesInForestSquare=10;
		minRocksInRockSquare=5;
		soundMapAttenCoef=0.0099999998;
		class SoundMapValues
		{
			treehard=0.029999999;
			treesoft=0.029999999;
			bushhard=0;
			bushsoft=0;
			forest=1;
			house=0.30000001;
			church=0.5;
		};
		class Sounds
		{
			sounds[]={};
		};
		clutterGrid=1;
		clutterDist=125;
		noDetailDist=40;
		fullDetailDist=15;
		midDetailTexture="DZ\worlds\chernarusplus\data\middle_sat_mco.paa";
		terrainNormalTexture="DZ\worlds\chernarusplus\data\global_nohq.paa";
		heightBlendingMode=1;
		bicubicMode=1;
		class UsedTerrainMaterials
		{
			material0="DZ\surfaces\data\terrain\cp_broadleaf_dense1.rvmat";
			material1="DZ\surfaces\data\terrain\cp_broadleaf_dense2.rvmat";
			material2="DZ\surfaces\data\terrain\cp_broadleaf_sparse1.rvmat";
			material3="DZ\surfaces\data\terrain\cp_broadleaf_sparse2.rvmat";
			material4="DZ\surfaces\data\terrain\cp_concrete1.rvmat";
			material5="DZ\surfaces\data\terrain\cp_concrete2.rvmat";
			material6="DZ\surfaces\data\terrain\cp_conifer_common1.rvmat";
			material7="DZ\surfaces\data\terrain\cp_conifer_common2.rvmat";
			material8="DZ\surfaces\data\terrain\cp_conifer_moss1.rvmat";
			material9="DZ\surfaces\data\terrain\cp_conifer_moss2.rvmat";
			material10="DZ\surfaces\data\terrain\cp_dirt.rvmat";
			material11="DZ\surfaces\data\terrain\cp_grass.rvmat";
			material12="DZ\surfaces\data\terrain\cp_grass_tall.rvmat";
			material13="DZ\surfaces\data\terrain\cp_gravel.rvmat";
			material14="DZ\surfaces\data\terrain\cp_rock.rvmat";
		};
		class Weather: Weather
		{
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					overcast=0.13;
					lightingOvercast=0;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip=0.80000001;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage01_ClearHills_sky.paa";
					horizonClip=0.80000001;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=1;
					godrayStrength=0.050000001;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather2: Weather2
				{
					overcast=0.30000001;
					lightingOvercast=0.15000001;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Sky_Stage10_JetStream_ch_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip=0.80000001;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage01_ClearHills_sky.paa";
					horizonClip=0.80000001;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.64999998;
					godrayStrength=0.050000001;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather3: Weather3
				{
					overcast=0.41999999;
					lightingOvercast=0.34999999;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Sky_Stage11_JetStream_ch_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip=0.80000001;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage02_FoggyHills_sky.paa";
					horizonClip=0.80000001;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.44999999;
					godrayStrength=0.1;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather4: Weather4
				{
					overcast=0.54000002;
					lightingOvercast=0.57999998;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_semicloudy_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage20_Altostratus_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip=0;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage02_FoggyHills_sky.paa";
					horizonClip=0;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.30000001;
					godrayStrength=0;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather5: Weather5
				{
					overcast=0.67000002;
					lightingOvercast=0.67000002;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_semicloudy_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage20_Altostratus_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip=0;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage02_FoggyHills_sky.paa";
					horizonClip=0;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.30000001;
					godrayStrength=0;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather6: Weather6
				{
					overcast=0.77999997;
					lightingOvercast=1;
					sky="#(argb,8,8,3)color(0.141176,0.141176,0.141176,1.0,CO)";
					skyR="DZ\data\data\sky_mostlycloudy_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Sky_Stage30_Stratocumulus_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage30_Nimbostratus_sky.paa";
					cloudClip=0;
					horizon="DZ\worlds\chernarusplus\data\Cloud_Stage00_Transparent_sky.paa";
					horizonClip=0;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0;
					godrayStrength=0;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather7: Weather7
				{
					overcast=0.86000001;
					lightingOvercast=1;
					sky="#(argb,8,8,3)color(0.141176,0.141176,0.141176,1.0,CO)";
					skyR="DZ\data\data\sky_mostlycloudy_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Sky_Stage30_Stratocumulus_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage30_Nimbostratus_sky.paa";
					cloudClip=0;
					horizon="DZ\worlds\chernarusplus\data\Cloud_Stage00_Transparent_sky.paa";
					horizonClip=0;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0;
					godrayStrength=0;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather8: Weather8
				{
					overcast=1.01;
					lightingOvercast=1;
					sky="#(argb,8,8,3)color(0.141176,0.141176,0.141176,1.0,CO)";
					skyR="DZ\data\data\sky_mostlycloudy_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Sky_Stage30_Stratocumulus_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage31_Nimbostratus_sky.paa";
					cloudClip=0;
					horizon="DZ\worlds\chernarusplus\data\Cloud_Stage00_Transparent_sky.paa";
					horizonClip=0;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0;
					godrayStrength=0;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
			};
			class VolFog
			{
				CameraFog=0;
				UseDynamic=1;
			};
		};
		spaceObject="DZ\Data\data\milkyway.p3d";
		spaceObjectRotationPreOffset[]={0,0,0};
		spaceObjectRotationOffset[]={0,0,0};
		spaceTexture0="DZ\Data\data\milkyway_left_co.paa";
		spaceTexture1="DZ\Data\data\milkyway_right_co.paa";
		atmosphereObject="DZ\Data\data\atmosphere.p3d";
		atmosphereTexture="DZ\worlds\chernarusplus\data\Sky_Stage01_Clear_sky.paa";
		farCloudObject="DZ\Data\data\obloha.p3d";
		farCloudObjectRotationAxis[]={0,1,0};
		farCloudObjectRotationSpeed=3;
		cloudObject="DZ\Data\data\cloudObject.p3d";
		cloudObjectRotationAxis[]={0,1,0};
		cloudObjectRotationSpeed=9;
		horizonObject="DZ\Data\data\horizont.p3d";
		horizonObjectRotationAxis[]={0,1,0};
		horizonObjectRotationSpeed=0;
		class Names
		{
			class Settlement_Chernogorsk
			{
				name="Черногорск";
				position[]={6778.6191,2321.7739};
				type="Capital";
			};
			class Settlement_Novodmitrovsk
			{
				name="Новодмитровск";
				position[]={11339.77,14391.05};
				type="Capital";
			};
			class Settlement_Novoselki
			{
				name="Новоселки";
				position[]={6115.9102,3256.3601};
				type="City";
			};
			class Settlement_Dubovo
			{
				name="Дубово";
				position[]={6754.5098,3595.2571};
				type="City";
			};
			class Settlement_Vysotovo
			{
				name="Высотово";
				position[]={5701.2402,2556.1101};
				type="City";
			};
			class Settlement_Zelenogorsk
			{
				name="Зеленогорск";
				position[]={2796,5166};
				type="City";
			};
			class Settlement_Berezino
			{
				name="Березино";
				position[]={12372.383,9760.9814};
				type="City";
			};
			class Settlement_Elektrozavodsk
			{
				name="Электрозаводск";
				position[]={10286.68,1992.77};
				type="City";
			};
			class Settlement_NovayaPetrovka
			{
				name="Новая Петровка";
				position[]={3477.1689,12931.243};
				type="City";
			};
			class Settlement_Gorka
			{
				name="Горка";
				position[]={9524,8945};
				type="City";
			};
			class Settlement_Solnechny
			{
				name="Солнечный";
				position[]={13487.724,6225.8838};
				type="City";
			};
			class Settlement_StarySobor
			{
				name="Старый Собор";
				position[]={6114,7849};
				type="City";
			};
			class Settlement_Vybor
			{
				name="Выбор";
				position[]={3909.8311,9019.6143};
				type="City";
			};
			class Settlement_Severograd
			{
				name="Североград";
				position[]={8168.4839,12573.602};
				type="City";
			};
			class Settlement_Bor
			{
				name="Бор";
				position[]={3316.406,4070.9661};
				type="Village";
			};
			class Settlement_Svetloyarsk
			{
				name="Светлоярск";
				position[]={13989.74,13263.78};
				type="City";
			};
			class Settlement_Krasnostav
			{
				name="Красностав";
				position[]={11203.167,12340.808};
				type="City";
			};
			class Settlement_ChernayaPolyana
			{
				name="Черная Поляна";
				position[]={12158.54,13770.22};
				type="City";
			};
			class Settlement_Polyana
			{
				name="Поляна";
				position[]={10794,8160};
				type="City";
			};
			class Settlement_Tulga
			{
				name="Тулга";
				position[]={12768,4384};
				type="Village";
			};
			class Settlement_Msta
			{
				name="Мста";
				position[]={11333.79,5421.3999};
				type="Village";
			};
			class Settlement_Staroye
			{
				name="Старое";
				position[]={10212.52,5385.0498};
				type="Village";
			};
			class Settlement_Shakhovka
			{
				name="Шаковка";
				position[]={9728.6396,6567.2998};
				type="Village";
			};
			class Settlement_Dolina
			{
				name="Долина";
				position[]={11285.17,6633.5801};
				type="Village";
			};
			class Settlement_Orlovets
			{
				name="Орловец";
				position[]={12250,7253};
				type="Village";
			};
			class Settlement_NovySobor
			{
				name="Новый Собор";
				position[]={7123.6299,7774.6299};
				type="Village";
			};
			class Settlement_Kabanino
			{
				name="Кабанино";
				position[]={5300.71,8645.9004};
				type="Village";
			};
			class Settlement_Mogilevka
			{
				name="Могилевка";
				position[]={7650.4102,5096.46};
				type="Village";
			};
			class Settlement_Nadezhdino
			{
				name="Надеждино";
				position[]={5894,4780};
				type="Village";
			};
			class Settlement_Guglovo
			{
				name="Гуглово";
				position[]={8445,6579};
				type="Village";
			};
			class Settlement_Kamyshovo
			{
				name="Камышово";
				position[]={12170,3458};
				type="Village";
			};
			class Settlement_Pusta
			{
				name="Пуста";
				position[]={9197,3873};
				type="Village";
			};
			class Settlement_Dubrovka
			{
				name="Дубровка";
				position[]={10324.299,9888.2373};
				type="Village";
			};
			class Settlement_VyshnayaDubrovka
			{
				name="Верхняя Дубровка";
				position[]={9926.8232,10468.919};
				type="Village";
			};
			class Settlement_Khelm
			{
				name="Хелм";
				position[]={12329.27,10771.01};
				type="Village";
			};
			class Settlement_Olsha
			{
				name="Ольша";
				position[]={13402,12898};
				type="Village";
			};
			class Settlement_Gvozdno
			{
				name="Гвоздно";
				position[]={8644.751,11934.115};
				type="Village";
			};
			class Settlement_Grishino
			{
				name="Гришино";
				position[]={5980,10257};
				type="Village";
			};
			class Settlement_Rogovo
			{
				name="Рогово";
				position[]={4802,6748};
				type="Village";
			};
			class Settlement_Pogorevka
			{
				name="Погоревка";
				position[]={4445,6322};
				type="Village";
			};
			class Settlement_Pustoshka
			{
				name="Пустошка";
				position[]={3137.9441,7890.9248};
				type="Village";
			};
			class Settlement_Kozlovka
			{
				name="Козловка";
				position[]={4402,4736};
				type="Village";
			};
			class Settlement_Karmanovka
			{
				name="Кармановка";
				position[]={12700.628,14691.312};
				type="Village";
			};
			class Settlement_Balota
			{
				name="Балота";
				position[]={4527.5801,2465.3201};
				type="Village";
			};
			class Settlement_Komarovo
			{
				name="Комарово";
				position[]={3702,2440};
				type="Village";
			};
			class Settlement_Kamenka
			{
				name="Каменка";
				position[]={1981,2207};
				type="Village";
			};
			class Settlement_Myshkino
			{
				name="Мышкино";
				position[]={2048,7258};
				type="Village";
			};
			class Settlement_Pavlovo
			{
				name="Павлово";
				position[]={1693.98,3858.6499};
				type="Village";
			};
			class Settlement_Lopatino
			{
				name="Лопатино";
				position[]={2801,10029};
				type="Village";
			};
			class Settlement_Vyshnoye
			{
				name="Вышное";
				position[]={6629,6051};
				type="Village";
			};
			class Settlement_Prigorodki
			{
				name="Пригородки";
				position[]={7760,3336};
				type="Village";
			};
			class Settlement_Drozhino
			{
				name="Дрожжино";
				position[]={3374,4861};
				type="Village";
			};
			class Settlement_Sosnovka
			{
				name="Сосновка";
				position[]={2556,6307};
				type="Village";
			};
			class Settlement_Nizhneye
			{
				name="Нижнее";
				position[]={12824.88,8097.7002};
				type="Village";
			};
			class Settlement_Pulkovo
			{
				name="Пулково";
				position[]={5015,5607};
				type="Village";
			};
			class Settlement_Berezhki
			{
				name="Бережки";
				position[]={15020,13905};
				type="Village";
			};
			class Settlement_Turovo
			{
				name="Турово";
				position[]={13630,14146};
				type="Village";
			};
			class Settlement_BelayaPolyana
			{
				name="Белая Поляна";
				position[]={14166,14968};
				type="Village";
			};
			class Settlement_Dobroye
			{
				name="Доброе";
				position[]={12996,15066};
				type="Village";
			};
			class Settlement_Nagornoye
			{
				name="Нагорное";
				position[]={9286,14677};
				type="Village";
			};
			class Settlement_Svergino
			{
				name="Свергино";
				position[]={9493.5195,13875.27};
				type="Village";
			};
			class Settlement_Ratnoye
			{
				name="Ратное";
				position[]={6195.8779,12761.802};
				type="Village";
			};
			class Settlement_Kamensk
			{
				name="Каменск";
				position[]={6748.7412,14430.046};
				type="Village";
			};
			class Settlement_Krasnoye
			{
				name="Красное";
				position[]={6411.374,15029.961};
				type="Village";
			};
			class Settlement_StaryYar
			{
				name="Старый Яр";
				position[]={4987.8599,14992.976};
				type="Village";
			};
			class Settlement_Polesovo
			{
				name="Полесово";
				position[]={5955.7368,13558.046};
				type="Village";
			};
			class Settlement_Tisy
			{
				name="Тисы";
				position[]={3441.6499,14799.55};
				type="Village";
			};
			class Settlement_Topolniki
			{
				name="Топольники";
				position[]={2913.7451,12366.357};
				type="Village";
			};
			class Settlement_Zaprudnoye
			{
				name="Запрудное";
				position[]={5214,12792};
				type="Village";
			};
			class Settlement_Sinystok
			{
				name="Синысток";
				position[]={1538.278,11904.578};
				type="Village";
			};
			class Settlement_Vavilovo
			{
				name="Вавилово";
				position[]={2263,11103};
				type="Village";
			};
			class Settlement_Kumyrna
			{
				name="Кумырна";
				position[]={8300,6054};
				type="Village";
			};
			class Settlement_Kalinovka
			{
				name="Калиновка";
				position[]={7448,13406};
				type="Village";
			};
			class Settlement_Bogatyrka
			{
				name="Богатырка";
				position[]={1453.62,8870.9199};
				type="Village";
			};
			class Settlement_SvyatoyRomanSkiResort
			{
				name="Свято-Романовский Горнолыжный курорт";
				position[]={638,11667};
				type="Local";
			};
			class Settlement_SKVSChBiathlonArena
			{
				name="СКВСЧ Биатлон Арена";
				position[]={357,11142};
				type="Local";
			};
			class Settlement_Zvir
			{
				name="Звир";
				position[]={577.33002,5317.4199};
				type="Village";
			};
			class Settlement_Zabolotye
			{
				name="Заболотье";
				position[]={1256.859,9993.2598};
				type="Village";
			};
			class Settlement_Galkino
			{
				name="Галкино";
				position[]={1102.6801,8798.2695};
				type="Local";
			};
			class Camp_Arsenovo
			{
				name="Арсеньево";
				position[]={8509.6611,13918.628};
				type="Camp";
			};
			class Camp_Stroytel
			{
				name="Строитель";
				position[]={7017.6299,4365.21};
				type="Camp";
			};
			class Camp_Romashka
			{
				name="Ромашка";
				position[]={8177.6021,10980.289};
				type="Camp";
			};
			class Camp_Kometa
			{
				name="Комета";
				position[]={10271.697,3558.228};
				type="Camp";
			};
			class Camp_Druzhba
			{
				name="Дружба";
				position[]={11437,10695};
				type="Camp";
			};
			class Camp_Nadezhda
			{
				name="Надежда";
				position[]={7279.9678,7014.3501};
				type="Camp";
			};
			class Camp_YouthPioneer
			{
				name="Юный Пионер";
				position[]={11155.825,7074.1431};
				type="Camp";
			};
			class Camp_ProudChernarus
			{
				name="Гордый Чернорус";
				position[]={3199.6169,6174.9321};
				type="Camp";
			};
			class Camp_Shkolnik
			{
				name="Школьник";
				position[]={14856.503,14571.028};
				type="Camp";
			};
			class Camp_Pobeda
			{
				name="Победа";
				position[]={3703.3821,14876.384};
				type="Camp";
			};
			class Camp_Metalurg
			{
				name="Металлург";
				position[]={1035.406,6677.3828};
				type="Camp";
			};
			class Hill_Zelenayagora
			{
				name="Зеленая гора";
				position[]={3767.1699,6010.54};
				type="Hill";
			};
			class Local_Dichina
			{
				name="Дишина";
				position[]={4618,7821};
				type="Local";
			};
			class Local_Novylug
			{
				name="Новый луг";
				position[]={9251,11360};
				type="Local";
			};
			class Local_Staryeluga
			{
				name="Старые луга";
				position[]={6919,8995};
				type="Local";
			};
			class Hill_Vysota
			{
				name="Высота";
				position[]={6591.6299,3400};
				type="Hill";
			};
			class Hill_Kopyto
			{
				name="Копыто";
				position[]={7871.479,3869.1021};
				type="Hill";
			};
			class Local_Grubyeskaly
			{
				name="Грубые скалы";
				position[]={13115.06,11900};
				type="Local";
			};
			class Local_Chernyles
			{
				name="Черный лес";
				position[]={9031,7803};
				type="Local";
			};
			class Hill_Altar
			{
				name="Алтар";
				position[]={8143.3999,9159.6797};
				type="Hill";
			};
			class Local_RadioZenit
			{
				name="Радио Зенит";
				position[]={8080.0098,9341.6797};
				type="Local";
			};
			class Hill_PikKozlova
			{
				name="Пик Козлова";
				position[]={8850.1699,2880.53};
				type="Hill";
			};
			class Local_Pustoykhrebet
			{
				name="Пустой хребет";
				position[]={10890,5665};
				type="Local";
			};
			class Hill_Bashnya
			{
				name="Башня";
				position[]={4178.27,11771.22};
				type="Hill";
			};
			class Hill_Veresnik
			{
				name="Вересник";
				position[]={4440.1699,8070.54};
				type="Hill";
			};
			class Hill_Kurgan
			{
				name="Курган";
				position[]={3368.52,5296.8701};
				type="Hill";
			};
			class Hill_Kustryk
			{
				name="Кустрык";
				position[]={4912.8799,5063.4502};
				type="Hill";
			};
			class Hill_Vetryanayagora
			{
				name="Ветреная гора";
				position[]={3892.74,4200.5898};
				type="Hill";
			};
			class Hill_Kalmyk
			{
				name="Калмык";
				position[]={6903.7798,4919.6602};
				type="Hill";
			};
			class Hill_PopIvan
			{
				name="Поп Иван";
				position[]={6420.2598,6570.6602};
				type="Hill";
			};
			class Hill_Erbenka
			{
				name="Ербенка";
				position[]={2842.916,4014.811};
				type="Hill";
			};
			class Local_Lesnoykhrebet
			{
				name="Лесной хребет";
				position[]={8122.77,7815.54};
				type="Local";
			};
			class Hill_Vysokiykamen
			{
				name="Высокий камень";
				position[]={8940.1904,4380.52};
				type="Hill";
			};
			class Hill_Dobry
			{
				name="Добрый";
				position[]={10552.9,3061.03};
				type="Hill";
			};
			class Hill_Baranchik
			{
				name="Баранчик";
				position[]={10153.147,6208.521};
				type="Hill";
			};
			class Hill_Malinovka
			{
				name="Малиновка";
				position[]={10897.7,7575.5898};
				type="Hill";
			};
			class Hill_Dubina
			{
				name="Дубина";
				position[]={11107.9,8474.8301};
				type="Hill";
			};
			class Hill_Klen
			{
				name="Клен";
				position[]={11473.511,11315.393};
				type="Hill";
			};
			class Hill_Chernayagora
			{
				name="Черная гора";
				position[]={10280.816,12053.928};
				type="Hill";
			};
			class Ruin_Zolotar
			{
				name="Золотарь";
				position[]={10179,11998};
				type="Ruin";
			};
			class Hill_Ostry
			{
				name="Острый";
				position[]={10792.747,12829.504};
				type="Hill";
			};
			class Hill_Olsha
			{
				name="Ольша";
				position[]={12975.7,12775.2};
				type="Hill";
			};
			class Marine_Tikhiyzaliv
			{
				name="Тихий залив";
				position[]={1221.49,2111.8899};
				type="Marine";
			};
			class Marine_Mutnyizaliv
			{
				name="Мутный залив";
				position[]={5735.479,1918.92};
				type="Marine";
			};
			class Marine_Chernyzaliv
			{
				name="Черный залив";
				position[]={7599.0688,2486.5859};
				type="Marine";
			};
			class Marine_Zelenyzaliv
			{
				name="Зеленый залив";
				position[]={11227.019,2989.8379};
				type="Marine";
			};
			class Marine_Skalistyproliv
			{
				name="Скалистый пролив";
				position[]={13385.92,3613.9399};
				type="Marine";
			};
			class Marine_Nizhniyzaliv
			{
				name="Нижний залив";
				position[]={12989.3,8515.7598};
				type="Marine";
			};
			class Marine_ZalivGuba
			{
				name="Залив Губа";
				position[]={14328.374,13136.732};
				type="Marine";
			};
			class Marine_Rify
			{
				name="Рифы";
				position[]={13931.73,11288.61};
				type="Local";
			};
			class Marine_Ivovoyeozero
			{
				name="Ивовое озеро";
				position[]={13248,11572};
				type="Marine";
			};
			class Marine_Chernoyeozero
			{
				name="Черное озеро";
				position[]={13381,12002};
				type="Marine";
			};
			class Marine_PlotinaTopolka
			{
				name="Плотина Тополька";
				position[]={10231.33,3691.1499};
				type="Marine";
			};
			class Marine_PlotinaPobeda
			{
				name="Плотина Победа";
				position[]={9928.2939,13874.643};
				type="Marine";
			};
			class Marine_PlotinaTishina
			{
				name="Плотина Тишина";
				position[]={1150.8199,6432.4541};
				type="Marine";
			};
			class Marine_Ozerko
			{
				name="Озерко";
				position[]={6777.6299,4492.4199};
				type="Marine";
			};
			class Marine_Prud
			{
				name="Пруд";
				position[]={6610.98,9308.5703};
				type="Marine";
			};
			class Ruin_Chortovzamok
			{
				name="Чертов замок";
				position[]={6883.2388,11501.288};
				type="Ruin";
			};
			class Ruin_Zub
			{
				name="Зуб";
				position[]={6574.2798,5573.8501};
				type="Ruin";
			};
			class Ruin_Rog
			{
				name="Рог";
				position[]={11267.206,4293.0361};
				type="Ruin";
			};
			class Local_Grozovypereval
			{
				name="Грозовой перевал";
				position[]={3318.1201,15250.55};
				type="Local";
			};
			class Local_Sosnovypereval
			{
				name="Сосновый перевал";
				position[]={2687.3999,6590.2798};
				type="Local";
			};
			class Local_PerevalOreshka
			{
				name="Перевал Орешка";
				position[]={9822.1914,6088.793};
				type="Local";
			};
			class Local_Turovskiypereval
			{
				name="Туровский перевал";
				position[]={14674.241,14089.306};
				type="Local";
			};
			class Local_Tridoliny
			{
				name="Три долины";
				position[]={12764.47,5412.21};
				type="Local";
			};
			class Local_Grozovyedoly
			{
				name="Грозовые доли";
				position[]={10403.982,14793.168};
				type="Local";
			};
			class Ruin_Klyuch
			{
				name="Ключ";
				position[]={9282.5703,13476.67};
				type="Ruin";
			};
			class Hill_Lysayagora
			{
				name="Лысая гора";
				position[]={6722.459,14050.42};
				type="Hill";
			};
			class Marine_Glubokoyeozero
			{
				name="Глубокое озеро";
				position[]={1692.5551,14821.565};
				type="Marine";
			};
			class Local_Skalka
			{
				name="Скалка";
				position[]={5758,14486};
				type="Local";
			};
			class Local_Vidy
			{
				name="Виды";
				position[]={785.05402,14398.815};
				type="Local";
			};
			class Hill_Tumannyverkh
			{
				name="Туманный верх";
				position[]={331.224,12982.99};
				type="Hill";
			};
			class Local_Adamovka
			{
				name="Адамовка";
				position[]={5340.6602,11380.01};
				type="Local";
			};
			class Hill_Shishok
			{
				name="Шишок";
				position[]={3559.313,9422.2695};
				type="Hill";
			};
			class Settlement_Skalisty
			{
				name="Скалистый";
				position[]={13715.454,3118.78};
				type="Village";
			};
			class Ruin_Storozh
			{
				name="Сторож";
				position[]={2816.6011,1277.96};
				type="Ruin";
			};
			class Local_MysGolova
			{
				name="Мыс Голова";
				position[]={8286.0527,2405.5979};
				type="Local";
			};
			class Local_Drakon
			{
				name="Дракон";
				position[]={11191,2443};
				type="Local";
			};
			class Local_Otmel
			{
				name="Отмель";
				position[]={11581.25,3213.24};
				type="Local";
			};
			class Local_MysKrutoy
			{
				name="Мыс Крутой";
				position[]={13578.19,3976.8201};
				type="Local";
			};
			class Hill_Tokarnya
			{
				name="Токарня";
				position[]={8890.4775,5672.5532};
				type="Hill";
			};
			class Hill_Ostrog
			{
				name="Острог";
				position[]={2655.7339,2264.6321};
				type="Hill";
			};
			class Local_Maryanka
			{
				name="Марьянка";
				position[]={2789,3386};
				type="Local";
			};
			class Local_Polonina
			{
				name="Полонина";
				position[]={1004.486,4242.8691};
				type="Local";
			};
			class Local_Kalinka
			{
				name="Калинка";
				position[]={3346.5,11292.097};
				type="Local";
			};
			class Hill_Kikimora
			{
				name="Кикимора";
				position[]={1812,6200};
				type="Hill";
			};
			class Hill_BolshoyKotel
			{
				name="Большой Котел";
				position[]={714.64899,6520.4312};
				type="Hill";
			};
			class Hill_Simurg
			{
				name="Симург";
				position[]={134,7569.9902};
				type="Hill";
			};
			class Hill_Volchiypik
			{
				name="Волчий пик";
				position[]={320.254,2719.269};
				type="Hill";
			};
			class Ruin_Krona
			{
				name="Крона";
				position[]={1493,9270.3398};
				type="Ruin";
			};
			class Local_TriKresta
			{
				name="Три Креста";
				position[]={301,9478};
				type="Local";
			};
			class Local_Rostoki
			{
				name="Ростоки";
				position[]={744.45001,8647.8604};
				type="Local";
			};
			class Marine_OrlyeOzero
			{
				name="Орлиное озеро";
				position[]={597,5990};
				type="Marine";
			};
			class Local_Makosh
			{
				name="Макошь";
				position[]={7849.7202,6480.1899};
				type="Local";
			};
			class Local_Klenovyipereval
			{
				name="Кленовый перевал";
				position[]={10862.702,11585.512};
				type="Local";
			};
			class Local_Zmeinykhrebet
			{
				name="Змеиный хребет";
				position[]={11446.17,13606.92};
				type="Local";
			};
			class Hill_Sokol
			{
				name="Сокол";
				position[]={12001,14813};
				type="Hill";
			};
			class Local_Krutyeskaly
			{
				name="Крутые скалы";
				position[]={14880.63,13671.76};
				type="Local";
			};
			class Local_Bogat
			{
				name="Богат";
				position[]={7058.0112,12023.571};
				type="Local";
			};
			class Local_Dubnik
			{
				name="Дубник";
				position[]={3298.29,10330.89};
				type="Local";
			};
			class Hill_Viselitsa
			{
				name="Виселица";
				position[]={12722.157,7504.0498};
				type="Hill";
			};
			class Local_Dazhbog
			{
				name="Дажбог";
				position[]={6581,8590};
				type="Hill";
			};
			class Marine_Verbnik
			{
				name="Вербник";
				position[]={4414.8789,9103.002};
				type="Marine";
			};
			class Local_Medvezhilugi
			{
				name="Медвежьи луга";
				position[]={9641,13236};
				type="Local";
			};
			class Ruin_Voron
			{
				name="Ворон";
				position[]={13517.93,3311.2451};
				type="Ruin";
			};
			class Ruin_Gnomovzamok
			{
				name="Гномский замок";
				position[]={7446.915,9097.1699};
				type="Ruin";
			};
			class Marine_Glaza
			{
				name="Глаза";
				position[]={7383,9320};
				type="Marine";
			};
			class Local_KarerKrasnayaZarya
			{
				name="Kарьер Красная Заря";
				position[]={8565.3486,13418.684};
				type="Local";
			};
			class Local_Matveyevo
			{
				name="Матвеево";
				position[]={4281,7380};
				type="Local";
			};
			class Local_Kotka
			{
				name="Котька";
				position[]={5873.7002,6883.2402};
				type="Local";
			};
			class Local_Chernyeskaly
			{
				name="Черные скалы";
				position[]={3932.572,14599.496};
				type="Local";
			};
			class Hill_SvyatoyRoman
			{
				name="Святой Роман";
				position[]={84.832001,11901.246};
				type="Hill";
			};
			class Hill_Koman
			{
				name="Коман";
				position[]={1660.652,7415.6611};
				type="Hill";
			};
			class Hill_Mayak
			{
				name="Маяк";
				position[]={12323.813,4553.1069};
				type="Hill";
			};
			class Local_MB_VMC
			{
				name="военная база";
				position[]={4497,8291};
				type="Local";
			};
			class Local_MB_Tisy
			{
				name="военная база";
				position[]={1570,14069};
				type="Local";
			};
			class Local_MB_Kamensk
			{
				name="военная база";
				position[]={7838.812,14704.823};
				type="Local";
			};
			class Local_MB_Zeleno
			{
				name="военная база";
				position[]={2410.375,5133.6812};
				type="Local";
			};
			class Local_MB_Pavlovo
			{
				name="военная база";
				position[]={2016,3408};
				type="Local";
			};
			class Local_AF_Balota
			{
				name="аэродром";
				position[]={5082.0308,2376.3279};
				type="Local";
			};
			class Local_AF_Krasno
			{
				name="аэродром";
				position[]={12100.681,12573.896};
				type="Local";
			};
			class Local_AF_Vybor
			{
				name="Авиационная база Выбор";
				position[]={4428,10179};
				type="Local";
			};
			class RailroadStation_Elektro
			{
				name="";
				position[]={10309.912,2092.2029};
				type="RailroadStation";
			};
			class RailroadStation_Prigorodki
			{
				name="";
				position[]={8056.0342,3264.908};
				type="RailroadStation";
			};
			class RailroadStation_Cherno
			{
				name="";
				position[]={6540.626,2638.7749};
				type="RailroadStation";
			};
			class RailroadStation_Balota
			{
				name="";
				position[]={4399.2588,2309.397};
				type="RailroadStation";
			};
			class RailroadStation_Komarovo
			{
				name="";
				position[]={3670.667,2397.5249};
				type="RailroadStation";
			};
			class RailroadStation_Kamenka
			{
				name="";
				position[]={1877.9351,2168.5591};
				type="RailroadStation";
			};
			class RailroadStation_Zeleno
			{
				name="";
				position[]={2485.2661,5214.6641};
				type="RailroadStation";
			};
			class RailroadStation_Vavilovo
			{
				name="";
				position[]={1991.5031,11289.488};
				type="RailroadStation";
			};
			class RailroadStation_Novaya
			{
				name="";
				position[]={3534.425,12537.095};
				type="RailroadStation";
			};
			class RailroadStation_Severograd
			{
				name="";
				position[]={7846.5811,12401.488};
				type="RailroadStation";
			};
			class RailroadStation_Novo
			{
				name="";
				position[]={11610.908,14133.702};
				type="RailroadStation";
			};
			class RailroadStation_Svetlo
			{
				name="";
				position[]={13970.473,13486.344};
				type="RailroadStation";
			};
			class RailroadStation_Berezino
			{
				name="";
				position[]={12989.844,10200.673};
				type="RailroadStation";
			};
			class RailroadStation_Solnich
			{
				name="";
				position[]={13146.109,7094.4722};
				type="RailroadStation";
			};
			class RailroadStation_Solnich2
			{
				name="";
				position[]={13356.109,6154.4722};
				type="RailroadStation";
			};
			class RailroadStation_Kamyshovo
			{
				name="";
				position[]={11970.969,3548.7229};
				type="RailroadStation";
			};
			class RailroadStation_Dobroye
			{
				name="";
				position[]={12860.658,15050.221};
				type="RailroadStation";
			};
			class LocalOffice_Novaya
			{
				name="";
				position[]={3469.1721,13135.165};
				type="LocalOffice";
			};
			class LocalOffice_Vybor
			{
				name="";
				position[]={3857.656,8946.1396};
				type="LocalOffice";
			};
			class LocalOffice_Sinys
			{
				name="";
				position[]={1439.08,12011.26};
				type="LocalOffice";
			};
			class LocalOffice_Vavil
			{
				name="";
				position[]={2220.8401,11075.83};
				type="LocalOffice";
			};
			class LocalOffice_Lopat
			{
				name="";
				position[]={2720.72,9978.1396};
				type="LocalOffice";
			};
			class LocalOffice_Pustosh
			{
				name="";
				position[]={3051.4399,7804.6802};
				type="LocalOffice";
			};
			class LocalOffice_Pogorev
			{
				name="";
				position[]={4480.71,6462};
				type="LocalOffice";
			};
			class LocalOffice_Kabanin
			{
				name="";
				position[]={5382,8589};
				type="LocalOffice";
			};
			class LocalOffice_Stary
			{
				name="";
				position[]={6056.0801,7715.3501};
				type="LocalOffice";
			};
			class LocalOffice_Novy
			{
				name="";
				position[]={7166.96,7526.0098};
				type="LocalOffice";
			};
			class LocalOffice_Grishino
			{
				name="";
				position[]={5983,10305};
				type="LocalOffice";
			};
			class LocalOffice_Severo
			{
				name="";
				position[]={7986,12732};
				type="LocalOffice";
			};
			class LocalOffice_Gorka
			{
				name="";
				position[]={9503,8805};
				type="LocalOffice";
			};
			class LocalOffice_Mogi
			{
				name="";
				position[]={7562,5149};
				type="LocalOffice";
			};
			class LocalOffice_Nadez
			{
				name="";
				position[]={5906,4844};
				type="LocalOffice";
			};
			class LocalOffice_Cherno
			{
				name="";
				position[]={6607,2418};
				type="LocalOffice";
			};
			class LocalOffice_Kozlov
			{
				name="";
				position[]={4394,4629};
				type="LocalOffice";
			};
			class LocalOffice_Komar
			{
				name="";
				position[]={3676,2501};
				type="LocalOffice";
			};
			class LocalOffice_Pavlovo
			{
				name="";
				position[]={1655,3851};
				type="LocalOffice";
			};
			class LocalOffice_Zeleno
			{
				name="";
				position[]={2854,5282};
				type="LocalOffice";
			};
			class LocalOffice_Elektro
			{
				name="";
				position[]={10212,2295};
				type="LocalOffice";
			};
			class LocalOffice_Kamys
			{
				name="";
				position[]={12155,3514};
				type="LocalOffice";
			};
			class LocalOffice_Staroye
			{
				name="";
				position[]={10106,5457};
				type="LocalOffice";
			};
			class LocalOffice_Dolina
			{
				name="";
				position[]={11217,6564};
				type="LocalOffice";
			};
			class LocalOffice_Solnich
			{
				name="";
				position[]={13383,6225};
				type="LocalOffice";
			};
			class LocalOffice_Polana
			{
				name="";
				position[]={10676,7989};
				type="LocalOffice";
			};
			class LocalOffice_Berezino
			{
				name="";
				position[]={12272,9474};
				type="LocalOffice";
			};
			class LocalOffice_Krasno
			{
				name="";
				position[]={11257,12211};
				type="LocalOffice";
			};
			class LocalOffice_Svetlo
			{
				name="";
				position[]={14013,13335};
				type="LocalOffice";
			};
			class LocalOffice_Cpol
			{
				name="";
				position[]={12110,13779};
				type="LocalOffice";
			};
			class LocalOffice_Novo
			{
				name="";
				position[]={11564,14742};
				type="LocalOffice";
			};
			class ViewPoint_1
			{
				name="";
				position[]={567,6997};
				type="ViewPoint";
			};
			class ViewPoint_2
			{
				name="";
				position[]={687,6874};
				type="ViewPoint";
			};
			class ViewPoint_3
			{
				name="";
				position[]={724,6510};
				type="ViewPoint";
			};
			class ViewPoint_4
			{
				name="";
				position[]={298,3460};
				type="ViewPoint";
			};
			class ViewPoint_5
			{
				name="";
				position[]={172,3412};
				type="ViewPoint";
			};
			class ViewPoint_6
			{
				name="";
				position[]={258,3283};
				type="ViewPoint";
			};
			class ViewPoint_7
			{
				name="";
				position[]={322,2697};
				type="ViewPoint";
			};
			class ViewPoint_8
			{
				name="";
				position[]={1671,2211};
				type="ViewPoint";
			};
			class ViewPoint_9
			{
				name="";
				position[]={2915,3995};
				type="ViewPoint";
			};
			class ViewPoint_10
			{
				name="";
				position[]={3371,4551};
				type="ViewPoint";
			};
			class ViewPoint_11
			{
				name="";
				position[]={414,9574};
				type="ViewPoint";
			};
			class ViewPoint_12
			{
				name="";
				position[]={241,11867};
				type="ViewPoint";
			};
			class ViewPoint_13
			{
				name="";
				position[]={1153,12411};
				type="ViewPoint";
			};
			class ViewPoint_14
			{
				name="";
				position[]={2320,13650};
				type="ViewPoint";
			};
			class ViewPoint_15
			{
				name="";
				position[]={4084,14570};
				type="ViewPoint";
			};
			class ViewPoint_16
			{
				name="";
				position[]={4445,15045};
				type="ViewPoint";
			};
			class ViewPoint_17
			{
				name="";
				position[]={4926,14820};
				type="ViewPoint";
			};
			class ViewPoint_18
			{
				name="";
				position[]={5172,14841};
				type="ViewPoint";
			};
			class ViewPoint_19
			{
				name="";
				position[]={5345,14873};
				type="ViewPoint";
			};
			class ViewPoint_20
			{
				name="";
				position[]={5480,14822};
				type="ViewPoint";
			};
			class ViewPoint_21
			{
				name="";
				position[]={5692,14771};
				type="ViewPoint";
			};
			class ViewPoint_22
			{
				name="";
				position[]={5896,14747};
				type="ViewPoint";
			};
			class ViewPoint_23
			{
				name="";
				position[]={6246,14707};
				type="ViewPoint";
			};
			class ViewPoint_24
			{
				name="";
				position[]={6434,14816};
				type="ViewPoint";
			};
			class ViewPoint_25
			{
				name="";
				position[]={6707,13961};
				type="ViewPoint";
			};
			class ViewPoint_26
			{
				name="";
				position[]={6861,14115};
				type="ViewPoint";
			};
			class ViewPoint_27
			{
				name="";
				position[]={8710,14200};
				type="ViewPoint";
			};
			class ViewPoint_28
			{
				name="";
				position[]={10822,14651};
				type="ViewPoint";
			};
			class ViewPoint_29
			{
				name="";
				position[]={11369,15037};
				type="ViewPoint";
			};
			class ViewPoint_30
			{
				name="";
				position[]={13604,14632};
				type="ViewPoint";
			};
			class ViewPoint_31
			{
				name="";
				position[]={13877,14703};
				type="ViewPoint";
			};
			class ViewPoint_32
			{
				name="";
				position[]={14140,15244};
				type="ViewPoint";
			};
			class ViewPoint_33
			{
				name="";
				position[]={13840,13833};
				type="ViewPoint";
			};
			class ViewPoint_34
			{
				name="";
				position[]={14075,13889};
				type="ViewPoint";
			};
			class ViewPoint_35
			{
				name="";
				position[]={14895,13611};
				type="ViewPoint";
			};
			class ViewPoint_36
			{
				name="";
				position[]={14828,13759};
				type="ViewPoint";
			};
			class ViewPoint_37
			{
				name="";
				position[]={11982,13388};
				type="ViewPoint";
			};
			class ViewPoint_38
			{
				name="";
				position[]={11690,13511};
				type="ViewPoint";
			};
			class ViewPoint_39
			{
				name="";
				position[]={11473,13580};
				type="ViewPoint";
			};
			class ViewPoint_40
			{
				name="";
				position[]={11376,13661};
				type="ViewPoint";
			};
			class ViewPoint_41
			{
				name="";
				position[]={13937,11250};
				type="ViewPoint";
			};
			class ViewPoint_42
			{
				name="";
				position[]={11481,8429};
				type="ViewPoint";
			};
			class ViewPoint_43
			{
				name="";
				position[]={11574,7743};
				type="ViewPoint";
			};
			class ViewPoint_44
			{
				name="";
				position[]={12123,6997};
				type="ViewPoint";
			};
			class ViewPoint_45
			{
				name="";
				position[]={12980,5967};
				type="ViewPoint";
			};
			class ViewPoint_46
			{
				name="";
				position[]={12352,4519};
				type="ViewPoint";
			};
			class ViewPoint_47
			{
				name="";
				position[]={12304,3976};
				type="ViewPoint";
			};
			class ViewPoint_48
			{
				name="";
				position[]={10584,2867};
				type="ViewPoint";
			};
			class ViewPoint_49
			{
				name="";
				position[]={8767,2959};
				type="ViewPoint";
			};
			class ViewPoint_50
			{
				name="";
				position[]={8811,2850};
				type="ViewPoint";
			};
			class ViewPoint_51
			{
				name="";
				position[]={8547,3872};
				type="ViewPoint";
			};
			class ViewPoint_52
			{
				name="";
				position[]={9029,4380};
				type="ViewPoint";
			};
			class ViewPoint_53
			{
				name="";
				position[]={10741,4180};
				type="ViewPoint";
			};
			class ViewPoint_54
			{
				name="";
				position[]={6897,11648};
				type="ViewPoint";
			};
			class ViewPoint_55
			{
				name="";
				position[]={5633,6885};
				type="ViewPoint";
			};
			class ViewPoint_56
			{
				name="";
				position[]={1456,9611};
				type="ViewPoint";
			};
			class ViewPoint_57
			{
				name="";
				position[]={1941,6768};
				type="ViewPoint";
			};
		};
		class Ambient
		{
			class BigInsects
			{
				radius=20;
				cost="(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class BigInsectsAquatic
			{
				radius=20;
				cost="(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
				class Species
				{
				};
			};
			class SmallInsects
			{
				radius=3;
				cost="(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class NightInsects
			{
				radius=3;
				cost="(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class WindClutter
			{
				radius=10;
				cost="((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				class Species
				{
					class FxWindGrass1
					{
						probability="0.4 - 0.2 * hills - 0.2 * trees";
						cost=1;
					};
					class FxWindGrass2
					{
						probability="0.4 - 0.2 * hills - 0.2 * trees";
						cost=1;
					};
					class FxWindRock1
					{
						probability="0.4 * hills";
						cost=1;
					};
					class FxCrWindLeaf1
					{
						probability="0.2 * trees";
						cost=1;
					};
					class FxCrWindLeaf2
					{
						probability="0.1 * trees + 0.2";
						cost=1;
					};
					class FxCrWindLeaf3
					{
						probability="0.1 * trees";
						cost=1;
					};
				};
			};
			class NoWindClutter
			{
				radius=15;
				cost=8;
				class Species
				{
					class FxWindPollen1
					{
						probability=1;
						cost=1;
					};
					class FxCrWindLeaf1
					{
						probability="0.2 * trees";
						cost=1;
					};
					class FxCrWindLeaf2
					{
						probability="0.1 * trees + 0.2";
						cost=1;
					};
					class FxCrWindLeaf3
					{
						probability="0.1 * trees";
						cost=1;
					};
				};
			};
		};
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class ChernarusPlusIntro
		{
			directory="dz\Worlds\ChernarusPlus\data\scenes\intro.ChernarusPlus";
		};
	};
};
