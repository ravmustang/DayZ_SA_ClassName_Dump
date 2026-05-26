class CfgPatches
{
	class DZ_Surfaces_Sakhal
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Surfaces"
		};
	};
};
class CfgWorlds
{
	class DefaultWorld;
	class CAWorld: DefaultWorld
	{
		class DefaultClutter;
		class Clutter
		{
			class BrownGrass_Tall: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_BrownGrass_Tall.p3d";
				scaleMin=0.75;
				scaleMax=1;
				noSatColor=0;
			};
			class BrownGrass_Tall2: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_BrownGrass_Tall2.p3d";
				scaleMin=0.75;
				scaleMax=1;
				noSatColor=0;
			};
			class BrownGrass_Lump: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_BrownGrass_Lump.p3d";
				scaleMin=0.64999998;
				scaleMax=0.85000002;
				noSatColor=0;
			};
			class BrownGrass: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_BrownGrass.p3d";
				scaleMin=0.75;
				scaleMax=1.25;
				noSatColor=0;
			};
			class BrownGrass_Flat: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_BrownGrass_Flat.p3d";
				scaleMin=0.75;
				scaleMax=1;
				noSatColor=0;
			};
			class DryThistle: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_DryThistle.p3d";
				scaleMin=0.85000002;
				scaleMax=1.25;
				noSatColor=1;
			};
			class GreenGrass_Tall: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_GreenGrass_Tall.p3d";
				scaleMin=0.85000002;
				scaleMax=1.25;
				noSatColor=0;
			};
			class GreenGrass_Tall2: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_GreenGrass_Tall2.p3d";
				scaleMin=0.85000002;
				scaleMax=1.25;
				noSatColor=0;
			};
			class BirchLeaves: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_BirchLeaves.p3d";
				scaleMin=0.85000002;
				scaleMax=1.25;
				noSatColor=1;
			};
			class BirchLeaves_Sparse: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_BirchLeaves_Sparse.p3d";
				scaleMin=0.85000002;
				scaleMax=1.25;
				noSatColor=1;
			};
			class Twigs1: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_Twigs1.p3d";
				scaleMin=0.75;
				scaleMax=1;
				noSatColor=0;
			};
			class Twigs2: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_Twigs2.p3d";
				scaleMin=0.75;
				scaleMax=1;
				noSatColor=0;
			};
			class PiceaCluster: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_PiceaCluster.p3d";
				scaleMin=0.64999998;
				scaleMax=1;
				noSatColor=0;
			};
			class PiceaCones: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_PiceaCones.p3d";
				scaleMin=0.85000002;
				scaleMax=1;
				noSatColor=1;
			};
			class Stones: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_Stones.p3d";
				scaleMin=0.44999999;
				scaleMax=0.60000002;
				noSatColor=1;
			};
			class Stones_small: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_Stones_small.p3d";
				scaleMin=0.44999999;
				scaleMax=0.60000002;
				noSatColor=1;
			};
			class VolcanicStones_Red: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_VolcanicStones_Red.p3d";
				scaleMin=0.44999999;
				scaleMax=0.60000002;
				noSatColor=0;
			};
			class VolcanicStones_Yellow: DefaultClutter
			{
				model="dz\plants_sakhal\clutter\c_VolcanicStones_Yellow.p3d";
				scaleMin=0.44999999;
				scaleMax=0.60000002;
				noSatColor=0;
			};
		};
	};
};
class CfgSurfaceCharacters
{
	class Sakhal_BrownGrass
	{
		probability[]={0.5,0.34999999,0.050000001,0.050000001,0.029999999,0.02};
		names[]=
		{
			"BrownGrass",
			"BrownGrass_Flat",
			"BrownGrass_Tall",
			"BrownGrass_Tall2",
			"DryThistle",
			"BrownGrass_Lump"
		};
	};
	class Sakhal_GreenGrass
	{
		probability[]={0.69999999,0.2,0.1};
		names[]=
		{
			"GreenGrass_Tall",
			"GreenGrass_Tall2",
			"DryThistle"
		};
	};
	class Sakhal_BirchForest
	{
		probability[]={0.5,0.1,0.1,0.1,0.1,0.1};
		names[]=
		{
			"BirchLeaves",
			"DryThistle",
			"Twigs1",
			"Twigs2",
			"BrownGrass_Flat",
			"BrownGrass"
		};
	};
	class Sakhal_SpruceForest
	{
		probability[]={0.1,0.40000001,0.2,0.2};
		names[]=
		{
			"PiceaCluster",
			"PiceaCones",
			"Twigs1",
			"Twigs2"
		};
	};
	class Sakhal_SnowForest
	{
		probability[]={0.050000001,0.050000001,0.050000001,0.050000001};
		names[]=
		{
			"PiceaCones",
			"BirchLeaves_Sparse",
			"Twigs1",
			"Twigs2"
		};
	};
	class Sakhal_Gravel
	{
		probability[]={0.059999999,0.1};
		names[]=
		{
			"Stones",
			"Stones_small"
		};
	};
	class Sakhal_VolcanicYellow
	{
		probability[]={0.5};
		names[]=
		{
			"VolcanicStones_Yellow"
		};
	};
	class Sakhal_VolcanicRed
	{
		probability[]={0.5};
		names[]=
		{
			"VolcanicStones_Red"
		};
	};
};
class CfgSurfaces
{
	class DZ_SurfacesInt;
	class DZ_SurfacesExt;
	class sakhal_snow: DZ_SurfacesExt
	{
		files="sakhal_snow_ca*";
		deflection=0.1;
		friction=0.98000002;
		restitution=0.55000001;
		isLiquid=0;
		liquidType=131072;
		wheelParticle="vehicle_wheel_snow";
		stepParticle="step_snow";
		soundEnviron="snow";
		soundHit="snow";
		character="empty";
		footDamage=0.117;
		audibility=0.80000001;
		impact="Hit_Snow";
		isDigable=1;
		isFertile=0;
		digPile="UndergroundStashSnow";
		vpSurface="Snow";
		underObjectDecal="StaticObj_fireplace_spot_snow";
		minTracksAlpha=0.30000001;
	};
	class sakhal_snow_forest: DZ_SurfacesExt
	{
		files="sakhal_snow_forest_ca*";
		deflection=0.1;
		friction=0.98000002;
		restitution=0.55000001;
		wheelParticle="vehicle_wheel_snow";
		stepParticle="step_snow";
		soundEnviron="snow";
		soundHit="snow";
		character="Sakhal_SnowForest";
		footDamage=0.117;
		audibility=0.80000001;
		impact="Hit_Snow";
		isDigable=1;
		isFertile=0;
		toolDamage=1.2;
		digPile="UndergroundStashSnow";
		vpSurface="Snow";
		underObjectDecal="StaticObj_fireplace_spot_snow";
	};
	class sakhal_ice_sea: DZ_SurfacesExt
	{
		files="sakhal_ice_sea*";
		deflection=0.1;
		friction=0.98000002;
		restitution=0.55000001;
		wheelParticle="vehicle_wheel_snow";
		stepParticle="step_snow";
		soundEnviron="ice";
		soundHit="ice";
		character="empty";
		footDamage=0.117;
		audibility=0.80000001;
		impact="Hit_Ice";
		isDigable=0;
		isFertile=0;
		wetnessOnHeatModifier=0.64999998;
		vpSurface="Ice";
	};
	class sakhal_ice_lake: DZ_SurfacesExt
	{
		files="sakhal_ice_lake*";
		deflection=0.1;
		friction=0.98000002;
		restitution=0.55000001;
		soundEnviron="ice";
		soundHit="ice";
		character="empty";
		footDamage=0.117;
		audibility=0.80000001;
		impact="Hit_Ice";
		isDigable=0;
		isFertile=0;
		wetnessOnHeatModifier=1;
		vpSurface="Ice";
		minTracksAlpha=0.94999999;
	};
	class sakhal_grass_brown: DZ_SurfacesExt
	{
		files="sakhal_grass_brown*";
		deflection=0.1;
		friction=0.85000002;
		restitution=0.40000001;
		soundEnviron="grass";
		soundHit="soft_ground";
		character="Sakhal_BrownGrass";
		audibility=0.40000001;
		footDamage=0.023;
		class Visible
		{
			prone=0.2;
			kneel=0.60000002;
			stand=0.80000001;
		};
		impact="Hit_Grass";
		isDigable=1;
		isFertile=1;
		vpSurface="Grass";
		underObjectDecal="StaticObj_fireplace_spot_snow";
	};
	class sakhal_grass_green: DZ_SurfacesExt
	{
		files="sakhal_grass_green*";
		deflection=0.1;
		friction=0.85000002;
		restitution=0.40000001;
		soundEnviron="grass";
		soundHit="soft_ground";
		character="Sakhal_GreenGrass";
		audibility=0.40000001;
		footDamage=0.023;
		class Visible
		{
			prone=0.2;
			kneel=0.60000002;
			stand=0.80000001;
		};
		impact="Hit_Grass";
		isDigable=1;
		isFertile=1;
		vpSurface="Grass";
	};
	class sakhal_forest_birch: DZ_SurfacesExt
	{
		files="sakhal_forest_birch*";
		friction=0.75;
		restitution=0.25999999;
		soundEnviron="forest";
		soundHit="soft_ground";
		character="Sakhal_BirchForest";
		footDamage=0.057999998;
		audibility=0.60000002;
		class Visible
		{
			prone=0.1;
			kneel=0.30000001;
			stand=0.5;
		};
		impact="Hit_Foliage";
		isDigable=1;
		isFertile=1;
		toolDamage=1.2;
		windModifier=0.75;
		vpSurface="Forest";
	};
	class sakhal_forest_spruce: DZ_SurfacesExt
	{
		files="sakhal_forest_spruce*";
		friction=0.75;
		restitution=0.25999999;
		soundEnviron="forest";
		soundHit="soft_ground";
		character="Sakhal_SpruceForest";
		footDamage=0.057999998;
		audibility=0.60000002;
		class Visible
		{
			prone=0.1;
			kneel=0.30000001;
			stand=0.5;
		};
		impact="Hit_Foliage";
		isDigable=1;
		isFertile=1;
		toolDamage=1.2;
		windModifier=0.75;
		vpSurface="Forest";
	};
	class sakhal_beach: DZ_SurfacesExt
	{
		files="sakhal_beach*";
		deflection=0.1;
		friction=0.75;
		restitution=0.34;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="soft_ground";
		character="Sakhal_Gravel";
		footDamage=0.057999998;
		audibility=0.69999999;
		impact="Hit_Dirt";
		isDigable=1;
		isFertile=0;
		toolDamage=0.80000001;
		vpSurface="Dirt";
	};
	class sakhal_gravel: DZ_SurfacesExt
	{
		files="sakhal_gravel*";
		deflection=0.1;
		friction=0.75;
		restitution=0.34;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="soft_ground";
		character="Sakhal_Gravel";
		footDamage=0.057999998;
		audibility=0.80000001;
		impact="Hit_Dirt";
		isDigable=1;
		isFertile=0;
		toolDamage=1.2;
		vpSurface="Dirt";
	};
	class sakhal_volcanic_red: DZ_SurfacesExt
	{
		files="sakhal_volcanic_red*";
		deflection=0.1;
		friction=0.75;
		restitution=0.34;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="soft_ground";
		character="Sakhal_VolcanicRed";
		footDamage=0.057999998;
		audibility=0.80000001;
		impact="Hit_Dirt";
		isDigable=1;
		isFertile=0;
		toolDamage=1.2;
		vpSurface="Dirt";
	};
	class sakhal_volcanic_yellow: DZ_SurfacesExt
	{
		files="sakhal_volcanic_yellow*";
		deflection=0.1;
		friction=0.75;
		restitution=0.34;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="soft_ground";
		character="Sakhal_VolcanicYellow";
		footDamage=0.057999998;
		audibility=0.80000001;
		impact="Hit_Dirt";
		isDigable=1;
		isFertile=0;
		toolDamage=1.2;
		vpSurface="Dirt";
	};
	class sakhal_concrete: DZ_SurfacesExt
	{
		files="sakhal_concrete*";
		deflection=0.1;
		friction=0.98000002;
		restitution=0.55000001;
		wheelParticle="vehicle_wheel_asphalt";
		soundEnviron="road";
		soundHit="hard_ground";
		character="empty";
		footDamage=0.117;
		audibility=0.89999998;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class sakhal_hotwater: DZ_SurfacesExt
	{
		files="hot_water_ext*";
		friction=0.89999998;
		restitution=0;
		isLiquid=1;
		liquidType=2097152;
		soundEnviron="water";
		character="Empty";
		impact="Hit_Water";
		isDigable=0;
		isFertile=0;
		audibility=0.69999999;
	};
};
