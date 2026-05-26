class CfgPatches
{
	class DZ_Worlds_Enoch
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Surfaces_Bliss"
		};
	};
};
class cfgCharacterScenes
{
	class Enoch
	{
		class loc1
		{
			target[]={7395,6410,226};
			position[]={7399,6414,1};
			fov=0.52359998;
			date[]={1984,10,28,7,18};
			overcast=0.75;
			rain=0;
			fog=0;
		};
		class loc2
		{
			target[]={3166,6804,234};
			position[]={3171,6802,1};
			fov=0.52359998;
			date[]={1984,10,28,10,10};
			overcast=0.15000001;
			rain=0;
			fog=0;
		};
		class loc3
		{
			target[]={6398,10980,175};
			position[]={6402,10979,1};
			fov=0.52359998;
			date[]={1984,10,28,10,10};
			overcast=0.34999999;
			rain=0;
			fog=0;
		};
		class loc4
		{
			target[]={11360,630,217};
			position[]={11363,628,1};
			fov=0.52359998;
			date[]={1984,10,28,9,56};
			overcast=0.15000001;
			rain=0;
			fog=0;
		};
		class loc5
		{
			target[]={11360,630,217};
			position[]={11363,628,1};
			fov=0.52359998;
			date[]={1984,10,28,9,56};
			overcast=0.15000001;
			rain=0;
			fog=0;
		};
		class loc6
		{
			target[]={10994,9015,186};
			position[]={10983,9012,1};
			fov=0.52359998;
			date[]={1984,10,28,14,32};
			overcast=0.34999999;
			rain=0;
			fog=0;
		};
		class loc7
		{
			target[]={9274,10839,200};
			position[]={9274,10830,1};
			fov=0.52359998;
			date[]={1984,10,28,13,11};
			overcast=0.34999999;
			rain=0;
			fog=0;
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
				class Weather9;
				class Weather10;
				class Weather11;
				class Weather12;
			};
		};
	};
	class Enoch: CAWorld
	{
		access=3;
		cutscenes[]=
		{
			"EnochIntro"
		};
		description="Livonia";
		worldName="DZ\worlds\enoch\world\enoch.wrp";
		ceFiles="DZ\worlds\enoch\ce";
		class Navmesh
		{
			navmeshName="dz\worlds\enoch\navmesh\navmesh.nm";
			filterIsolatedIslandsOnLoad=1;
			visualiseOffset=0;
			class GenParams
			{
				tileWidth=50;
				cellSize1=0.25;
				cellSize2=0.1;
				cellSize3=0.1;
				filterIsolatedIslands=1;
				seedPosition[]={6400,0,6400};
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
		longitude=23;
		latitude=-54;
		mapDisplayNameKey="#STR_CfgVehicles_ChernarusMap0";
		mapDescriptionKey="#STR_CfgVehicles_ChernarusMap1";
		mapTextureClosed="dz\gear\navigation\data\map_enoch_co.paa";
		mapTextureOpened="dz\structures_bliss\signs\tourist\data\karta_enoch_co.paa";
		mapTextureLegend="dz\structures_bliss\signs\tourist\data\karta_enoch_side_co.paa";
		userMapPath="dz\worlds\enoch\data\usermap";
		class OutsideTerrain
		{
			satellite="DZ\worlds\enoch\data\enoch_satout_co.paa";
			enableTerrainSynth=1;
			class Layers
			{
				class Layer0
				{
					nopx="DZ\surfaces_bliss\data\terrain\en_grass1_nopx.paa";
					texture="DZ\surfaces_bliss\data\terrain\en_grass1_ca.paa";
				};
			};
		};
		class Grid
		{
			offsetX=0;
			offsetY=12800;
			class Zoom1
			{
				zoomMax=0.15000001;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=-100;
			};
			class Zoom2
			{
				zoomMax=0.85000002;
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=-1000;
			};
			class Zoom3
			{
				zoomMax=1e+30;
				format="XY";
				formatX="0";
				formatY="0";
				stepX=10000;
				stepY=-10000;
			};
		};
		startTime="9:00";
		startDate="25/8/2015";
		centerPosition[]={7100,7750,300};
		ilsPosition[]=
		{
			"4234.94.0",
			10593
		};
		ilsDirection[]={0.70709997,0.079999998,0.70709997};
		ilsTaxiOff[]={3988.1399,10343.3,3825.6299,10184.48,3704.1499,10070.22,3679.96,10036.2,3699.1799,9998.9502,3739.6899,9968.3604,3792.3301,10016.12,4019.4399,10238.8};
		ilsTaxiIn[]={4019.4399,10238.8,4281.73,10501.95,4303.8101,10523.76,4279.0898,10554.57,4246.9702,10581.09,4213.98,10572.21};
		drawTaxiway=0;
		class SecondaryAirports
		{
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
		noDetailDist=65;
		fullDetailDist=10;
		midDetailTexture="DZ\worlds\enoch\data\enoch_middle_mco.paa";
		terrainNormalTexture="DZ\worlds\enoch\data\enoch_global_nohq.paa";
		heightBlendingMode=1;
		bicubicMode=1;
		class UsedTerrainMaterials
		{
			material0="DZ\surfaces_bliss\data\terrain\en_deforested.rvmat";
			material1="DZ\surfaces_bliss\data\terrain\en_flowers1.rvmat";
			material2="DZ\surfaces_bliss\data\terrain\en_flowers2.rvmat";
			material3="DZ\surfaces_bliss\data\terrain\en_flowers3.rvmat";
			material4="DZ\surfaces_bliss\data\terrain\en_forest_con.rvmat";
			material5="DZ\surfaces_bliss\data\terrain\en_forest_dec.rvmat";
			material6="DZ\surfaces_bliss\data\terrain\en_grass1.rvmat";
			material7="DZ\surfaces_bliss\data\terrain\en_grass2.rvmat";
			material8="DZ\surfaces_bliss\data\terrain\en_soil.rvmat";
			material9="DZ\surfaces_bliss\data\terrain\en_stones.rvmat";
			material10="DZ\surfaces_bliss\data\terrain\en_stubble.rvmat";
			material11="DZ\surfaces_bliss\data\terrain\en_tarmac_old.rvmat";
		};
		oceanMaterial="dz\worlds\enoch\data\enoch_riversea.emat";
		oceanNiceMaterial="dz\worlds\enoch\data\enoch_riversea.emat";
		oceanStormMaterial="dz\worlds\enoch\data\enoch_riversea.emat";
		class Weather: Weather
		{
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					overcast=0.07;
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
					overcast=0.1;
					lightingOvercast=0.15000001;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloud="DZ\worlds\enoch\data\Cloud_Stage10_Cumulus_en_sky.paa";
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
				class Weather3: Weather3
				{
					overcast=0.16;
					lightingOvercast=0.15000001;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloud="DZ\worlds\enoch\data\Cloud_Stage11_Cumulus_en_sky.paa";
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
				class Weather4: Weather4
				{
					overcast=0.22;
					lightingOvercast=0.15000001;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloud="DZ\worlds\enoch\data\Cloud_Stage12_Cumulus_en_sky.paa";
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
				class Weather5: Weather5
				{
					overcast=0.28;
					lightingOvercast=0.15000001;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloud="DZ\worlds\enoch\data\Cloud_Stage13_Cumulus_en_sky.paa";
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
				class Weather6: Weather6
				{
					overcast=0.34;
					lightingOvercast=0.15000001;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloud="DZ\worlds\enoch\data\Cloud_Stage14_Cumulus_en_sky.paa";
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
				class Weather7: Weather7
				{
					overcast=0.40000001;
					lightingOvercast=0.15000001;
					sky="#(argb,8,8,3)color(0.45098,0.490196,0.611765,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\enoch\data\Sky_Stage10_Cirrus_en_sky.paa";
					cloud="DZ\worlds\enoch\data\Cloud_Stage15_Cumulus_en_sky.paa";
					cloudClip=0.80000001;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage01_ClearHills_sky.paa";
					horizonClip=0.80000001;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.80000001;
					godrayStrength=0.15000001;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather8: Weather8
				{
					overcast=0.46000001;
					lightingOvercast=0.15000001;
					sky="#(argb,8,8,3)color(0.45098,0.490196,0.611765,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\enoch\data\Sky_Stage10_Cirrus_en_sky.paa";
					cloud="DZ\worlds\enoch\data\Cloud_Stage16_Cumulus_en_sky.paa";
					cloudClip=0.80000001;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage01_ClearHills_sky.paa";
					horizonClip=0.80000001;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.64999998;
					godrayStrength=0.15000001;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather9: Weather9
				{
					overcast=0.51999998;
					lightingOvercast=0.30000001;
					sky="#(argb,8,8,3)color(0.45098,0.490196,0.611765,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\enoch\data\Sky_Stage10_Cirrus_en_sky.paa";
					cloud="DZ\worlds\enoch\data\Cloud_Stage16_Cumulus_en_sky.paa";
					cloudClip=0.80000001;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage01_ClearHills_sky.paa";
					horizonClip=0.80000001;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.60000002;
					godrayStrength=0.1;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather10: Weather10
				{
					overcast=0.57999998;
					lightingOvercast=0.57999998;
					sky="#(argb,8,8,3)color(0.45098,0.490196,0.611765,1.0,CO)";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage20_Altostratus_sky.paa";
					skyR="DZ\data\data\sky_semicloudy_lco.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip=0;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage02_FoggyHills_sky.paa";
					horizonClip=0;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.40000001;
					godrayStrength=0;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather11: Weather11
				{
					overcast=0.77999997;
					lightingOvercast=1;
					sky="#(argb,8,8,3)color(0.141176,0.168627,0.215686,1.0,CO)";
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
				class Weather12: Weather12
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
				Item1[]={500,0.059999999,0.93000001,0.13,1};
				Item2[]={1100,0.5,0.2,0.1,1};
				Item3[]={1300,0.0099999998,0.89999998,0.050000001,1};
				UseDynamic=1;
			};
		};
		volFogOffset=170;
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
			class Bielawa
			{
				name="Bielawa";
				position[]={1573.45,9677.4502};
				type="Village";
			};
			class Lukow
			{
				name="Lukow";
				position[]={3529.6499,11966.53};
				type="Village";
			};
			class Gliniska
			{
				name="Gliniska";
				position[]={4992.6201,9921.7402};
				type="Village";
			};
			class Brena
			{
				name="Brena";
				position[]={6617.6299,11211.03};
				type="City";
			};
			class Tarnow
			{
				name="Tarnow";
				position[]={9328.3096,10904.8};
				type="City";
			};
			class Sitnik
			{
				name="Sitnik";
				position[]={11502.31,9573.0098};
				type="Village";
			};
			class Borek
			{
				name="Borek";
				position[]={9807.4902,8495.0703};
				type="Village";
			};
			class Zapadlisko
			{
				name="Zapadlisko";
				position[]={8058.25,8711.7598};
				type="Village";
			};
			class Nidek
			{
				name="Nidek";
				position[]={6128.8901,8013.3398};
				type="Village";
			};
			class Topolin
			{
				name="Topolin";
				position[]={1858.8199,7330.8701};
				type="City";
			};
			class Adamow
			{
				name="Adamów";
				position[]={3076.3101,6851.2598};
				type="Village";
			};
			class Muratyn
			{
				name="Muratyn";
				position[]={4567.5,6384.3999};
				type="Village";
			};
			class Radunin
			{
				name="Radunin";
				position[]={7298.3799,6491.8999};
				type="City";
			};
			class Lembork
			{
				name="Lembork";
				position[]={8680.4697,6635.7002};
				type="Village";
			};
			class Gieraltow
			{
				name="Gieraltów";
				position[]={11240.02,4380.3701};
				type="Village";
			};
			class Nadbor
			{
				name="Nadbór";
				position[]={6109.5,3983.1699};
				type="City";
			};
			class Zalesie
			{
				name="Zalesie";
				position[]={896.08002,5536.1201};
				type="Village";
			};
			class Huta
			{
				name="Huta";
				position[]={5141.4702,5472.7798};
				type="Village";
			};
			class Radacz
			{
				name="Radacz";
				position[]={4007.78,7939.9102};
				type="Village";
			};
			class Olszanka
			{
				name="Olszanka";
				position[]={4819.0298,7674.1299};
				type="Village";
			};
			class Lipina
			{
				name="Lipina";
				position[]={5941.8701,6820.0098};
				type="Village";
			};
			class Kolembrody
			{
				name="Kolembrody";
				position[]={8416.9502,11981.93};
				type="Village";
			};
			class Karlin
			{
				name="Karlin";
				position[]={10072.74,6956.96};
				type="Village";
			};
			class Sobotka
			{
				name="Sobotka";
				position[]={6256.9399,10252.92};
				type="Village";
			};
			class Roztoka
			{
				name="Roztoka";
				position[]={7695.2798,5317.4702};
				type="Village";
			};
			class Polana
			{
				name="Polana";
				position[]={3279.6101,2132.1499};
				type="Village";
			};
			class Dolnik
			{
				name="Dolnik";
				position[]={11312.39,655.72998};
				type="Village";
			};
			class Sowa
			{
				name="Sowa";
				position[]={11662.77,12064.33};
				type="Hill";
			};
			class Krsnik
			{
				name="Krsnik";
				position[]={7874.9302,10081.25};
				type="Hill";
			};
			class Dambog
			{
				name="Dambog";
				position[]={577.26001,1124.6899};
				type="Hill";
			};
			class Skala
			{
				name="Skala";
				position[]={2999.25,1956.0699};
				type="Hill";
			};
			class Swarog
			{
				name="Swarog";
				position[]={4854.98,2224.27};
				type="Hill";
			};
			class Rodzanica
			{
				name="Rodzanica";
				position[]={8881.54,2041.96};
				type="Hill";
			};
			class Bagno
			{
				name="Bagno";
				position[]={11822.81,11134.51};
				type="Local";
			};
			class Wrzeszcz
			{
				name="Wrzeszcz";
				position[]={9043.25,4438.48};
				type="Local";
			};
			class drewniki
			{
				name="Drewniki";
				position[]={5834.7202,5092.8901};
				type="Local";
			};
			class kulno
			{
				name="Kulno";
				position[]={11150.02,2391.5};
				type="Local";
			};
			class Hrud
			{
				name="Hrud";
				position[]={6452.5,9371.1299};
				type="Local";
			};
			class Jantar
			{
				name="Jantar";
				position[]={3532.3501,8955.1396};
				type="Marine";
			};
			class Grabinskie
			{
				name="Grabinskie";
				position[]={11249.24,10993.21};
				type="Marine";
			};
			class Wolisko
			{
				name="Wolisko";
				position[]={12368.47,10883.96};
				type="Marine";
			};
			class Sitnickie
			{
				name="Sitnickie";
				position[]={11411.91,10439.6};
				type="Marine";
			};
			class Grabin
			{
				name="Grabin";
				position[]={10666.22,11025.57};
				type="Village";
			};
			class Branzow_castle
			{
				name="$STR_CfgWorlds_Enoch_BranzowCastle";
				position[]={1072.54,11418.78};
				type="Ruin";
			};
			class Piorun
			{
				name="Piorun";
				position[]={645.60999,12158.6};
				type="Hill";
			};
			class Jezurow
			{
				name="Jezurów";
				position[]={2097.76,2355.8701};
				type="Local";
			};
			class Tymbark
			{
				name="Tymbark";
				position[]={2902.45,1221.25};
				type="Local";
			};
			class Hedrykow
			{
				name="Hedryków";
				position[]={4512.98,4795.5098};
				type="Local";
			};
			class Widok
			{
				name="Widok";
				position[]={10238.53,2143.5801};
				type="Local";
			};
			class Kopa
			{
				name="Kopa";
				position[]={5518.8101,8767.6104};
				type="Hill";
			};
			class Quarry_Max
			{
				name="Kamieniołom Maksymilian";
				position[]={6512.25,4847.8599};
				type="Local";
			};
			class Peklo
			{
				name="Piekło";
				position[]={3323.8601,3717.3};
				type="Local";
			};
			class Sarnowek
			{
				name="Sarnówek";
				position[]={3308.0601,4970.25};
				type="Village";
			};
			class Konopki
			{
				name="Konopki";
				position[]={11489.57,2897.9299};
				type="Village";
			};
			class Pionier
			{
				name="Pionier";
				position[]={1341.45,4867.1602};
				type="Camp";
			};
			class Potoki
			{
				name="Potoki";
				position[]={11633.87,1947.2};
				type="Camp";
			};
			class Rumianek
			{
				name="Rumianek";
				position[]={11775.6,5487.0601};
				type="Camp";
			};
			class Lawenda
			{
				name="Lawenda";
				position[]={813.65002,8606.3398};
				type="Camp";
			};
			class Tymianka
			{
				name="Tymianka";
				position[]={11351.73,10062.73};
				type="Camp";
			};
			class Pulkrabiec
			{
				name="Półkrabiec";
				position[]={11871.31,6580.2202};
				type="Ruin";
			};
		};
		class Ambient
		{
		};
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class EnochIntro
		{
			directory="DZ\worlds\enoch\data\scenes\intro.Enoch";
		};
	};
};
