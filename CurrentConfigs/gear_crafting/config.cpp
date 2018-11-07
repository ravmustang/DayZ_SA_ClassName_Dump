////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:11:48 2018 : 'file' last modified on Wed Aug 22 17:28:32 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_crafting\config.bin{
class CfgPatches
{
	class DZ_Gear_Crafting
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class RecipeToolOnTool;
class CfgRecipes
{
	class LightTorch
	{
		name = "Light Torch";
		tools[] = {"Crafting_Torch","Consumable_Matchbox"};
		condition = "((itemInHands _owner == _tool1) || (isNull itemParent _tool1)) && !(isOn _tool1) && (damage _tool1 < 1) && (quantity _tool2 > 0);";
		action = "_owner playAction 'lightFlare'; _tool2 addQuantity -1; _tool1 powerOn true;";
	};
	class LightTorchDrill
	{
		name = "Light Torch";
		tools[] = {"Crafting_Torch","Crafting_HandDrillKit"};
		condition = "((itemInHands _owner == _tool1) || (isNull itemParent _tool1)) && !(isOn _tool1) && (damage _tool1 < 1) && (damage _tool2 < 1);";
		action = "_owner playAction 'lightFlare';_dmg = damage _tool2 + 0.25; _tool2 setDamage _dmg; if (damage _tool2 >= 1) then {deleteVehicle _tool2}; _tool1 powerOn true;";
	};
	class ExtinguishTorch
	{
		name = "Extinguish Torch";
		tools[] = {"Crafting_Torch","BottleBase"};
		condition = "(isOn _tool1) and (quantity _tool2) >= 100;";
		action = "_tool2 addQuantity -100; _tool1 setVariable ['fire', 0]; _tool1 switchLight 'OFF'; _tool1 powerOn false;";
	};
	class CraftTorch: RecipeToolOnTool
	{
		name = "Craft Torch";
		condition = "(quantity _tool1 > 0) && (quantity _tool2 > 0)";
		tools[] = {"Consumable_Rags","Crafting_WoodenStick"};
		results[] = {"Crafting_Torch"};
		action = "_tool1 addQuantity -1;_tool2 addQuantity -1;if(quantity _tool1 < 1)then{deleteVehicle _tool1};if(quantity _tool2 < 1)then{deleteVehicle _tool2};[_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftTorchSharp: CraftTorch
	{
		tools[] = {"Consumable_Rags","Crafting_SharpStick"};
	};
	class CraftTorchBandage: RecipeToolOnTool
	{
		name = "Craft Torch";
		condition = "(quantity _tool1 > 0) && (quantity _tool2 > 0)";
		tools[] = {"Medical_BandageDressing","Crafting_WoodenStick"};
		results[] = {"Crafting_Torch"};
		action = "_tool1 addQuantity -0.25;_tool2 addQuantity -1;if(quantity _tool1 < 0.25)then{deleteVehicle _tool1};if(quantity _tool2 < 1)then{deleteVehicle _tool2};[_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftTorchSharpBandage: CraftTorch
	{
		tools[] = {"Medical_BandageDressing","Crafting_SharpStick"};
	};
	class CraftTorchLard: RecipeToolOnTool
	{
		name = "Craft Torch";
		condition = "(quantity _tool1 > 0) && (quantity _tool2 >= 0.5)";
		tools[] = {"Crafting_WoodenStick","Food_Lard"};
		results[] = {"Crafting_Torch"};
		action = "_tool1 addQuantity -1;_tool2 addQuantity -0.5;if(quantity _tool1 < 1)then{deleteVehicle _tool1};if(quantity _tool2 <= 0)then{deleteVehicle _tool2};[_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftTorchSharpLard: CraftTorchLard
	{
		tools[] = {"Crafting_SharpStick","Food_Lard"};
	};
	class CraftArrow: RecipeToolOnTool
	{
		name = "Craft Improvised Arrow from %TOOL1 and %TOOL2";
		tools[] = {"Crafting_ChickenFeather","Crafting_SharpStick"};
		results[] = {"Arrows_Primitive"};
		action = "[_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;_result1 setMagazineAmmo 1;_result1 setDamage (damage _tool2);magazineRemoveBullet _tool2; if (magazineAmmo _tool2 < 1) then {deleteVehicle _tool2}; _tool1 addQuantity -1; if (quantity _tool1 < 1) then {deleteVehicle _tool1};";
	};
	class CraftBoneArrow: RecipeToolOnTool
	{
		name = "Craft Bone Arrow from %TOOL1 and %TOOL2";
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && ((damage _tool2) < 1) && ((damage _tool1) < 1)";
		tools[] = {"Arrows_Primitive","Consumable_Bones"};
		results[] = {"Arrows_Boned"};
		action = "[_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;_result1 setMagazineAmmo 1;_result1 setDamage (damage _tool2);_tool2 addQuantity -1; 	if (quantity _tool2 < 1) then {	deleteVehicle _tool2};magazineRemoveBullet _tool1; if (magazineAmmo _tool1 < 1) then {deleteVehicle _tool1};	";
	};
	class CraftBoneHook: RecipeToolOnTool
	{
		name = "Craft Improvised Hook";
		tools[] = {"KnifeBase","Consumable_Bones"};
		results[] = {"Consumable_BoneHook"};
		action = "_tool2 addQuantity -1;if (quantity _tool2 < 1) then {deleteVehicle _tool2};[_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class Craft_BurlapStrips
	{
		name = "Cut into strips";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"KnifeBase"};
		material[] = {"Crafting_BurlapSack"};
		results[] = {"Consumable_BurlapStrips"};
		action = "_result1 setQuantity 1;[_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;_result1 setDamage (damage _material1);";
	};
	class Craft_BurlapStripsBayo: Craft_BurlapStrips
	{
		tools[] = {"Att_Bayonet_M9A1"};
	};
	class Craft_BurlapStripsBayoAK: Craft_BurlapStrips
	{
		tools[] = {"Att_Bayonet_AK"};
	};
	class SharpenStick
	{
		name = "Sharpen a Stick";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"Crafting_WoodenStick","KnifeBase"};
		results[] = {"Crafting_SharpStick"};
		action = "_result1 setMagazineAmmo 1;_result1 setDamage (damage _tool1);if (quantity _tool1 <= 1) then {deleteVehicle _tool1;}else{_tool1 addQuantity -1;};";
	};
	class SharpenSticks
	{
		name = "Sharpen All Sticks";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		material[] = {"Crafting_WoodenStick"};
		tools[] = {"KnifeBase"};
		results[] = {"Crafting_SharpStick"};
		action = "_result1 setMagazineAmmo (quantity _material1);_result1 setDamage (damage _material1);";
	};
	class CombineSmershVest
	{
		name = "Attach Backpack to Vest";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"SmershVest","SmershBackpack"};
		action = "if((count itemsInCargo _tool1) > 0 OR (count itemsInCargo _tool2) > 0)then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;_dt2 = damage _tool2;if((_dt1 == 1) OR (_dt2 == 1))then{[_owner,'It is too damaged to be attached.','colorAction'] call fnc_playerMessage;}else{deleteVehicle _tool1;deleteVehicle _tool2;_vest=['SmershVestBackpack',_owner] call player_addInventory;if(_dt1 > _dt2)then{_vest setDamage _dt1;}else{_vest setDamage _dt2;};};};";
	};
	class SplitSmershVest
	{
		name = "Detach Backpack";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"SmershVestBackpack"};
		action = "if((count itemsInCargo _tool1) > 0)then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dmg = damage _tool1;deleteVehicle _tool1;_vest=['SmershVest',_owner] call player_addInventory;_back=['SmershBackpack',_owner] call player_addInventory;_vest setDamage _dmg;_back setDamage _dmg;};";
	};
	class AttachHolster
	{
		name = "Attach Holster";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"PlateCarrierBlank","CarrierHolsterSolo"};
		action = "if(((count(itemsInInventory _tool1)) > 0) or ((count(itemsInInventory _tool2)) > 0))then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;_dt2 = damage _tool2;if((_dt1 == 1) OR (_dt2 == 1))then{[_owner,'It is too damaged to be attached.','colorAction'] call fnc_playerMessage;}else{deleteVehicle _tool1;deleteVehicle _tool2;_vest=['PlateCarrierHolster',_owner] call player_addInventory;if(_dt1 > _dt2)then{_vest setDamage _dt1;}else{_vest setDamage _dt2;};};};";
	};
	class AttachHolsterPouch: AttachHolster
	{
		tools[] = {"PlateCarrierPouches","CarrierHolsterSolo"};
		action = "if(((count itemsInCargo _tool1) > 0) or ((count(itemsInInventory _tool2)) > 0))then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;_dt2 = damage _tool2;if((_dt1 == 1) OR (_dt2 == 1))then{[_owner,'It is too damaged to be attached.','colorAction'] call fnc_playerMessage;}else{deleteVehicle _tool1;deleteVehicle _tool2;_vest=['PlateCarrierComplete',_owner] call player_addInventory;if(_dt1 > _dt2)then{_vest setDamage _dt1;}else{_vest setDamage _dt2;};};};";
	};
	class AttachPouches
	{
		name = "Attach Pouches";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"PlateCarrierBlank","Container_CarrierPouches"};
		action = "if((count itemsInCargo _tool2) > 0)then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;_dt2 = damage _tool2;if((_dt1 == 1) OR (_dt2 == 1))then{[_owner,'It is too damaged to be attached.','colorAction'] call fnc_playerMessage;}else{deleteVehicle _tool1;deleteVehicle _tool2;_vest=['PlateCarrierPouches',_owner] call player_addInventory;if(_dt1 > _dt2)then{_vest setDamage _dt1;}else{_vest setDamage _dt2;};};};";
	};
	class AttachPouchesHolster: AttachPouches
	{
		tools[] = {"PlateCarrierHolster","Container_CarrierPouches"};
		action = "if(((count(itemsInInventory _tool1)) > 0) or ((count itemsInCargo _tool2) > 0))then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;_dt2 = damage _tool2;if((_dt1 == 1) OR (_dt2 == 1))then{[_owner,'It is too damaged to be attached.','colorAction'] call fnc_playerMessage;}else{deleteVehicle _tool1;deleteVehicle _tool2;_vest=['PlateCarrierComplete',_owner] call player_addInventory;if(_dt1 > _dt2)then{_vest setDamage _dt1;}else{_vest setDamage _dt2;};};};";
	};
	class DetachHolster
	{
		name = "Detach Holster";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"PlateCarrierHolster"};
		action = "if(((count(itemsInInventory _tool1)) > 0))then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;deleteVehicle _tool1;_vest=['PlateCarrierBlank',_owner] call player_addInventory;_vest2=['CarrierHolsterSolo',_owner] call player_addInventory;_vest setDamage _dt1;_vest2 setDamage _dt1;};";
	};
	class DetachPouches
	{
		name = "Detach Pouches";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"PlateCarrierPouches"};
		action = "if((count itemsInCargo _tool1) > 0)then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;deleteVehicle _tool1;_vest=['PlateCarrierBlank',_owner] call player_addInventory;_vest2=['Container_CarrierPouches',_owner] call player_addInventory;_vest setDamage _dt1;_vest2 setDamage _dt1;};";
	};
	class DetachPouchesComplete
	{
		name = "Detach Pouches";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"PlateCarrierComplete"};
		action = "if(((count itemsInCargo _tool1) > 0) or ((count(itemsInInventory _tool1)) > 0))then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;deleteVehicle _tool1;_vest=['PlateCarrierHolster',_owner] call player_addInventory;_vest2=['Container_CarrierPouches',_owner] call player_addInventory;_vest setDamage _dt1;_vest2 setDamage _dt1;};";
	};
	class DetachHolsterComplete
	{
		name = "Detach Holster";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"PlateCarrierComplete"};
		action = "if(((count itemsInCargo _tool1) > 0) or ((count(itemsInInventory _tool1)) > 0))then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;deleteVehicle _tool1;_vest=['PlateCarrierPouches',_owner] call player_addInventory;_vest2=['CarrierHolsterSolo',_owner] call player_addInventory;_vest setDamage _dt1;_vest2 setDamage _dt1;};";
	};
	class DetachHolsterPouchesComplete
	{
		name = "Detach All Attachments";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"PlateCarrierComplete"};
		action = "if(((count itemsInCargo _tool1) > 0) or ((count(itemsInInventory _tool1)) > 0))then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;deleteVehicle _tool1;_vest=['PlateCarrierBlank',_owner] call player_addInventory;_vest2=['CarrierHolsterSolo',_owner] call player_addInventory;_vest3=['Container_CarrierPouches',_owner] call player_addInventory;_vest setDamage _dt1;_vest2 setDamage _dt1;_vest3 setDamage _dt1;};";
	};
	class CombineCarrierVest
	{
		name = "Complete set";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"PlateCarrierHolster","PlateCarrierPouches"};
		action = "if(((count(itemsInInventory _tool1)) > 0) or ((count itemsInCargo _tool2) > 0))then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;_dt2 = damage _tool2;if((_dt1 == 1) OR (_dt2 == 1))then{[_owner,'It is too damaged to be attached.','colorAction'] call fnc_playerMessage;}else{deleteVehicle _tool1;deleteVehicle _tool2;_vest=['PlateCarrierComplete',_owner] call player_addInventory;_vest2=['PlateCarrierBlank',_owner] call player_addInventory;if(_dt1 > _dt2)then{_vest setDamage _dt1;_vest2 setDamage _dt1;}else{_vest setDamage _dt2;_vest2 setDamage _dt2;};};};";
	};
	class SplitCarrierVest
	{
		name = "Share attachments";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"PlateCarrierComplete","PlateCarrierBlank"};
		action = "if(((count itemsInCargo _tool1) > 0) or ((count(itemsInInventory _tool1)) > 0))then{[_owner,'I need to empty it first.','colorAction'] call fnc_playerMessage;}else{_dt1 = damage _tool1;_dt2 = damage _tool2;if((_dt1 == 1) OR (_dt2 == 1))then{[_owner,'It is too damaged to be attached.','colorAction'] call fnc_playerMessage;}else{deleteVehicle _tool1;deleteVehicle _tool2;_vest=['PlateCarrierHolster',_owner] call player_addInventory;_vest2=['PlateCarrierPouches',_owner] call player_addInventory;if(_dt1 > _dt2)then{_vest setDamage _dt1;_vest2 setDamage _dt1;}else{_vest setDamage _dt2;_vest2 setDamage _dt2;};};};";
	};
	class Craft_LeatherCourierBag
	{
		name = "Craft Leather Bag with %MATERIAL1 and %TOOL1";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"Consumable_PeltWildboar"};
		material[] = {"Crafting_Rope"};
		results[] = {"BagCourierImprovisedFur"};
		action = "_tool1 addQuantity -1; if (quantity _tool1 <= 1) then {deleteVehicle _tool1};[_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class Decraft_LeatherCourierBag
	{
		name = "Break down into Rope and Wild Boar Leather";
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (count itemsInCargo _material1 == 0)";
		material[] = {"BagCourierImprovisedFur"};
		results[] = {"Crafting_Rope","Consumable_PeltWildboar"};
		action = "_result2 setQuantity 1;[_owner,format['I have broken down the %1.',displayName _material1],'colorAction'] call fnc_playerMessage;";
	};
	class Craft_ImprovisedCourierBag
	{
		name = "Craft Courier Bag with %MATERIAL1 and %MATERIAL2";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		material[] = {"Crafting_Rope","Crafting_BurlapSack"};
		results[] = {"BagCourierImprovised"};
		action = "[_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class Decraft_ImprovisedCourierBag
	{
		name = "Break down into Rope and Burlap Sack";
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (count itemsInCargo _material1 == 0)";
		material[] = {"BagCourierImprovised"};
		results[] = {"Crafting_Rope","Crafting_BurlapSack"};
		action = "[_owner,format['I have broken down the %1.',displayName _material1],'colorAction'] call fnc_playerMessage;";
	};
	class Craft_ImprovisedBackpack
	{
		name = "Craft Improvised Backpack from %MATERIAL1 and %TOOL1";
		condition = "(quantity _tool1) > 2 && (_owner getVariable ['isUsingSomething',0] == 0) and (count itemsInCargo _material1 == 0)";
		tools[] = {"Crafting_WoodenStick"};
		material[] = {"BagCourierImprovised"};
		results[] = {"BagImprovised"};
		action = "_tool1 addQuantity -3; if (quantity _tool1 <= 1) then {deleteVehicle _tool1}; [_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class Decraft_ImprovisedBackpack
	{
		name = "Break down into Wooden Sticks and Burlap Sack";
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (count itemsInCargo _material1 == 0)";
		material[] = {"BagImprovised"};
		results[] = {"Crafting_WoodenStick","Crafting_BurlapSack"};
		action = "[_owner,format['I have broken down the %1, but ruined the rope while doing it.',displayName _material1],'colorAction'] call fnc_playerMessage;_result1 setQuantity 3;";
	};
	class Craft_ImprovisedLeatherBackpack
	{
		name = "Craft Improvised Leather Backpack from %MATERIAL1 and %TOOL1";
		condition = "(quantity _tool1) > 2 && (_owner getVariable ['isUsingSomething',0] == 0) and (count itemsInCargo _material1 == 0)";
		tools[] = {"Crafting_WoodenStick"};
		material[] = {"BagCourierImprovisedFur"};
		results[] = {"BagImprovisedFur"};
		action = "_tool1 addQuantity -3; if (quantity _tool1 <= 1) then {deleteVehicle _tool1};[_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class Decraft_ImprovisedLeatherBackpack
	{
		name = "Break down into Wooden Sticks and Boar Pelt";
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (count itemsInCargo _material1 == 0)";
		material[] = {"BagImprovisedFur"};
		results[] = {"Crafting_WoodenStick","Consumable_PeltWildboar"};
		action = "[_owner,format['I have broken down the %1, but ruined the rope while doing it.',displayName _material1],'colorAction'] call fnc_playerMessage;_result2 setQuantity 3;_result1 setQuantity 1;";
	};
	class Craft_SplitWoodKnife
	{
		name = "Split into thirds";
		condition = "true";
		material[] = {"Crafting_LongWoodenStick"};
		tools[] = {"KnifeBase"};
		results[] = {"Crafting_WoodenStick"};
		action = "_result1 setQuantity 3; [_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class Craft_SplitWoodAxe
	{
		name = "Split into thirds";
		condition = "true";
		material[] = {"Crafting_LongWoodenStick"};
		tools[] = {"AxeBase"};
		results[] = {"Crafting_WoodenStick"};
		action = "_result1 setQuantity 3; [_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class Craft_SplitFirewoodAxe
	{
		name = "Split into thirds";
		condition = "true";
		tools[] = {"AxeBase","Consumable_Firewood"};
		action = "[_owner, _tool1, _tool2, 'Crafting_WoodenStick', 3] call fnc_axeFirewoodIntoSticks";
	};
	class CombineWoodenStick
	{
		name = "Group Wooden Sticks";
		tools[] = {"Crafting_WoodenStick","Crafting_WoodenStick"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity;";
	};
	class SplitWoodenStick
	{
		name = "Split Wooden Sticks";
		tools[] = {"Crafting_WoodenStick"};
		condition = "(quantity _tool1) > 1";
		action = "call player_splitQuantity;";
	};
	class CombineFeathers
	{
		name = "Combine Feathers";
		tools[] = {"Crafting_ChickenFeather","Crafting_ChickenFeather"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity;";
	};
	class SplitFeathers
	{
		name = "Split Feathers";
		tools[] = {"Crafting_ChickenFeather"};
		condition = "(quantity _tool1) > 1";
		action = "call player_splitQuantity;";
	};
	class CraftSplintBandage: RecipeToolOnTool
	{
		name = "Craft Splint from %TOOL1 and %TOOL2";
		tools[] = {"Medical_Bandage","Crafting_WoodenStick"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		onComplete = "_person setVariable ['isUsingSomething',0]; _tool2 addQuantity -1; if (quantity _tool2 <= 0) then {deleteVehicle _tool2}; ['Medical_Splint',_person] call player_addInventory;";
		sound = "";
		playerAction = "PlayerCraft";
		messages[] = {"The %1 is empty","colorStatusChannel","The %1 is broken","colorImportant","The %1 is broken","colorImportant","I have made a splint.","colorAction"};
		allowDead = 0;
		interactionWeight = 0.1;
		useQuantity = 1;
	};
	class CraftSplintDuctTape: RecipeToolOnTool
	{
		name = "Craft Splint from %TOOL1 and %TOOL2";
		tools[] = {"Consumable_DuctTape","Crafting_WoodenStick"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && quantity _tool1 >= 0.5";
		onComplete = "_person setVariable ['isUsingSomething',0]; _tool2 addQuantity -1; if (quantity _tool2 <= 0) then {deleteVehicle _tool2}; ['Medical_Splint',_person] call player_addInventory;";
		sound = "";
		playerAction = "PlayerCraft";
		messages[] = {"The %1 is empty","colorStatusChannel","The %1 is broken1","colorImportant","The %1 is broken2","colorImportant","I have made a splint.","colorAction"};
		allowDead = 0;
		interactionWeight = 0.1;
		useQuantity = 0.5;
	};
	class Decraft_Splint
	{
		name = "Break down into wooden stick";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		material[] = {"Medical_Splint"};
		results[] = {"Crafting_WoodenStick"};
		action = "_result1 setQuantity 1;[_owner,format['I have broken down the %1, but ruined the fabric while doing it.',displayName _material1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftSplintBandageDressing: CraftSplintBandage
	{
		tools[] = {"Medical_BandageDressing","Crafting_WoodenStick"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && quantity _tool1 == maxQuantity _tool1 && !((itemParent _tool1) isKindOf 'Fireplace') && !((itemParent _tool2) isKindOf 'Fireplace')";
		useQuantity = 1;
	};
	class CraftSplintRag: CraftSplintBandage
	{
		tools[] = {"Consumable_Rags","Crafting_WoodenStick"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && !((itemParent _tool1) isKindOf 'Fireplace') && !((itemParent _tool2) isKindOf 'Fireplace')";
		useQuantity = 1;
	};
	class CraftBow
	{
		name = "Craft Improvised Bow from %MATERIAL1 and %MATERIAL2";
		material[] = {"Crafting_Rope","Crafting_LongWoodenStick"};
		results[] = {"Bow_Quickie"};
		action = "if((typeOf _material1)=='Crafting_Rope')then{_result1 setVariable ['ropemat',-1];}else{_result1 setVariable ['ropemat',-2];};[_owner,format['I have made an %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class DecraftBow
	{
		name = "Break Bow into materials";
		material[] = {"Bow_Quickie"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (count itemsInInventory _material1 == 0)";
		results[] = {"Crafting_LongWoodenStick"};
		action = "_rm = _material1 getVariable ['ropemat',-1];if(_rm == -1)then{_rp0=['Crafting_Rope',_owner] call player_addInventory;_rp0 setDamage (damage _material1);};	if(_rm == -2)then{_rp1=['Crafting_ImprovisedRope',_owner] call player_addInventory;_rp1 setDamage (damage _material1);};[_owner,format['I have broken the Bow into materials.',displayName _result1],'colorAction'] call fnc_playerMessage;_result1 setDamage (damage _material1);";
	};
	class CraftGutsRopeKnife
	{
		name = "Craft Improvised Rope";
		material[] = {"Food_Guts"};
		tools[] = {"KnifeBase"};
		condition = "((quantity _material1) > 0.5) and ((damage _material1) < 1) and ((damage _tool1) < 1)";
		action = "_result1 setDamage (((damage _material1) + (damage _tool1))/2);[_owner,_result1] call event_craftMessage;";
		results[] = {"Crafting_ImprovisedRope"};
	};
	class CraftGutsRopeBayonets: CraftGutsRopeKnife
	{
		tools[] = {"BayonetBase"};
	};
	class CraftGutsRopeAxes: CraftGutsRopeKnife
	{
		tools[] = {"AxeBase"};
	};
	class CraftFishingRod
	{
		name = "Craft Improvised Fishing Rod from %MATERIAL1 and %MATERIAL2";
		material[] = {"Crafting_Rope","Crafting_LongWoodenStick"};
		results[] = {"Tool_ImprovisedFishingRod"};
		action = "if((typeOf _material1)=='Crafting_Rope')then{_result1 setVariable ['ropemat',-1];}else{_result1 setVariable ['ropemat',-2];};[_owner,format['I have made an %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class DecraftRod
	{
		name = "Break Rod into materials";
		material[] = {"Tool_ImprovisedFishingRod"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && ((count (itemsInInventory _material1)) == 0)";
		results[] = {"Crafting_LongWoodenStick"};
		action = "_rm = _material1 getVariable ['ropemat',-1];if(_rm == -1)then{_rp0=['Crafting_Rope',_owner] call player_addInventory;_rp0 setDamage (damage _material1);};	if(_rm == -2)then{_rp1=['Crafting_ImprovisedRope',_owner] call player_addInventory;_rp1 setDamage (damage _material1);};[_owner,format['I have broken the Rod into materials.',displayName _result1],'colorAction'] call fnc_playerMessage;_result1 setDamage (damage _material1);";
	};
	class CraftGorkaHelmet_complete
	{
		name = "Clip the %MATERIAL1 onto %MATERIAL2";
		material[] = {"GorkaHelmet_visor","GorkaHelmet_Green"};
		results[] = {"GorkaHelmet_complete_Green"};
		action = "_lala=((damage _MATERIAL2+ damage _MATERIAL1)/2); _result1 setDamage _lala;[_owner,format['I have made an %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftGorkaHelmet_complete_Black
	{
		name = "Clip the %MATERIAL1 onto %MATERIAL2";
		material[] = {"GorkaHelmet_visor","GorkaHelmet_Black"};
		results[] = {"GorkaHelmet_complete_Black"};
		action = "_lala=((damage _MATERIAL2+ damage _MATERIAL1)/2); _result1 setDamage _lala;[_owner,format['I have made an %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class DetachingGorkaHelmet_complete_Green
	{
		name = "Detach Visor";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"GorkaHelmet_complete_Green"};
		action = "_dt1 = damage _tool1;deleteVehicle _tool1;_helmet=['GorkaHelmet_Green',_owner] call player_addInventory;_helmet2=['GorkaHelmet_visor',_owner] call player_addInventory;_helmet setDamage _dt1;_helmet2 setDamage _dt1;";
	};
	class DetachingGorkaHelmet_complete_Black
	{
		name = "Detach Visor";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		tools[] = {"GorkaHelmet_complete_Black"};
		action = "_dt1 = damage _tool1;deleteVehicle _tool1;_helmet=['GorkaHelmet_Black',_owner] call player_addInventory;_helmet2=['GorkaHelmet_visor',_owner] call player_addInventory;_helmet setDamage _dt1;_helmet2 setDamage _dt1;";
	};
	class CraftHandDrillKit: RecipeToolOnTool
	{
		name = "Craft Hand drill kit from %TOOL1 and %TOOL2";
		tools[] = {"Crafting_WoodenStick","Consumable_Bark_Oak"};
		results[] = {"Crafting_HandDrillKit"};
		action = "[_tool1, -1] call fnc_addQuantity; [_tool2, -1] call fnc_addQuantity; [_owner,format['I have made an %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class DecraftHandDrillKit
	{
		name = "Split into Wooden stick and Oak bark";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		material[] = {"Crafting_HandDrillKit"};
		results[] = {"Crafting_WoodenStick","Consumable_Bark_Oak"};
		action = "_result1 setQuantity 1; _result2 setQuantity 1; _result1 setdamage (damage _material1); _result2 setdamage (damage _material1); [_owner,format['I have split the %1.',displayName _material1],'colorAction'] call fnc_playerMessage";
	};
	class CraftSpear: RecipeToolOnTool
	{
		name = "Craft Spear from %TOOL1 and %TOOL2";
		tools[] = {"Crafting_LongWoodenStick","Consumable_Bones"};
		results[] = {"Crafting_Spear"};
		action = "[_tool1, -1] call fnc_addQuantity; [_tool2, -1] call fnc_addQuantity; [_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class DecraftSpear
	{
		name = "Break Spear into long wooden stick";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		material[] = {"Crafting_Spear"};
		results[] = {"Crafting_LongWoodenStick"};
		action = "_result1 setQuantity 1; _result1 setdamage (damage _material1); [_owner,format['I have break the %1.',displayName _material1],'colorAction'] call fnc_playerMessage";
	};
	class PokeHolesAxes
	{
		name = "Poke holes into Barrel";
		tools[] = {"Container_BarrelBase","AxeBase"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (count (itemsInCargo _tool1) == 0)";
		action = "_posBar = getPosATL _tool1; _d = damage _tool1; _color = getText(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'color'); _newItemType = format ['%1_%2', _color,'BarrelHoles'];deleteVehicle _tool1; _newItem = createVehicle [_newItemType, _posBar,[],0,'n']; _newItem setDamage _d; [_owner,format['I have made holes into Barrel.'],'colorAction'] call fnc_playerMessage;";
	};
	class PokeHolesKnifes
	{
		name = "Poke holes into Barrel";
		tools[] = {"Container_BarrelBase","KnifeBase"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (count (itemsInCargo _tool1) == 0)";
		action = "_posBar = getPosATL _tool1; _d = damage _tool1; _color = getText(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'color'); _newItemType = format ['%1_%2', _color,'BarrelHoles'];deleteVehicle _tool1; _newItem = createVehicle [_newItemType, _posBar,[],0,'n']; _newItem setDamage _d; [_owner,format['I have made holes into Barrel.'],'colorAction'] call fnc_playerMessage;";
	};
	class PokeHolesBayonets
	{
		name = "Poke holes into Barrel";
		tools[] = {"Container_BarrelBase","BayonetBase"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (count (itemsInCargo _tool1) == 0)";
		action = "_posBar = getPosATL _tool1; _d = damage _tool1; _color = getText(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'color'); _newItemType = format ['%1_%2', _color,'BarrelHoles'];deleteVehicle _tool1; _newItem = createVehicle [_newItemType, _posBar,[],0,'n']; _newItem setDamage _d; [_owner,format['I have made holes into Barrel.'],'colorAction'] call fnc_playerMessage;";
	};
	class PokeHolesScrew
	{
		name = "Poke holes into Barrel";
		tools[] = {"Container_BarrelBase","Tool_Screwdriver"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (count (itemsInCargo _tool1) == 0)";
		action = "_posBar = getPosATL _tool1; _d = damage _tool1; _color = getText(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'color'); _newItemType = format ['%1_%2', _color,'BarrelHoles'];deleteVehicle _tool1; _newItem = createVehicle [_newItemType, _posBar,[],0,'n']; _newItem setDamage _d; [_owner,format['I have made holes into Barrel.'],'colorAction'] call fnc_playerMessage;";
	};
	class PokeHolesCrow
	{
		name = "Poke holes into Barrel";
		tools[] = {"Container_BarrelBase","Tool_Crowbar"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (count (itemsInCargo _tool1) == 0)";
		action = "_posBar = getPosATL _tool1; _d = damage _tool1; _color = getText(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'color'); _newItemType = format ['%1_%2', _color,'BarrelHoles'];deleteVehicle _tool1; _newItem = createVehicle [_newItemType, _posBar,[],0,'n']; _newItem setDamage _d; [_owner,format['I have made holes into Barrel.'],'colorAction'] call fnc_playerMessage;";
	};
	class PokeHolesPickAx
	{
		name = "Poke holes into Barrel";
		tools[] = {"Container_BarrelBase","Pickaxe"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (count (itemsInCargo _tool1) == 0)";
		action = "_posBar = getPos _tool1; _d = damage _tool1; _color = getText(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'color'); _newItemType = format ['%1_%2', _color,'BarrelHoles'];deleteVehicle _tool1; _newItem = createVehicle [_newItemType, _posBar,[],0,'n']; _newItem setDamage _d; [_owner,format['I have made holes into Barrel.'],'colorAction'] call fnc_playerMessage;";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class EnergyItem_Base;
	class BurlapSack: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BurlapSack0";
		descriptionShort = "$STR_CfgVehicles_BurlapSack1";
		model = "\dz\gear\crafting\bp_burlap_sack.p3d";
		ContinuousActions[] = {148,147};
		rotationFlags = 17;
		weight = 510;
		itemSize[] = {2,2};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		lootTag[] = {"Camping","Farm","Work","Forester","Hunting"};
		lootCategory = "Materials";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\crafting\data\bp_sack_burlap.rvmat"}},{0.5,{"DZ\gear\crafting\data\bp_sack_burlap_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\bp_sack_burlap_destruct.rvmat"}}};
				};
			};
		};
	};
	class Rope: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Rope0";
		descriptionShort = "$STR_CfgVehicles_Rope1";
		model = "\dz\gear\crafting\bp_rope.p3d";
		ContinuousActions[] = {109};
		rotationFlags = 17;
		itemSize[] = {1,3};
		weight = 280;
		lootTag[] = {"Camping","Farm","Work","Forester","Hunting"};
		lootCategory = "Materials";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\crafting\data\bp_rope.rvmat"}},{0.5,{"DZ\gear\crafting\data\bp_rope_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\bp_rope_destruct.rvmat"}}};
				};
			};
		};
	};
	class ImprovisedRope: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ImprovisedRope0";
		descriptionShort = "$STR_CfgVehicles_ImprovisedRope1";
		model = "\dz\gear\crafting\bp_rope.p3d";
		ContinuousActions[] = {109};
		isMeleeWeapon = 1;
		rotationFlags = 17;
		itemSize[] = {1,2};
		weight = 280;
		lootCategory = "Crafted";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\crafting\data\bp_rope.rvmat"}},{0.5,{"DZ\gear\crafting\data\bp_rope_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\bp_rope_destruct.rvmat"}}};
				};
			};
		};
	};
	class MetalWire: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_MetalWire0";
		descriptionShort = "$STR_CfgVehicles_MetalWire1";
		model = "\dz\gear\crafting\String_MetalWire.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 170;
		inventorySlot = "MetalWire";
		ContinuousActions[] = {109};
		SingleUseActions[] = {532};
		hiddenSelections[] = {"att_battery_car","att_battery_car_plugged","att_battery_truck","att_battery_truck_plugged","att_battery_car_plug","att_battery_truck_plug","rolled"};
		hiddenSelectionsTextures[] = {"dz\gear\crafting\data\string_metalwire_co.paa","dz\gear\crafting\data\string_metalwire_co.paa","dz\gear\crafting\data\string_metalwire_co.paa","dz\gear\crafting\data\string_metalwire_co.paa","","","dz\gear\crafting\data\string_metalwire_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\crafting\data\String_MetalWire.rvmat","dz\gear\crafting\data\String_MetalWire.rvmat","dz\gear\crafting\data\String_MetalWire.rvmat","dz\gear\crafting\data\String_MetalWire.rvmat","","","dz\gear\crafting\data\String_MetalWire.rvmat"};
		lootTag[] = {"Farm","Work","Forester","Hunting"};
		lootCategory = "Materials";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\crafting\data\String_MetalWire.rvmat"}},{0.5,{"DZ\gear\crafting\data\String_MetalWire_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\String_MetalWire_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			powerSocketsCount = 1;
			plugType = 8;
			compatiblePlugTypes[] = {2};
		};
		class AnimationSources
		{
			class Att_battery_car
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Att_battery_car_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Att_battery_truck
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Att_battery_truck_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Att_battery_car_plug
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Att_battery_truck_plug
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Rolled
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class WoodenStick: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WoodenStick0";
		descriptionShort = "$STR_CfgVehicles_WoodenStick1";
		model = "\dz\gear\crafting\bp_wooden_stick.p3d";
		lootTag[] = {"Natural"};
		lootCategory = "Crafted";
		inventorySlot = "WoodenStick";
		weight = 220;
		itemSize[] = {1,5};
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 5.0;
		varQuantityDestroyOnMin = 1;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\crafting\data\bp_wooden_stick.rvmat"}},{0.5,{"DZ\gear\crafting\data\bp_wooden_stick_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\bp_wooden_stick_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.2;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.2;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 3.3;
			};
		};
	};
	class Torch: EnergyItem_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Torch0";
		descriptionShort = "$STR_CfgVehicles_Torch1";
		model = "\dz\gear\crafting\Torch.p3d";
		overrideDrawArea = "8.0";
		SingleUseActions[] = {536};
		ContinuousActions[] = {209};
		rotationFlags = 17;
		absorbency = 0.5;
		weight = 240;
		itemSize[] = {2,4};
		lootCategory = "Crafted";
		attachments[] = {"Rags"};
		hiddenSelections[] = {"flame","zbytek"};
		hiddenSelectionsTextures[] = {"","dz\gear\crafting\data\Torch_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\crafting\data\torch.rvmat"}},{0.5,{"DZ\gear\crafting\data\torch_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\torch_destruct.rvmat"}}};
				};
			};
		};
		class flame
		{
			sound = "Sound_FlareFlame";
			texture = "dz\gear\consumables\data\flame_red_ca.paa";
		};
		class EnergyManager
		{
			autoSwitchOff = 1;
			energyAtSpawn = 2;
			energyStorageMax = 180;
			energyUsagePerSecond = 1;
			wetnessExposure = 0.5;
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,0.45,0.25,1.0};
				brightness = 1.0;
				radius = 15;
				dayLight = 1;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				heatHazeRadius = 0.1;
				heatHazePower = 0.01;
				fireEffect = 1;
				fireEffectOctaves = 4;
				fireEffectPersistence = 0.99;
				fireEffectFract = 0.33;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class TorchKindle
				{
					soundSet = "Torch_kindle_SoundSet";
					id = 201;
				};
			};
		};
	};
	class ChickenFeather: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ChickenFeather0";
		descriptionShort = "$STR_CfgVehicles_ChickenFeather1";
		model = "\dz\gear\consumables\arrow_feather.p3d";
		lootTag[] = {"Natural"};
		lootCategory = "Crafted";
		itemSize[] = {1,1};
		weight = 1;
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 20.0;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\projectiles\data\arrow_crafted_simple.rvmat"}},{0.5,{"DZ\weapons\projectiles\data\arrow_crafted_simple_damage.rvmat"}},{0.0,{"DZ\weapons\projectiles\data\arrow_crafted_simple_destruct.rvmat"}}};
				};
			};
		};
	};
	class LongWoodenStick: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_LongWoodenStick0";
		descriptionShort = "$STR_CfgVehicles_LongWoodenStick1";
		model = "\dz\gear\crafting\Wooden_stick.p3d";
		ContinuousActions[] = {180};
		rotationFlags = 17;
		weight = 670;
		itemSize[] = {1,8};
		inventorySlot = "Melee";
		suicideAnim = "spear";
		attachments[] = {"Ingredient"};
		lootTag[] = {"Natural"};
		lootCategory = "Crafted";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\crafting\data\Wooden_stick.rvmat"}},{0.5,{"DZ\gear\crafting\data\Wooden_stick_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\Wooden_stick_destruct.rvmat"}}};
				};
			};
		};
	};
	class GorkaHelmetVisor: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_GorkaHelmetVisor0";
		descriptionShort = "$STR_CfgVehicles_GorkaHelmetVisor1";
		model = "\dz\characters\headgear\Maska_glass_g.p3d";
		rotationFlags = 16;
		itemSize[] = {3,2};
		lootCategory = "Headgear";
		lootTag[] = {"Police"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"dz\characters\headgear\data\maska.rvmat"}},{0.5,{"dz\characters\headgear\data\maska_damage.rvmat"}},{0.0,{"dz\characters\headgear\data\maska_destruct.rvmat"}}};
				};
			};
		};
	};
	class HandDrillKit: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_HandDrillKit0";
		descriptionShort = "$STR_CfgVehicles_HandDrillKit1";
		model = "\dz\gear\crafting\hand_drill_kit.p3d";
		ContinuousActions[] = {174};
		weight = 210;
		itemSize[] = {1,4};
		lootTag[] = {"Natural"};
		lootCategory = "Materials";
		rotationFlags = 8;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\crafting\data\hand_drill_kit.rvmat"}},{0.5,{"DZ\gear\crafting\data\hand_drill_kit_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\hand_drill_kit_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MatchStrike
				{
					soundSet = "HandDrillIgnite_SoundSet";
					id = 201;
				};
			};
		};
	};
	class Spear: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Spear0";
		descriptionShort = "$STR_CfgVehicles_Spear1";
		model = "\dz\gear\crafting\advanced_spear.p3d";
		SingleUseActions[] = {560};
		rotationFlags = 17;
		weight = 700;
		itemSize[] = {2,11};
		inventorySlot = "Melee";
		suicideAnim = "spear";
		lootCategory = "Crafted";
		openItemSpillRange[] = {20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\crafting\data\advanced_spear.rvmat"}},{0.5,{"DZ\gear\crafting\data\advanced_spear_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\advanced_spear_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeSpear";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeSpear_Heavy";
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeSpear_Heavy";
				range = 3.7;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMeat_steak: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Ingredient";
		model = "\dz\gear\food\meat_steak.p3d";
		class AnimationSources
		{
			class CS_Raw
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class CS_Rotten
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class CS_Baked
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class CS_Boiled
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class CS_Dried
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class CS_Burned
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class ProxyString_MetalWire: ProxyAttachment
	{
		scope = 2;
		model = "\dz\gear\crafting\String_MetalWire.p3d";
		inventorySlot = "MetalWire";
		class AnimationSources
		{
			class Att_battery_car
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Att_battery_car_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Att_battery_truck
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Att_battery_truck_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Att_battery_car_plug
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Att_battery_truck_plug
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Rolled
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
};
//};
