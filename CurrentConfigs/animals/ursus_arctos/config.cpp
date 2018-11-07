////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:02:20 2018 : 'file' last modified on Wed Aug 22 14:53:49 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\animals\ursus_arctos\config.bin{
class CfgPatches
{
	class DZ_Animals_ursus_arctos
	{
		units[] = {"Animal_UrsusArctos"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_UrsusArctos: AnimalBase
	{
		class SoundEnvironExt
		{
			normal[] = {{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_b_0",1,1,50}}};
			normalExt[] = {{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_b_0",1,1,50}}};
			concrete_int[] = {{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\concrete\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\concrete\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\concrete\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\concrete\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\concrete\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\concrete\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\concrete\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\concrete\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\concrete\rest2stand_b_0",1,1,50}}};
			concrete_ext[] = {{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\concrete\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\concrete\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\concrete\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\concrete\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\concrete\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\concrete\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\concrete\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\concrete\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\concrete\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\concrete\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\concrete\rest2stand_b_0",1,1,50}}};
			dirt[] = {{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\dirt\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\dirt\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\dirt\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\dirt\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\dirt\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\dirt\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\dirt\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\dirt\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\dirt\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\dirt\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\dirt\rest2stand_b_0",1,1,50}}};
			forest[] = {{"\dz\sounds\effects\animals\movement\paw_big\forest\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\forest\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\forest\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\forest\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\forest\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\forest\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\forest\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\forest\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\forest\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\forest\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\forest\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\forest\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\forest\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\forest\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\forest\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\forest\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\forest\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\forest\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\forest\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\forest\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\forest\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\forest\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\forest\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\forest\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\forest\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\forest\rest2stand_b_0",1,1,50}}};
			grass[] = {{"\dz\sounds\effects\animals\movement\paw_big\grass\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\grass\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\grass\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\grass\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\grass\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\grass\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\grass\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\grass\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\grass\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\grass\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\grass\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\grass\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\grass\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\grass\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\grass\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\grass\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\grass\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\grass\rest2stand_b_0",1,1,50}}};
			drygrass[] = {{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\grass_dry\rest2stand_b_0",1,1,50}}};
			gravel[] = {{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\gravel\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\gravel\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\gravel\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\gravel\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\gravel\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\gravel\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\gravel\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\gravel\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\gravel\rest2stand_b_0",1,1,50}}};
			gravel2[] = {{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\gravel\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\gravel\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\gravel\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\gravel\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\gravel\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\gravel\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\gravel\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\gravel\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\gravel\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\gravel\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\gravel\rest2stand_b_0",1,1,50}}};
			metal[] = {{"\dz\sounds\effects\animals\movement\paw_big\metal\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\metal\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\metal\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\metal\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\metal\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\metal\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\metal\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\metal\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\metal\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\metal\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\metal\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\metal\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\metal\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\metal\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\metal\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\metal\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\metal\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\metal\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\metal\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\metal\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\metal\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\metal\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\metal\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\metal\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\metal\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\metal\rest2stand_b_0",1,1,50}}};
			mud[] = {{"\dz\sounds\effects\animals\movement\paw_big\mud\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\mud\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\mud\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\mud\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\mud\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\mud\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\mud\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\mud\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\mud\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\mud\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\mud\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\mud\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\mud\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\mud\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\mud\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\mud\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\mud\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\mud\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\mud\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\mud\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\mud\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\mud\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\mud\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\mud\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\mud\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\mud\rest2stand_b_0",1,1,50}}};
			road[] = {{"\dz\sounds\effects\animals\movement\paw_big\road\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\road\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\road\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\road\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\road\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\road\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\road\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\road\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\road\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\road\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\road\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\road\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\road\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\road\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\road\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\road\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\road\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\road\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\road\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\road\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\road\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\road\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\road\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\road\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\road\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\road\rest2stand_b_0",1,1,50}}};
			rock[] = {{"\dz\sounds\effects\animals\movement\paw_big\rock\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\rock\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\rock\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\rock\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\rock\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\rock\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\rock\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\rock\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\rock\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\rock\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\rock\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\rock\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\rock\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\rock\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\rock\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\rock\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\rock\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\rock\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\rock\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\rock\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\rock\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\rock\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\rock\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\rock\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\rock\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\rock\rest2stand_b_0",1,1,50}}};
			sand[] = {{"\dz\sounds\effects\animals\movement\paw_big\sand\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\sand\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\sand\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\sand\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\sand\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\sand\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\sand\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\sand\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\sand\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\sand\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\sand\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\sand\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\sand\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\sand\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\sand\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\sand\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\sand\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\sand\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\sand\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\sand\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\sand\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\sand\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\sand\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\sand\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\sand\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\sand\rest2stand_b_0",1,1,50}}};
			water[] = {{"\dz\sounds\effects\animals\movement\paw_big\water\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\water\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\water\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\water\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\water\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\water\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\water\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\water\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\water\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\water\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\water\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\water\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\water\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\water\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\water\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\water\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\water\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\water\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\water\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\water\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\water\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\water\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\water\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\water\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\water\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\water\rest2stand_b_0",1,1,50}}};
			wood[] = {{"\dz\sounds\effects\animals\movement\paw_big\wood\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\wood\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\wood\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\wood\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\wood\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\wood\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\wood\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\wood\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\wood\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\wood\rest2stand_b_0",1,1,50}}};
			wood_int[] = {{"\dz\sounds\effects\animals\movement\paw_big\wood\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\wood\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\wood\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\wood\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\wood\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\wood\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\wood\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\wood\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\wood\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\wood\rest2stand_b_0",1,1,50}}};
			parkety[] = {{"\dz\sounds\effects\animals\movement\paw_big\wood\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\wood\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\wood\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\wood\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\wood\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\wood\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\wood\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\wood\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\wood\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\wood\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\wood\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\wood\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\wood\rest2stand_b_0",1,1,50}}};
			steel[] = {{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_b_0",1,1,50}}};
			hallway[] = {{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_b_0",1,1,50}}};
			carpet[] = {{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_b_0",1,1,50}}};
			wave_plate[] = {{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_b_0",1,1,50}}};
			lepenka[] = {{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_b_0",1,1,50}}};
			tasky[] = {{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",1,1,50}},{"pb_stepl",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",1,1,50}},{"pb_stepr",{"\dz\sounds\effects\animals\movement\paw_big\default\step_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_1",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_2",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_3",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_4",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_5",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_6",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_7",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_8",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_9",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_10",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_11",1,1,50}},{"pb_grazing",{"\dz\sounds\effects\animals\movement\paw_big\default\grazing_12",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_0",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_1",1,1,50}},{"pb_bodyfall",{"\dz\sounds\effects\animals\movement\paw_big\default\bodyfall_2",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\settle_0",1,1,50}},{"pb_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_a_0",1,1,50}},{"pb_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_b_0",1,1,50}},{"pb_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_big\default\stand2rest_c_0",1,1,50}},{"pb_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_a_0",1,1,50}},{"pb_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_big\default\rest2stand_b_0",1,1,50}}};
		};
		newAnimSystemSoundStepOverride = "walk";
		scope = 2;
		model = "\DZ\animals\ursus_arctos\ursus_arctos.p3d";
		armor = 1.2;
		displayName = "$STR_CfgVehicles_Animal_UrsusArctos0";
		moves = "CfgMovesUrsusArctos";
		class AIAgentTemplate
		{
			name = "bear_2";
			HeadLookBoneName = "pin_lookat";
			teamName = "BigGame";
			defaultGroupTemplateName = "DZDeerGroupBeh";
			class BehaviourHLDeer
			{
				instantAlertRangeMin = 10.0;
				instantAlertRangeMax = 20.0;
				instantAlertStrength = 7.0;
				class SlotCalmResting
				{
					class BehaviourCalm
					{
						travelingMode = 0;
						grazeOnSpotWeight = 20;
						grazeWalkingWeight = 20;
						restWeight = 10;
						travelWeight = 0;
						grazeOnSpotDurationMin = 20;
						grazeOnSpotDurationMax = 25;
						grazeWalkingDurationMin = 20;
						grazeWalkingDurationMax = 25;
						restingDurationMin = 25;
						restingDurationMax = 50;
						travelingDurationMin = 0;
						travelingDurationMax = 0;
						grazeWalkingSpeed = 0.33;
						travelingWalkingSpeed = 1.0;
						safetyIntervalMin = 13;
						safetyIntervalMax = 27;
						safetyDurationMin = 8;
						safetyDurationMax = 12;
						safetyLookAngleMin = 0.1;
						safetyLookAngleMax = 1.5;
						safetyLookAngleChangeInterval = 7;
						class GrazeMovement
						{
							maxSpeed = 0.33;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 1.0;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
						class CatchUpMovement
						{
							maxSpeed = 6.0;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
					};
				};
				class SlotCalmGrazing
				{
					class BehaviourCalm
					{
						travelingMode = 0;
						grazeOnSpotWeight = 20;
						grazeWalkingWeight = 20;
						restWeight = 40;
						travelWeight = 0;
						grazeOnSpotDurationMin = 5;
						grazeOnSpotDurationMax = 10;
						grazeWalkingDurationMin = 5;
						grazeWalkingDurationMax = 10;
						restingDurationMin = 5;
						restingDurationMax = 10;
						travelingDurationMin = 0;
						travelingDurationMax = 0;
						grazeWalkingSpeed = 0.33;
						travelingWalkingSpeed = 1.0;
						safetyIntervalMin = 30;
						safetyIntervalMax = 40;
						safetyDurationMin = 5;
						safetyDurationMax = 10;
						safetyLookAngleMin = 0.3;
						safetyLookAngleMax = 0.7;
						safetyLookAngleChangeInterval = 3;
						class GrazeMovement
						{
							maxSpeed = 0.33;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 1.0;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
						class CatchUpMovement
						{
							maxSpeed = 6.0;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
					};
				};
				class SlotCalmTravelling
				{
					class BehaviourCalm
					{
						travelingMode = 1;
						grazeOnSpotWeight = 10;
						grazeWalkingWeight = 10;
						restWeight = 0;
						travelWeight = 50;
						grazeOnSpotDurationMin = 5;
						grazeOnSpotDurationMax = 10;
						grazeWalkingDurationMin = 5;
						grazeWalkingDurationMax = 10;
						restingDurationMin = 5;
						restingDurationMax = 10;
						travelingDurationMin = 0;
						travelingDurationMax = 0;
						grazeWalkingSpeed = 0.33;
						travelingWalkingSpeed = 1.0;
						safetyIntervalMin = 15;
						safetyIntervalMax = 20;
						safetyDurationMin = 10;
						safetyDurationMax = 10;
						safetyLookAngleMin = 0.3;
						safetyLookAngleMax = 0.7;
						safetyLookAngleChangeInterval = 3;
						class GrazeMovement
						{
							maxSpeed = 0.33;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 1.0;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
						class CatchUpMovement
						{
							maxSpeed = 6.0;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
					};
				};
				class SlotDrinking
				{
					class BehaviourCalm
					{
						travelingMode = 1;
						grazeOnSpotWeight = 10;
						grazeWalkingWeight = 10;
						restWeight = 10;
						travelWeight = 0;
						drinkingWeight = 20;
						grazeOnSpotDurationMin = 10;
						grazeOnSpotDurationMax = 10;
						grazeWalkingDurationMin = 10;
						grazeWalkingDurationMax = 10;
						restingDurationMin = 0;
						restingDurationMax = 0;
						travelingDurationMin = 20;
						travelingDurationMax = 20;
						drinkingDurationMin = 15;
						drinkingDurationMax = 20;
						grazeWalkingSpeed = 0.179;
						travelingWalkingSpeed = 1.196;
						safetyIntervalMin = 15;
						safetyIntervalMax = 20;
						safetyDurationMin = 10;
						safetyDurationMax = 10;
						safetyLookAngleMin = 0.3;
						safetyLookAngleMax = 0.7;
						safetyLookAngleChangeInterval = 3;
						class GrazeMovement
						{
							maxSpeed = 0.33;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 1.0;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
						class CatchUpMovement
						{
							maxSpeed = 6.0;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
					};
				};
				class SlotNonSpecificThreat
				{
					class BehaviourNonSpecificThreat
					{
						lookWeight = 30;
						sniffWeight = 0;
						sniffDuration = 0.5;
						lookDuration = 6.0;
					};
				};
				class SlotSpecificThreat
				{
					class BehaviourSpecificThreat
					{
						lookWeight = 30;
						walkWeight = 10;
						walkSpeed = 1.0;
						maxRotateAngle = 2.5;
						walkDuration = 1.5;
						lookDuration = 6.0;
					};
				};
				class SlotAlerted
				{
					class BehaviourFleeFromTargets
					{
						runSpeed = 9.3;
						class RunMovement
						{
							maxSpeed = 9.3;
							minSpeed = 9.3;
							acceleration = 5.0;
							maxAngleSpeed = 180.0;
							slowRadius = 5.0;
							stopRadius = 3.0;
							slowToTurn = 1;
							smoothAcceleration = 0;
						};
					};
				};
				class AlertSystem
				{
					visionToAlertMultiplier = 7;
					noiseToAlertMultiplier = 1.0;
					damageToAlertMultiplier = 1e+006;
					class Calm
					{
						dropSpeed = 5;
						dropDelay = 1;
						maxAlertValue = 25;
					};
					class NonSpecificThreat
					{
						dropSpeed = 3;
						dropDelay = 5;
						maxAlertValue = 50;
					};
					class SpecificThreat
					{
						dropSpeed = 2;
						dropDelay = 8;
						maxAlertValue = 75;
					};
					class Alerted
					{
						dropSpeed = 5;
						dropDelay = 5;
						maxAlertValue = 100;
					};
				};
			};
			class NoiseSystemParams
			{
				rangeMin = 10.0;
				rangeMax = 60.0;
				rangeShotMin = 100.0;
				rangeShotMax = 300.0;
				class NoiseStrengthTeamMultipliers
				{
					BigGame = 0.8;
					Zombies = 1.0;
					Player = 1.0;
				};
			};
			class TargetSystemDZBase
			{
				class VisionTeamMultipliers
				{
					BigGame = 0.8;
					Zombies = 1.0;
					Player = 1.0;
				};
				visionManSizeStand = 1.0;
				visionManSizeCrouch = 0.8;
				visionManSizeProne = 0.45;
				visionAngularSpeedMin = 0.1;
				visionAngularSpeedMax = 0.5;
				visionAngularSpeedMaxMult = 1.5;
				visionRangeMin = 20;
				visionRangeMax = 50;
				visionFov = 1.2;
				visionPeripheralRangeMin = 0;
				visionPeripheralRangeMax = 20;
				visionPeripheralFov = 3.15;
				visionNightMinMult = 1.0;
				visionNightMaxMult = 0.5;
				visionRainMinMult = 1.0;
				visionRainMaxMult = 0.8;
				visionFogMinMult = 1.0;
				visionFogMaxMult = 0.4;
			};
		};
		class AnimSystem
		{
			meshObject = "dz\animals\ursus_arctos\data\ursus_arctos_skeleton.xob";
			animGraph = "dz\animals\animations\bear_skeleton\AG_bear_skeleton.ag";
			class AnimEventSounds
			{
				class bear_breath
				{
					sounds[] = {"DZ\sounds\effects\animals\bear\breath\breath_0","DZ\sounds\effects\animals\bear\breath\breath_1","DZ\sounds\effects\animals\bear\breath\breath_2","DZ\sounds\effects\animals\bear\breath\breath_3","DZ\sounds\effects\animals\bear\breath\breath_4","DZ\sounds\effects\animals\bear\breath\breath_5","DZ\sounds\effects\animals\bear\breath\breath_6"};
					volume = 1;
					distance = 70;
				};
				class bear_growl
				{
					sounds[] = {"DZ\sounds\effects\animals\bear\growl\growl_0","DZ\sounds\effects\animals\bear\growl\growl_1","DZ\sounds\effects\animals\bear\growl\growl_2","DZ\sounds\effects\animals\bear\growl\growl_3","DZ\sounds\effects\animals\bear\growl\growl_4","DZ\sounds\effects\animals\bear\growl\growl_5","DZ\sounds\effects\animals\bear\growl\growl_6","DZ\sounds\effects\animals\bear\growl\growl_7","DZ\sounds\effects\animals\bear\growl\growl_8","DZ\sounds\effects\animals\bear\growl\growl_9","DZ\sounds\effects\animals\bear\growl\growl_10","DZ\sounds\effects\animals\bear\growl\growl_11"};
					volume = 1;
					distance = 70;
				};
				class bear_mumble
				{
					sounds[] = {"DZ\sounds\effects\animals\bear\mumble\mumble_0","DZ\sounds\effects\animals\bear\mumble\mumble_1","DZ\sounds\effects\animals\bear\mumble\mumble_2","DZ\sounds\effects\animals\bear\mumble\mumble_3","DZ\sounds\effects\animals\bear\mumble\mumble_4","DZ\sounds\effects\animals\bear\mumble\mumble_5","DZ\sounds\effects\animals\bear\mumble\mumble_6"};
					volume = 1;
					distance = 70;
				};
				class bear_roar
				{
					sounds[] = {"DZ\sounds\effects\animals\bear\roar\roar_0","DZ\sounds\effects\animals\bear\roar\roar_1","DZ\sounds\effects\animals\bear\roar\roar_2","DZ\sounds\effects\animals\bear\roar\roar_3","DZ\sounds\effects\animals\bear\roar\roar_4","DZ\sounds\effects\animals\bear\roar\roar_5","DZ\sounds\effects\animals\bear\roar\roar_6"};
					volume = 1;
					distance = 70;
				};
				class bear_sigh
				{
					sounds[] = {"DZ\sounds\effects\animals\bear\sigh\sigh_0","DZ\sounds\effects\animals\bear\sigh\sigh_1","DZ\sounds\effects\animals\bear\sigh\sigh_2","DZ\sounds\effects\animals\bear\sigh\sigh_3","DZ\sounds\effects\animals\bear\sigh\sigh_4","DZ\sounds\effects\animals\bear\sigh\sigh_5","DZ\sounds\effects\animals\bear\sigh\sigh_6"};
					volume = 1;
					distance = 70;
				};
				class bear_sigh_long
				{
					sounds[] = {"DZ\sounds\effects\animals\bear\sigh_long\sigh_long_0","DZ\sounds\effects\animals\bear\sigh_long\sigh_long_1","DZ\sounds\effects\animals\bear\sigh_long\sigh_long_2","DZ\sounds\effects\animals\bear\sigh_long\sigh_long_3"};
					volume = 1;
					distance = 70;
				};
				class bear_sigh_short
				{
					sounds[] = {"DZ\sounds\effects\animals\bear\sigh_short\sigh_short_0","DZ\sounds\effects\animals\bear\sigh_short\sigh_short_1","DZ\sounds\effects\animals\bear\sigh_short\sigh_short_2","DZ\sounds\effects\animals\bear\sigh_short\sigh_short_3","DZ\sounds\effects\animals\bear\sigh_short\sigh_short_4","DZ\sounds\effects\animals\bear\sigh_short\sigh_short_5"};
					volume = 1;
					distance = 70;
				};
				class bear_snarl
				{
					sounds[] = {"DZ\sounds\effects\animals\bear\snarl\snarl_0","DZ\sounds\effects\animals\bear\snarl\snarl_1","DZ\sounds\effects\animals\bear\snarl\snarl_2"};
					volume = 1;
					distance = 70;
				};
				class bear_snarl_long
				{
					sounds[] = {"DZ\sounds\effects\animals\bear\snar_longl\snarl_long_0","DZ\sounds\effects\animals\bear\snar_longl\snarl_long_1","DZ\sounds\effects\animals\bear\snar_longl\snarl_long_2"};
					volume = 1;
					distance = 70;
				};
				class bear_snarl_snort
				{
					sounds[] = {"DZ\sounds\effects\animals\bear\snort\snort_0","DZ\sounds\effects\animals\bear\snort\snort_1"};
					volume = 1;
					distance = 70;
				};
			};
		};
	};
};
//};
