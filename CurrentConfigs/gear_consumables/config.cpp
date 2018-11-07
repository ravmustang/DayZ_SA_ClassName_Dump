////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:12:07 2018 : 'file' last modified on Wed Aug 22 17:17:29 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_consumables\config.bin{
class CfgPatches
{
	class DZ_Gear_Consumables
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical"};
	};
};
class RecipeToolOnTool;
class CfgRecipes
{
	class CombineMatchbox
	{
		name = "Combine Matches";
		tools[] = {"Consumable_Matchbox","Consumable_Matchbox"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity; _condition = damage _tool2;";
	};
	class CraftBaseballBatNailed
	{
		name = "Craft Baseball Bat With Nails";
		tools[] = {"Consumable_Nails"};
		material[] = {"BaseballBat"};
		condition = "damage _tool1 < 1 && quantity _tool1 > 12 && typeOf _material1 == 'BaseballBat'";
		results[] = {"BaseballBatNailed"};
		action = "_dmg = (damage _tool1 + damage _tool2)/2;_result1 setDamage _dmg;_tool1 addQuantity -13;if(quantity _tool1 < 1)then{deleteVehicle _tool1};[_owner,format['I have made the %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftStackOfNails
	{
		name = "Unpack";
		tools[] = {"Consumable_NailBox"};
		condition = "damage _tool1 < 1 && !(isNull (itemParent _tool1))";
		results[] = {"Consumable_Nails"};
		action = "['Consumable_Paper',_owner] call player_addInventory;_dmg = damage _tool1;_result1 setDamage _dmg;_result1 setQuantity(floor(random 47)+5);deleteVehicle _tool1;";
	};
	class SplitNails
	{
		name = "Split Nails";
		tools[] = {"Consumable_Nails"};
		condition = "(quantity _tool1) > 1";
		action = "call player_splitQuantity;";
	};
	class CombineNails
	{
		name = "Combine Nails";
		tools[] = {"Consumable_Nails","Consumable_Nails"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity; _condition = damage _tool2;";
	};
	class CraftGhillieHood
	{
		name = "Craft Ghillie Hood";
		tools[] = {"Consumable_Netting","Consumable_Burlapstrips"};
		condition = "quantity _tool1 > 0 && quantity _tool2 > 1";
		results[] = {"GhillieHoodTan"};
		action = "_dmg = (damage _tool1 + damage _tool2)/2;_result1 setDamage _dmg;_tool2 addQuantity -2;if(quantity _tool2 < 1)then{deleteVehicle _tool2};_tool1 addQuantity -1;if(quantity _tool1 < 1)then{deleteVehicle _tool1};[_owner,format['I have made the %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class DecraftGhillieHood
	{
		name = "Break down";
		material[] = {"GhillieHoodBase"};
		condition = "damage _material1 < 1";
		results[] = {"Consumable_Netting","Consumable_Burlapstrips"};
		action = "_result1 setQuantity 1;_result2 setQuantity 1;_result1 setDamage (damage _material1);_result2 setDamage (damage _material1);[_owner,format['I have broken the %1 down and lost some burlap strips during the process.',displayName _material1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftGhillieAttachment: CraftGhillieHood
	{
		name = "Craft Ghillie Gun Wrap";
		results[] = {"Att_Ghillie_Tan"};
	};
	class DecraftGhillieAttachment: DecraftGhillieHood
	{
		material[] = {"Att_Ghillie_Base"};
		condition = "damage _material1 < 1";
		results[] = {"Consumable_Netting","Consumable_Burlapstrips"};
		action = "_result1 setQuantity 1;_result2 setQuantity 1;_result1 setDamage (damage _material1);_result2 setDamage (damage _material1);[_owner,format['I have broken the %1 down and lost some burlap strips during the process.',displayName _material1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftGhillieBushrag: CraftGhillieHood
	{
		name = "Craft Ghillie Bushrag";
		condition = "quantity _tool1 > 1 && quantity _tool2 > 3";
		results[] = {"GhillieBushragTan"};
		action = "_dmg = (damage _tool1 + damage _tool2)/2;_result1 setDamage _dmg;_tool2 addQuantity -4;if(quantity _tool2 < 1)then{deleteVehicle _tool2};_tool1 addQuantity -2;if(quantity _tool1 < 1)then{deleteVehicle _tool1};[_owner,format['I have made the %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class DecraftGhillieBushrag: DecraftGhillieHood
	{
		material[] = {"GhillieBushragBase"};
		condition = "damage _material1 < 1";
		results[] = {"Consumable_Netting","Consumable_Burlapstrips"};
		action = "_result1 setQuantity 2;_result2 setQuantity 2;_result1 setDamage (damage _material1);_result2 setDamage (damage _material1);[_owner,format['I have broken the %1 down and lost some burlap strips during the process.',displayName _material1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftGhillieTop: CraftGhillieHood
	{
		name = "Craft Ghillie Top";
		condition = "quantity _tool1 > 2 && quantity _tool2 > 5";
		results[] = {"GhillieTopTan"};
		action = "_dmg = (damage _tool1 + damage _tool2)/2;_result1 setDamage _dmg;_tool2 addQuantity -6;if(quantity _tool2 < 1)then{deleteVehicle _tool2};_tool1 addQuantity -3;if(quantity _tool1 < 1)then{deleteVehicle _tool1};[_owner,format['I have made the %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class DecraftGhillieTop: DecraftGhillieHood
	{
		material[] = {"GhillieTopBase"};
		condition = "damage _material1 < 1";
		results[] = {"Consumable_Netting","Consumable_Burlapstrips"};
		action = "_result1 setQuantity 3;_result2 setQuantity 3;_result1 setDamage (damage _material1);_result2 setDamage (damage _material1);[_owner,format['I have broken the %1 down and lost some burlap strips during the process.',displayName _material1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftGhillieSuit: CraftGhillieHood
	{
		name = "Craft Ghillie Suit";
		condition = "quantity _tool1 > 3 && quantity _tool2 > 9";
		results[] = {"GhillieSuitTan"};
		action = "_dmg = (damage _tool1 + damage _tool2)/2;_result1 setDamage _dmg;_tool2 addQuantity -10;if(quantity _tool2 < 1)then{deleteVehicle _tool2};_tool1 addQuantity -4;if(quantity _tool1 < 1)then{deleteVehicle _tool1};[_owner,format['I have made the %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class DecraftGhillieSuit: DecraftGhillieHood
	{
		material[] = {"GhillieSuitBase"};
		condition = "damage _material1 < 1";
		results[] = {"Consumable_Netting","Consumable_Burlapstrips"};
		action = "_result1 setQuantity 4;_result2 setQuantity 5;_result1 setDamage (damage _material1);_result2 setDamage (damage _material1);[_owner,format['I have broken the %1 down and lost some burlap strips during the process.',displayName _material1],'colorAction'] call fnc_playerMessage;";
	};
	class PaintGhillieHood
	{
		name = "Paint %MATERIAL1 Green";
		tools[] = {"Spraycan_Green"};
		material[] = {"GhillieHoodTan"};
		condition = "quantity _tool1 >= 0.4";
		results[] = {"GhillieHoodWoodland"};
		action = "_tool1 addQuantity -0.4;if(quantity _tool1 <= 0)then{deleteVehicle _tool1};[_owner,format['I have painted the %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class PaintGhillieHoodBlack: PaintGhillieHood
	{
		name = "Paint %MATERIAL1 Black";
		tools[] = {"Spraycan_Black"};
		material[] = {"GhillieHoodWoodland"};
		results[] = {"GhillieHoodMossy"};
	};
	class PaintGhillieHoodGreen: PaintGhillieHood
	{
		name = "Paint %MATERIAL1 Green";
		tools[] = {"Spraycan_Green"};
		material[] = {"GhillieHoodMossy"};
		results[] = {"GhillieHoodWoodland"};
	};
	class PaintGhillieAttachment: PaintGhillieHood
	{
		name = "Paint %MATERIAL1 Green";
		tools[] = {"Spraycan_Green"};
		material[] = {"Att_Ghillie_Tan"};
		results[] = {"Att_Ghillie_Woodland"};
	};
	class PaintGhillieAttachmentBlack: PaintGhillieAttachment
	{
		name = "Paint %MATERIAL1 Black";
		tools[] = {"Spraycan_Black"};
		material[] = {"Att_Ghillie_Woodland"};
		results[] = {"Att_Ghillie_Mossy"};
	};
	class PaintGhillieAttachmentGreen: PaintGhillieAttachment
	{
		name = "Paint %MATERIAL1 Green";
		tools[] = {"Spraycan_Green"};
		material[] = {"Att_Ghillie_Mossy"};
		results[] = {"Att_Ghillie_Woodland"};
	};
	class PaintGhillieTop: PaintGhillieHood
	{
		name = "Paint %MATERIAL1 Green";
		material[] = {"GhillieTopTan"};
		results[] = {"GhillieTopWoodland"};
		condition = "quantity _tool1 >= 0.75";
		action = "_tool1 addQuantity -0.75;if(quantity _tool1 <= 0)then{deleteVehicle _tool1};[_owner,format['I have painted the %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class PaintGhillieTopBlack: PaintGhillieTop
	{
		name = "Paint %MATERIAL1 Black";
		tools[] = {"Spraycan_Black"};
		material[] = {"GhillieTopWoodland"};
		results[] = {"GhillieTopMossy"};
	};
	class PaintGhillieTopGreen: PaintGhillieTop
	{
		name = "Paint %MATERIAL1 Green";
		tools[] = {"Spraycan_Green"};
		material[] = {"GhillieTopMossy"};
		results[] = {"GhillieTopWoodland"};
	};
	class PaintGhillieBushrag: PaintGhillieHood
	{
		name = "Paint %MATERIAL1 Green";
		condition = "quantity _tool1 >= 0.5";
		material[] = {"GhillieBushragTan"};
		results[] = {"GhillieBushragWoodland"};
		action = "_tool1 addQuantity -0.5;if(quantity _tool1 <= 0)then{deleteVehicle _tool1};[_owner,format['I have painted the %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class PaintGhillieBushragBlack: PaintGhillieBushrag
	{
		name = "Paint %MATERIAL1 Black";
		tools[] = {"Spraycan_Black"};
		material[] = {"GhillieBushragWoodland"};
		results[] = {"GhillieBushragMossy"};
	};
	class PaintGhillieBushragGreen: PaintGhillieBushrag
	{
		name = "Paint %MATERIAL1 Green";
		tools[] = {"Spraycan_Green"};
		material[] = {"GhillieBushragMossy"};
		results[] = {"GhillieBushragWoodland"};
	};
	class PaintGhillieSuit
	{
		name = "Paint %MATERIAL2 Green";
		condition = "quantity _material1 >= 0.9";
		material[] = {"Spraycan_Green","GhillieSuitTan"};
		results[] = {"GhillieSuitWoodland"};
		action = "[_owner,format['I have painted the %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class PaintGhillieSuitBlack: PaintGhillieSuit
	{
		name = "Paint %MATERIAL2 Black";
		material[] = {"Spraycan_Black","GhillieSuitWoodland"};
		results[] = {"GhillieSuitMossy"};
	};
	class PaintGhillieSuitGreen: PaintGhillieSuit
	{
		name = "Paint %MATERIAL2 Green";
		material[] = {"Spraycan_Green","GhillieSuitMossy"};
		results[] = {"GhillieSuitWoodland"};
	};
	class RepairWithTape
	{
		name = "Repair %TOOL2 with %TOOL1";
		tools[] = {"Consumable_DuctTape","InventoryBase"};
		condition = "[_tool1, _tool2] call fnc_isItemDuctTapeCompatible";
		action = "[_tool1, _tool2, _owner] spawn player_useDuctTapeOnItem";
	};
	class DryClothes
	{
		name = "Wring %TOOL1 out";
		tools[] = {"ClothingBase"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && (isNull itemInHands _owner ||  itemInHands _owner == _tool1) && getNumber (configFile >> getText (configFile >> 'CfgVehicles' >> typeOf _owner >> 'moves') >> 'states' >> animationState _owner >> 'canUseActions') != 0 && _tool1 getVariable ['wet',0] > 0 && getNumber(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'absorbency') > 0 && count( itemsInCargo _tool1 ) == 0";
		action = "_abs=_tool1 getVariable['wet',0];_tool1 setVariable['wet',_abs/2]; [_owner,'I have squezed some water out of it.','colorStatusChannel'] call fnc_playerMessage;";
	};
	class UntieBandanaMask
	{
		name = "Untie face mask";
		tools[] = {"BandanaMaskBase"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		action = "_d = damage _tool1; _color = getText(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'color');_newItemType = format ['%1_%2','Consumable_Bandana',_color];deleteVehicle _tool1;_newItem = [_newItemType,_owner] call player_addInventory; _newItem setDamage _d;";
	};
	class UntieBandana
	{
		name = "Untie bandana";
		tools[] = {"BandanaUntieableBase"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		action = "_d = damage _tool1; _color = getText(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'color');_newItemType = format ['%1_%2','Consumable_Bandana',_color];deleteVehicle _tool1;_newItem = [_newItemType,_owner] call player_addInventory; _newItem setDamage _d;";
	};
	class TieBandana
	{
		name = "Tie bandana";
		tools[] = {"Consumable_BandanaBase"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		action = "_d = damage _tool1; _color = getText(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'color');_newItemType = format ['%1_%2','Bandana',_color];deleteVehicle _tool1;_newItem = [_newItemType,_owner] call player_addInventory; _newItem setDamage _d;";
	};
	class TieFacemask
	{
		name = "Tie face mask";
		tools[] = {"Consumable_BandanaBase"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		action = "_d = damage _tool1; _color = getText(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'color');_newItemType = format ['%1_%2','BandanaMask',_color];deleteVehicle _tool1;_newItem = [_newItemType,_owner] call player_addInventory; _newItem setDamage _d;";
	};
	class CraftBlankPages
	{
		name = "Tear out blank page";
		tools[] = {"ItemBook"};
		condition = "quantity _tool1 > 0 && _owner getVariable ['isUsingSomething',0] == 0";
		results[] = {"Consumable_Paper"};
		action = "_tool1 addQuantity -0.5;[_owner,format['I have torn out a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftBait
	{
		name = "Craft fishing bait";
		tools[] = {"Food_Worm"};
		material[] = {"Consumable_Hook"};
		condition = "quantity _tool1 > 0 && _owner getVariable ['isUsingSomething',0] == 0";
		action = "if((typeOf _material1) == 'Consumable_Hook')then{_res = ['Consumable_Bait',_owner] call player_addInventory;}else{_res2 = ['Consumable_BoneBait',_owner] call player_addInventory;};_tool1 addQuantity -1; if(quantity _tool1 == 0)then{deleteVehicle _tool1;};[_owner,'I have made a fishing bait.','colorAction'] call fnc_playerMessage;";
	};
	class SharpenSword
	{
		name = "Sharpen %TOOL1";
		tools[] = {"Sword","Consumable_Stone"};
		condition = "(damage _tool1) >= 0.7 && (damage _tool1) < 1 && _owner getVariable ['isUsingSomething',0] == 0";
		action = "_tool1 setDamage 0.69;[_owner,format['I have sharpened the %1 a bit.',displayName _tool1],'colorAction'] call fnc_playerMessage;";
	};
	class SharpenKnife: SharpenSword
	{
		tools[] = {"KnifeBase","Consumable_Stone"};
	};
	class SharpenAxe: SharpenSword
	{
		tools[] = {"AxeBase","Consumable_Stone"};
	};
	class CraftSuppressor
	{
		name = "Craft Improvised Suppressor";
		material[] = {"Drink_WaterBottle"};
		tools[] = {"Consumable_DuctTape"};
		results[] = {"Att_Suppressor_Improvised"};
		condition = "damage _material1 < 1 and damage _tool1 < 1 and ((quantity _tool1) > 0.24)";
		action = "_condition = damage _material1;_result1 setDamage _condition;_tool1 addQuantity - 0.25;if((quantity _tool1) == 0)then{deleteVehicle _tool1;};";
	};
	class CraftArmbands
	{
		name = "Cut into armbands";
		material[] = {"Raincoat_Yellow"};
		tools[] = {"KnifeBase"};
		results[] = {"Armband_Yellow"};
		condition = "count (itemsInCargo _material1) == 0";
		action = "_condition = damage _material1;_result1 setQuantity 5;_result1 setDamage _condition;";
	};
	class CraftArmbandsAxe: CraftArmbands
	{
		tools[] = {"AxeBase"};
	};
	class CraftArmbandsBay: CraftArmbands
	{
		tools[] = {"BayonetBase"};
	};
	class CraftArmbandsOrange: CraftArmbands
	{
		material[] = {"Raincoat_Orange"};
		results[] = {"Armband_Orange"};
	};
	class CraftArmbandsOrangeAxe: CraftArmbandsOrange
	{
		tools[] = {"AxeBase"};
	};
	class CraftArmbandsOrangeBay: CraftArmbandsOrange
	{
		tools[] = {"BayonetBase"};
	};
	class CraftArmbandsRed: CraftArmbands
	{
		material[] = {"Raincoat_Red"};
		results[] = {"Armband_Red"};
	};
	class CraftArmbandsRedAxe: CraftArmbandsRed
	{
		tools[] = {"AxeBase"};
	};
	class CraftArmbandsRedBay: CraftArmbandsRed
	{
		tools[] = {"BayonetBase"};
	};
	class CraftArmbandsGreen: CraftArmbands
	{
		material[] = {"Raincoat_Green"};
		results[] = {"Armband_Green"};
	};
	class CraftArmbandsGreenAxe: CraftArmbandsGreen
	{
		tools[] = {"AxeBase"};
	};
	class CraftArmbandsGreenBay: CraftArmbandsGreen
	{
		tools[] = {"BayonetBase"};
	};
	class CraftArmbandsBlue: CraftArmbands
	{
		material[] = {"Raincoat_Blue"};
		results[] = {"Armband_Blue"};
	};
	class CraftArmbandsBlueAxe: CraftArmbandsBlue
	{
		tools[] = {"AxeBase"};
	};
	class CraftArmbandsBlueBay: CraftArmbandsBlue
	{
		tools[] = {"BayonetBase"};
	};
	class CraftArmbandsBlack: CraftArmbands
	{
		material[] = {"Raincoat_Black"};
		results[] = {"Armband_Black"};
	};
	class CraftArmbandsBlackAxe: CraftArmbandsBlack
	{
		tools[] = {"AxeBase"};
	};
	class CraftArmbandsBlackBay: CraftArmbandsBlack
	{
		tools[] = {"BayonetBase"};
	};
	class CraftArmbandsPurple: CraftArmbands
	{
		material[] = {"Raincoat_Purple"};
		results[] = {"Armband_Purple"};
	};
	class CraftArmbandsPurpleAxe: CraftArmbandsPurple
	{
		tools[] = {"AxeBase"};
	};
	class CraftArmbandsPurpleBay: CraftArmbandsPurple
	{
		tools[] = {"BayonetBase"};
	};
	class CraftArmbandsPink: CraftArmbands
	{
		material[] = {"Raincoat_Pink"};
		results[] = {"Armband_Pink"};
	};
	class CraftArmbandsPinkAxe: CraftArmbandsPink
	{
		tools[] = {"AxeBase"};
	};
	class CraftArmbandsPinkBay: CraftArmbandsPink
	{
		tools[] = {"BayonetBase"};
	};
	class CraftRags
	{
		name = "Tear into Rags";
		tools[] = {"ClothingBase","KnifeBase"};
		results[] = {"Consumable_Rags"};
		condition = "damage _tool2 < 1 and (getNumber(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'ragQuantity') > 0) and (itemParent _tool1 != _owner) and count (itemsInCargo _tool1) == 0 && _owner getVariable ['isUsingSomething',0] == 0";
		action = "_condition = damage _tool1; [_owner,_result1] call event_craftMessage; _result1 setVariable ['quantity',getNumber(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'ragQuantity')]; _result1 setDamage _condition; deleteVehicle _tool1;";
	};
	class CraftRagsSpear
	{
		name = "Tear into Rags";
		tools[] = {"ClothingBase","Crafting_Spear"};
		results[] = {"Consumable_Rags"};
		condition = "damage _tool2 < 1 and (getNumber(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'ragQuantity') > 0) and (itemParent _tool1 != _owner) and count (itemsInCargo _tool1) == 0";
		action = "_condition = damage _tool1; [_owner,_result1] call event_craftMessage; _result1 setVariable ['quantity',getNumber(configFile >> 'cfgVehicles' >> typeOf _tool1 >> 'ragQuantity')]; _result1 setDamage _condition; deleteVehicle _tool1;";
	};
	class CraftRagsAxe: CraftRags
	{
		tools[] = {"ClothingBase","AxeBase"};
	};
	class CraftRagsBayo: CraftRags
	{
		tools[] = {"ClothingBase","BayonetBase"};
	};
	class CombineRags
	{
		name = "Combine Rags";
		tools[] = {"Consumable_Rags","Consumable_Rags"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity; _condition = damage _tool2;";
	};
	class CraftRagRope
	{
		name = "Craft Improvised Rope";
		material[] = {"Consumable_Rags","Consumable_Rags"};
		condition = "((quantity _material2) == (maxQuantity _material2)) and ((quantity _material1) == (maxQuantity _material1)) and ((damage _material1) < 1) and ((damage _material2) < 1)";
		action = "_result1 setDamage (((damage _material1) + (damage _material2))/2);[_owner,_result1] call event_craftMessage;";
		results[] = {"Crafting_ImprovisedRope"};
	};
	class SplitRags
	{
		name = "Split Rags";
		tools[] = {"Consumable_Rags"};
		condition = "(quantity _tool1) > 1";
		action = "'action_bandage' call player_splitQuantity;";
	};
	class CleanRags
	{
		name = "Clean Rags";
		tools[] = {"Consumable_Rags","BottleBase"};
		condition = "(damage _tool1 < 1 && damage _tool2 < 1) &&_tool2 getVariable 'liquidType' == 'Disinfectant' && quantity _tool2 > 0";
		action = "_dmg = damage _tool1; _quantity = quantity _tool2; _newQuantity = _quantity -  (50* (quantity _tool1));  if (_newQuantity < 0) then {_tool1 setDamage ((damage _tool1) - ( 0.3 * (1/(quantity _tool1))));_tool2 setVariable ['quantity',0];}else{_tool2 setVariable ['quantity',_newQuantity];_tool1 setDamage 0;}; [_owner,format['I have cleaned Rags',''],'colorAction'] call fnc_playerMessage;";
	};
	class CraftArmband
	{
		name = "Craft Armband";
		tools[] = {"Consumable_Rags"};
		results[] = {"Armband_White"};
		condition = "(quantity _tool1) > 0";
		action = "if((quantity _tool1) > 1)then{_tool1 addQuantity -1;}else{deleteVehicle _tool1;};[_owner,_result1] call event_craftMessage; _result1 setDamage (damage _tool1);_result1 setQuantity 1;";
	};
	class CraftstoneKnife
	{
		name = "Craft Stone Knife";
		tools[] = {"Consumable_SmallStone"};
		condition = "(quantity _tool1) > 0 and !(itemParent _tool1 isKindOf 'FireplaceBase')";
		action = "_tool1 addQuantity -1; if(quantity _tool1 <= 0)then{deleteVehicle _tool1;};_owner playAction ['PlayerCraft',{_stone = ['Tool_StoneKnife',_this] call player_addInventory;[_this,'I have crafted Stone Knife.',''] call fnc_playerMessage;}];";
	};
	class CombineFirewood
	{
		name = "Add Firewood";
		tools[] = {"Consumable_Firewood","Consumable_Firewood"};
		condition = "quantity _tool2 < maxQuantity _tool2 && (isNull itemParent _tool2 || itemParent _tool2 isKindOf 'FireplaceBase')";
		action = "call player_combineQuantity;";
	};
	class SplitFirewood
	{
		name = "Split Firewood";
		tools[] = {"Consumable_Firewood"};
		sound = "";
		condition = "quantity _tool1 > 1 && _owner getVariable ['isUsingSomething',0] == 0";
		action = "call player_splitQuantity;";
	};
	class CombineArmband
	{
		name = "Combine Armbands";
		tools[] = {"Armband_Yellow","Armband_Yellow"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity;";
	};
	class CombineArmband_Orange: CombineArmband
	{
		tools[] = {"Armband_Orange","Armband_Orange"};
	};
	class CombineArmband_Green: CombineArmband
	{
		tools[] = {"Armband_Green","Armband_Green"};
	};
	class CombineArmband_Red: CombineArmband
	{
		tools[] = {"Armband_Red","Armband_Red"};
	};
	class CombineArmband_Blue: CombineArmband
	{
		tools[] = {"Armband_Blue","Armband_Blue"};
	};
	class CombineArmband_Purple: CombineArmband
	{
		tools[] = {"Armband_Purple","Armband_Purple"};
	};
	class CombineArmband_Pink: CombineArmband
	{
		tools[] = {"Armband_Pink","Armband_Pink"};
	};
	class CombineArmband_Black: CombineArmband
	{
		tools[] = {"Armband_Black","Armband_Black"};
	};
	class SplitArmband
	{
		name = "Split Armbands";
		tools[] = {"ArmbandBase"};
		sound = "";
		condition = "quantity _tool1 > 1 && _owner getVariable ['isUsingSomething',0] == 0";
		action = "call player_splitQuantity;";
	};
	class CombineStones
	{
		name = "Add Stones";
		tools[] = {"Consumable_Stone","Consumable_Stone"};
		condition = "(quantity _tool2 < maxQuantity _tool2) && !(itemParent _tool2 isKindOf 'FireplaceBase')";
		action = "call player_combineQuantity;";
	};
	class SplitStones
	{
		name = "Split Stones";
		tools[] = {"Consumable_Stone"};
		sound = "";
		condition = "(quantity _tool1) > 1 and !(itemParent _tool1 isKindOf 'FireplaceBase')";
		action = "call player_splitQuantity;";
	};
	class CombineBones
	{
		name = "Add Bones";
		tools[] = {"Consumable_Bones","Consumable_Bones"};
		condition = "(quantity _tool2 < maxQuantity _tool2) && !(itemParent _tool2 isKindOf 'FireplaceBase')";
		action = "call player_combineQuantity;";
	};
	class SplitBones
	{
		name = "Split Bones";
		tools[] = {"Consumable_Bones"};
		sound = "";
		condition = "(quantity _tool1) > 1 and !(itemParent _tool1 isKindOf 'FireplaceBase')";
		action = "call player_splitQuantity;";
	};
	class SplitStonesPick
	{
		name = "Split in half and make small stones";
		material[] = {"Consumable_Stone"};
		tools[] = {"Pickaxe"};
		condition = "(quantity _material1) > 0 && _owner getVariable ['isUsingSomething',0] == 0 && !(_material1 isKindOf 'Consumable_SmallStone')";
		results[] = {"Consumable_SmallStone","Consumable_SmallStone"};
		action = "_result1 setDamage (damage _material1);_result2 setDamage (damage _material1);_result2 setQuantity (quantity _material1);_result1 setQuantity (quantity _material1);[_owner,'I have made smaller stones.','colorAction'] call fnc_playerMessage;";
	};
	class SplitStonesSledge: SplitStonesPick
	{
		tools[] = {"SledgeHammer"};
	};
	class CombineWorms
	{
		name = "Add Worms";
		tools[] = {"Food_Worm","Food_Worm"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity;";
	};
	class SplitWorms
	{
		name = "Split Worms";
		tools[] = {"Food_Worm"};
		condition = "quantity _tool1 > 1";
		action = "call player_splitQuantity;";
	};
	class CombineNetting
	{
		name = "Combine Netting";
		tools[] = {"Consumable_Netting","Consumable_Netting"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity;";
	};
	class SplitNetting
	{
		name = "Split Netting";
		tools[] = {"Consumable_Netting"};
		condition = "quantity _tool1 > 1";
		action = "call player_splitQuantity;";
	};
	class CombineBurlapStrips
	{
		name = "Combine Burlap Strips";
		tools[] = {"Consumable_Burlapstrips","Consumable_Burlapstrips"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity;";
	};
	class SplitBurlapStrips
	{
		name = "Split Burlap Strips";
		tools[] = {"Consumable_Burlapstrips"};
		condition = "quantity _tool1 > 1";
		action = "call player_splitQuantity;";
	};
	class PaintFireAxe
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"FirefighterAxeBase","SpraycanBase"};
		action = "['FirefighterAxe','CfgVehicles'] call player_paintItem;";
	};
	class PaintSKS
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"SKSBase","SpraycanBase"};
		action = "['SKS','cfgWeapons'] call player_paintItem;";
	};
	class PaintMosin
	{
		name = "Add %TOOL2 to %TOOL1";
		tools[] = {"Mosin9130Base","SpraycanBase"};
		action = "[(typeOf _tool1),'cfgWeapons'] call player_paintItem;";
	};
	class RepaintMosin
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Mosin9130Base","SpraycanBase"};
		action = "['Mosin9130','cfgWeapons'] call player_paintItem;";
	};
	class PaintSawedoffMosin
	{
		name = "Add %TOOL2 to %TOOL1";
		tools[] = {"Mosin9130_SawedoffBase","SpraycanBase"};
		action = "[(typeOf _tool1),'cfgWeapons'] call player_paintItem;";
	};
	class RepaintSawedoffMosin
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Mosin9130_SawedoffBase","SpraycanBase"};
		action = "['Mosin9130_Sawedoff','cfgWeapons'] call player_paintItem;";
	};
	class RepaintM4A1
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"M4A1","SpraycanBase"};
		action = "['M4A1','cfgWeapons'] call player_paintItem;";
	};
	class PaintRuger1022
	{
		name = "Add %TOOL2 to %TOOL1";
		tools[] = {"Ruger1022Base","SpraycanBase"};
		action = "['Ruger1022','cfgWeapons'] call player_paintItem;";
	};
	class Paintb95
	{
		name = "Add %TOOL2 to %TOOL1";
		tools[] = {"b95Base","SpraycanBase"};
		action = "['b95','cfgWeapons'] call player_paintItem;";
	};
	class RepaintMotohelmetDark
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"MotoHelmetDarkBase","SpraycanBase"};
		condition = "true";
		action = "['MotoHelmetDark','cfgVehicles'] call player_paintItem;";
	};
	class RepaintMotohelmet
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"MotoHelmetBase","SpraycanBase"};
		condition = "true";
		action = "['MotoHelmet','cfgVehicles'] call player_paintItem;";
	};
	class Paintcz527
	{
		name = "Add %TOOL2 to %TOOL1";
		tools[] = {"cz527Base","SpraycanBase"};
		action = "[(typeOf _tool1),'cfgWeapons'] call player_paintItem;";
	};
	class Repaintcz527
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"cz527Base","SpraycanBase"};
		action = "['cz527','cfgWeapons'] call player_paintItem;";
	};
	class RepaintBallisticHelmet
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"BallisticHelmetBase","SpraycanBase"};
		condition = "true";
		action = "['BallisticHelmet','cfgVehicles'] call player_paintItem;";
	};
	class RepaintPilotHelmet_ZSh3
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"PilotHelmet_ZSh3","SpraycanBase"};
		condition = "true";
		action = "['PilotHelmet_ZSh3','cfgVehicles'] call player_paintItem;";
	};
	class RepaintGorkaHelmet
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"GorkaHelmet","SpraycanBase"};
		condition = "true";
		action = "['GorkaHelmet','cfgVehicles'] call player_paintItem;";
	};
	class RepaintGorkaHelmet_complete
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"GorkaHelmet_complete","SpraycanBase"};
		condition = "true";
		action = "['GorkaHelmet_complete','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAK74
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"AK74","SpraycanBase"};
		action = "['AK74','cfgWeapons'] call player_paintItem;";
	};
	class RepaintAKS74U
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"AKS74U","SpraycanBase"};
		action = "['AKS74U','cfgWeapons'] call player_paintItem;";
	};
	class RepaintAK101
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"AK101","SpraycanBase"};
		action = "['AK101','cfgWeapons'] call player_paintItem;";
	};
	class RepaintM_akm_drum
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"M_akm_drum","SpraycanBase"};
		action = "['M_akm_drum','CfgMagazines'] call player_paintItem;";
	};
	class SplitWoodenPlanks
	{
		name = "Split wooden planks";
		tools[] = {"Consumable_WoodenPlanks"};
		condition = "(quantity _tool1) > 1";
		action = "call player_splitQuantity;";
	};
	class CombineWoodenPlanks
	{
		name = "Combine wooden planks";
		tools[] = {"Consumable_WoodenPlanks","Consumable_WoodenPlanks"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity; _condition = damage _tool2;";
	};
	class SplitMetalPlates
	{
		name = "Split metal plates";
		tools[] = {"Consumable_MetalPlates"};
		condition = "(quantity _tool1) > 1";
		action = "call player_splitQuantity;";
	};
	class CombineMetalPlates
	{
		name = "Combine metal plates";
		tools[] = {"Consumable_MetalPlates","Consumable_MetalPlates"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity; _condition = damage _tool2;";
	};
	class CombineGardenLime
	{
		name = "Combine garden limes";
		tools[] = {"Consumable_GardenLime","Consumable_GardenLime"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity; _condition = damage _tool2;";
	};
	class CombineTannedLeather
	{
		name = "Add Tanned Leather";
		tools[] = {"Consumable_TannedLeather","Consumable_TannedLeather"};
		condition = "(quantity _tool2 < maxQuantity _tool2)";
		action = "call player_combineQuantity;";
	};
	class SplitTannedLeather
	{
		name = "Split Tanned Leather";
		tools[] = {"Consumable_TannedLeather"};
		condition = "(quantity _tool1) > 1";
		action = "call player_splitQuantity;";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Box_Base;
	class EnergyItem_Base;
	class Paper: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Paper0";
		descriptionShort = "$STR_CfgVehicles_Paper1";
		model = "\dz\gear\consumables\Paper.p3d";
		SingleUseActions[] = {535};
		ContinuousActions[] = {220};
		isMeleeWeapon = 1;
		weight = 2;
		absorbency = 1;
		rotationFlags = 16;
		itemSize[] = {1,1};
		inventorySlot = "Paper";
		lootTag[] = {"Civilian","Office"};
		lootCategory = "Materials";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},{0.5,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}};
				};
			};
		};
	};
	class DuctTape: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_DuctTape0";
		descriptionShort = "$STR_CfgVehicles_DuctTape1";
		model = "\dz\gear\consumables\DuctTape.p3d";
		ContinuousActions[] = {109};
		isMeleeWeapon = 1;
		weight = 500;
		absorbency = 0.3;
		itemSize[] = {1,2};
		rotationFlags = 17;
		stackedUnit = "percentage";
		quantityBar = 1;
		varQuantityInit = 100.0;
		varQuantityMin = 0.0;
		varQuantityMax = 100.0;
		repairKitType = 5;
		lootTag[] = {"Civilian","Office"};
		lootCategory = "Materials";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\duct_tape.rvmat"}},{0.5,{"DZ\gear\consumables\data\duct_tape_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\duct_tape_destruct.rvmat"}}};
				};
			};
		};
	};
	class Bandana_ColorBase: Inventory_Base
	{
		displayName = "$STR_CfgVehicles_Bandana_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Bandana_ColorBase1";
		model = "\dz\gear\consumables\BandanaFH_ground.p3d";
		inventorySlot[] = {"Headgear","Mask"};
		ContinuousActions[] = {113,112};
		weight = 119;
		itemSize[] = {2,1};
		absorbency = 0.3;
		rotationFlags = 17;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		lootTag[] = {"Civilian"};
		lootCategory = "Materials";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\BandanaFH_ground_redpattern_co.paa","dz\characters\headgear\data\BandanaFH_ground_redpattern_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\duct_tape.rvmat"}},{0.5,{"DZ\gear\consumables\data\duct_tape_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\duct_tape_destruct.rvmat"}}};
				};
			};
		};
	};
	class Bandana_Redpattern: Bandana_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Bandana_Redpattern0";
		color = "redpattern";
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\BandanaFH_ground_redpattern_co.paa","dz\characters\headgear\data\BandanaFH_ground_redpattern_co.paa"};
	};
	class Bandana_Blackpattern: Bandana_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Bandana_Blackpattern0";
		color = "blackpattern";
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\BandanaFH_ground_blackpattern_co.paa","dz\characters\headgear\data\BandanaFH_ground_blackpattern_co.paa"};
	};
	class Bandana_Polkapattern: Bandana_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Bandana_Polkapattern0";
		color = "polkapattern";
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\BandanaFH_g_karkulka_co.paa","dz\characters\headgear\data\BandanaFH_g_karkulka_co.paa"};
	};
	class Bandana_Greenpattern: Bandana_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Bandana_Greenpattern0";
		color = "greenpattern";
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\BandanaFHG_olive_co.paa","dz\characters\headgear\data\BandanaFHG_olive_co.paa"};
	};
	class Bandana_Camopattern: Bandana_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Bandana_Camopattern0";
		color = "camopattern";
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\BandanaFHG_TTsKO_co.paa","dz\characters\headgear\data\BandanaFHG_TTsKO_co.paa"};
	};
	class Rag: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Rag0";
		descriptionShort = "$STR_CfgVehicles_Rag1";
		model = "\dz\gear\consumables\Rags.p3d";
		ContinuousActions[] = {113,112};
		itemSize[] = {1,2};
		weight = 20;
		absorbency = 1;
		inventorySlot = "Rags";
		canBeSplit = 1;
		varQuantityInit = 6.0;
		varQuantityMin = 0.0;
		varQuantityMax = 6.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Crafted";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		rotationFlags = 17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\rags_bandages.rvmat"}},{0.5,{"DZ\gear\consumables\data\rags_bandages_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\rags_bandages_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 201;
				};
				class Bandage_loop2
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 202;
				};
				class Bandage_loop3
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 203;
				};
				class Bandage_start
				{
					soundSet = "Bandage_start_SoundSet";
					id = 204;
				};
				class Bandage_end
				{
					soundSet = "Bandage_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class BurlapStrip: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BurlapStrip0";
		descriptionShort = "$STR_CfgVehicles_BurlapStrip1";
		model = "\DZ\gear\crafting\sackcloth_rag.p3d";
		lootCategory = "Crafted";
		weight = 50;
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 10.0;
		rotationFlags = 17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\weaponcamo.rvmat"}},{0.5,{"DZ\gear\consumables\data\weaponcamo_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\weaponcamo_destruct.rvmat"}}};
				};
			};
		};
	};
	class Stone: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Stone0";
		descriptionShort = "$STR_CfgVehicles_Stone1";
		model = "\dz\gear\consumables\Stone.p3d";
		animClass = "NoFireClass";
		lootCategory = "Crafted";
		weight = 1000;
		itemSize[] = {4,3};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 8.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		inventorySlot = "Stones";
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\stone.rvmat"}},{0.5,{"DZ\gear\consumables\data\stone_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\stone_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class SmallStone: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SmallStone0";
		descriptionShort = "$STR_CfgVehicles_SmallStone1";
		model = "\dz\gear\consumables\SmallStone.p3d";
		animClass = "NoFireClass";
		lootCategory = "Crafted";
		weight = 500;
		itemSize[] = {1,1};
		canBeSplit = 1;
		varQuantityInit = 8.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		rotationFlags = 17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\stone.rvmat"}},{0.5,{"DZ\gear\consumables\data\stone_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\stone_destruct.rvmat"}}};
				};
			};
		};
	};
	class Firewood: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Firewood0";
		descriptionShort = "$STR_CfgVehicles_Firewood1";
		model = "\dz\gear\cooking\log01.p3d";
		animClass = "NoFireClass";
		lootCategory = "Crafted";
		SingleUseActions[] = {560};
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 6.0;
		varQuantityDestroyOnMin = 1;
		varStackMax = 1.0;
		absorbency = 0.3;
		weight = 2000;
		itemSize[] = {4,3};
		inventorySlot = "Firewood";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\log01.rvmat"}},{0.5,{"DZ\gear\consumables\data\log01_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\log01_destruct.rvmat"}}};
				};
			};
		};
	};
	class Battery9V: EnergyItem_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Battery9V0";
		descriptionShort = "$STR_CfgVehicles_Battery9V1";
		model = "\dz\gear\consumables\9v_battery.p3d";
		inventorySlot = "BatteryD";
		InteractActions[] = {};
		SingleUseActions[] = {508};
		ContinuousActions[] = {};
		isMeleeWeapon = 1;
		itemSize[] = {1,1};
		weight = 10;
		absorbency = 0.8;
		lootTag[] = {"Civilian","Work","Medic"};
		rotationFlags = 17;
		quantityBar = 1;
		class EnergyManager
		{
			hasIcon = 1;
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 50;
			energyAtSpawn = 50;
			reduceMaxEnergyByDamageCoef = 1;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {1};
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\9v.rvmat"}},{0.5,{"DZ\gear\consumables\data\9v_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\9v_destruct.rvmat"}}};
				};
			};
		};
	};
	class LargeGasCanister: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_LargeGasCanister0";
		descriptionShort = "$STR_CfgVehicles_LargeGasCanister1";
		model = "\dz\gear\consumables\GasCannisterLarge.p3d";
		overrideDrawArea = "8.0";
		weight = 340;
		itemSize[] = {2,3};
		inventorySlot = "GasCanister";
		quantityBar = 1;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping"};
		tooltipResources[] = {"butane"};
		class EnergyManager
		{
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 800;
			energyUsagePerSecond = 0;
			energyAtSpawn = 800;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {7};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\LootGasCannisterLarge.rvmat"}},{0.5,{"DZ\gear\consumables\data\LootGasCannisterLarge_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\LootGasCannisterLarge_destruct.rvmat"}}};
				};
			};
		};
	};
	class MediumGasCanister: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_MediumGasCanister0";
		descriptionShort = "$STR_CfgVehicles_MediumGasCanister1";
		model = "\dz\gear\consumables\GasCannisterMedium.p3d";
		overrideDrawArea = "8.0";
		weight = 220;
		itemSize[] = {2,2};
		inventorySlot = "GasCanister";
		quantityBar = 1;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping"};
		tooltipResources[] = {"butane"};
		class EnergyManager
		{
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 650;
			energyUsagePerSecond = 0;
			energyAtSpawn = 650;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {7};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\LootGasCannisterMedium.rvmat"}},{0.5,{"DZ\gear\consumables\data\LootGasCannisterMedium_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\LootGasCannisterMedium_destruct.rvmat"}}};
				};
			};
		};
	};
	class SmallGasCanister: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SmallGasCanister0";
		descriptionShort = "$STR_CfgVehicles_SmallGasCanister1";
		model = "\dz\gear\consumables\GasCannisterSmall.p3d";
		overrideDrawArea = "8.0";
		itemSize[] = {2,1};
		weight = 160;
		inventorySlot = "GasCanister";
		quantityBar = 1;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping"};
		tooltipResources[] = {"butane"};
		class EnergyManager
		{
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 330;
			energyUsagePerSecond = 0;
			energyAtSpawn = 330;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {7};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\LootGasCannisterSmall.rvmat"}},{0.5,{"DZ\gear\consumables\data\LootGasCannisterSmall_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\LootGasCannisterSmall_destruct.rvmat"}}};
				};
			};
		};
	};
	class ButaneCanister: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ButaneCanister0";
		descriptionShort = "$STR_CfgVehicles_ButaneCanister1";
		model = "\dz\gear\consumables\ButaneCanister.p3d";
		overrideDrawArea = "8.0";
		weight = 120;
		itemSize[] = {2,3};
		inventorySlot = "ButaneTorchCanister";
		quantityBar = 1;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping"};
		tooltipResources[] = {"butane"};
		class Resources
		{
			butane = 150;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\butane_canister.rvmat"}},{0.5,{"DZ\gear\consumables\data\butane_canister_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\butane_canister_destruct.rvmat"}}};
				};
			};
		};
	};
	class Spraycan_ColorBase: Inventory_Base
	{
		displayName = "$STR_CfgVehicles_Spraycan_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Spraycan_ColorBase1";
		model = "\dz\gear\consumables\spraycan.p3d";
		weight = 100;
		itemSize[] = {2,3};
		stackedUnit = "ml";
		varQuantityInit = 100.0;
		varQuantityMin = 0.0;
		varQuantityMax = 100.0;
		quantityBar = 1;
		lootTag[] = {"Work"};
		lootCategory = "Materials";
		hiddenSelections[] = {"camo"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\butane_canister.rvmat"}},{0.5,{"DZ\gear\consumables\data\butane_canister_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\butane_canister_destruct.rvmat"}}};
				};
			};
		};
	};
	class Spraycan_Black: Spraycan_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Spraycan_Black0";
		color = "Black";
		hiddenSelectionsTextures[] = {"DZ\gear\consumables\data\spraycan_black_co.paa"};
	};
	class Spraycan_Green: Spraycan_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Spraycan_Green0";
		color = "Green";
		hiddenSelectionsTextures[] = {"DZ\gear\consumables\data\spraycan_green_co.paa"};
	};
	class Matchbox: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Matchbox0";
		descriptionShort = "$STR_CfgVehicles_Matchbox1";
		model = "\dz\gear\consumables\Matchbox.p3d";
		SingleUseActions[] = {536};
		ContinuousActions[] = {172};
		isMeleeWeapon = 1;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Kitchen","Camping","Work","Farm"};
		itemSize[] = {1,1};
		weight = 0;
		quantityBar = 1;
		varQuantityInit = 100.0;
		varQuantityMin = 0.0;
		varQuantityMax = 100.0;
		varQuantityDestroyOnMin = 0;
		destroyOnEmpty = 0;
		absorbency = 0.8;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\matchbox.rvmat"}},{0.5,{"DZ\gear\consumables\data\matchbox_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\matchbox_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MatchStrike
				{
					soundSet = "MatchStrike_SoundSet";
					id = 201;
				};
				class MatchOut
				{
					soundSet = "MatchOut_SoundSet";
					id = 202;
				};
				class MatchIgnite
				{
					soundSet = "MatchIgnite_SoundSet";
					id = 203;
				};
			};
		};
	};
	class NailBox: Box_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_NailBox0";
		descriptionShort = "$STR_CfgVehicles_NailBox1";
		model = "\dz\gear\consumables\Nails_box.p3d";
		weight = 2540;
		absorbency = 0.8;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping","Work","Farm","Forester"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\Box_of_Nails.rvmat"}},{0.5,{"DZ\gear\consumables\data\Box_of_Nails_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\Box_of_Nails_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			class Nail
			{
				value = 70;
				variable = "quantity";
			};
		};
	};
	class Roadflare: EnergyItem_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Roadflare0";
		descriptionShort = "$STR_CfgVehicles_Roadflare1";
		model = "\dz\gear\consumables\road_flare.p3d";
		overrideDrawArea = "8.0";
		inventorySlot = "tripWireAttachment";
		SingleUseActions[] = {509};
		ContinuousActions[] = {175};
		rotationFlags = 17;
		itemSize[] = {1,3};
		weight = 50;
		absorbency = 0.5;
		lootTag[] = {"Military_east","Military_west","Police"};
		lootCategory = "Tools";
		hiddenSelections[] = {"flame"};
		hiddenSelectionsTextures[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\Road_flare.rvmat"}},{0.5,{"DZ\gear\consumables\data\Road_flare_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\Road_flare_destruct.rvmat"}}};
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
			energyAtSpawn = 600;
			energyUsagePerSecond = 1;
			wetnessExposure = 0.1;
		};
		class AnimationSources
		{
			class Sticks_Flare_Folded_1
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Sticks_Flare_Unfolded_1
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,0.3,0.3,1.0};
				brightness = 1.0;
				radius = 20;
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
				class Flare_strike
				{
					soundSet = "Flare_strike_SoundSet";
					id = 201;
				};
				class Flare_open
				{
					soundSet = "Flare_open_SoundSet";
					id = 202;
				};
			};
		};
	};
	class Chemlight_ColorBase: EnergyItem_Base
	{
		displayName = "$STR_CfgVehicles_Chemlight_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Chemlight_ColorBase1";
		model = "\dz\gear\consumables\Chemlight.p3d";
		overrideDrawArea = "8.0";
		SingleUseActions[] = {509};
		rotationFlags = 17;
		itemSize[] = {2,1};
		weight = 30;
		lootTag[] = {"Military_east","Military_west","Firefighters","Police"};
		lootCategory = "Materials";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\gear\consumables\data\chemlight_ca.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\Road_flare.rvmat"}},{0.5,{"DZ\gear\consumables\data\Road_flare_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\Road_flare_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			energyAtSpawn = 900;
			energyUsagePerSecond = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Chemlight
				{
					soundSet = "Chemlight_break_SoundSet";
					id = 201;
				};
			};
		};
	};
	class Chemlight_White: Chemlight_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Chemlight_White0";
		hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_white_off.rvmat"};
		class flame
		{
			sound = "-";
			material = "dz\gear\consumables\data\chemlight_white_on.rvmat";
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {0.9,0.9,1.0,1.0};
				brightness = 1.0;
				radius = 5;
				dayLight = 1;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 4;
				fireEffectPersistence = 0.99;
				fireEffectFract = 0.33;
			};
		};
	};
	class Chemlight_Red: Chemlight_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Chemlight_Red0";
		hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_red_off.rvmat"};
		class flame
		{
			sound = "-";
			material = "dz\gear\consumables\data\chemlight_red_on.rvmat";
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,0.3,0.2,1.0};
				brightness = 1.0;
				radius = 5;
				dayLight = 1;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 4;
				fireEffectPersistence = 0.99;
				fireEffectFract = 0.33;
			};
		};
	};
	class Chemlight_Green: Chemlight_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Chemlight_Green0";
		hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_green_off.rvmat"};
		class flame
		{
			sound = "-";
			material = "dz\gear\consumables\data\chemlight_green_on.rvmat";
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {0.3,1.0,0.2,1.0};
				brightness = 1.0;
				radius = 5;
				dayLight = 1;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 4;
				fireEffectPersistence = 0.99;
				fireEffectFract = 0.33;
			};
		};
	};
	class Chemlight_Blue: Chemlight_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Chemlight_Blue0";
		hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_blue_off.rvmat"};
		class flame
		{
			sound = "-";
			material = "dz\gear\consumables\data\chemlight_blue_on.rvmat";
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {0.3,0.3,1.0,1.0};
				brightness = 1.0;
				radius = 5;
				dayLight = 1;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 4;
				fireEffectPersistence = 0.99;
				fireEffectFract = 0.33;
			};
		};
	};
	class Chemlight_Yellow: Chemlight_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Chemlight_Yellow0";
		hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_yellow_off.rvmat"};
		class flame
		{
			sound = "-";
			material = "dz\gear\consumables\data\chemlight_yellow_on.rvmat";
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,1.0,0.3,1.0};
				brightness = 1.0;
				radius = 5;
				dayLight = 1;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 4;
				fireEffectPersistence = 0.99;
				fireEffectFract = 0.33;
			};
		};
	};
	class Pelt_Base: Inventory_Base
	{
		displayName = "$STR_CfgVehicles_Pelt_Base0";
		descriptionShort = "$STR_CfgVehicles_Pelt_Base1";
		animClass = "NoFireClass";
		lootCategory = "Crafted";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		absorbency = 0.3;
	};
	class WildboarPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WildboarPelt0";
		model = "\dz\gear\consumables\Pelt_Wildboar.p3d";
		weight = 420;
		itemSize[] = {4,3};
		peltGain = 6;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_wildboar.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_wildboar_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_wildboar_destruct.rvmat"}}};
				};
			};
		};
	};
	class RabbitPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_RabbitPelt0";
		model = "\dz\gear\consumables\Pelt_Rabbit.p3d";
		itemSize[] = {3,2};
		weight = 220;
		peltGain = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_rabbit.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_rabbit_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_rabbit_destruct.rvmat"}}};
				};
			};
		};
	};
	class CowPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CowPelt0";
		model = "\dz\gear\consumables\Pelt_Cow.p3d";
		peltGain = 12;
		itemSize[] = {6,3};
		weight = 960;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_cow.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_cow_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_cow_destruct.rvmat"}}};
				};
			};
		};
	};
	class PigPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_PigPelt0";
		model = "\dz\gear\consumables\Pelt_Pig.p3d";
		peltGain = 6;
		weight = 420;
		itemSize[] = {4,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_cow.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_cow_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_cow_destruct.rvmat"}}};
				};
			};
		};
	};
	class DeerPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DeerPelt0";
		model = "\dz\gear\consumables\Pelt_Deer.p3d";
		peltGain = 8;
		itemSize[] = {5,4};
		weight = 420;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_deer.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_deer_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_deer_destruct.rvmat"}}};
				};
			};
		};
	};
	class GoatPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GoatPelt0";
		model = "\dz\gear\consumables\Pelt_Goat.p3d";
		peltGain = 4;
		weight = 380;
		itemSize[] = {4,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_goat.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_goat_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_goat_destruct.rvmat"}}};
				};
			};
		};
	};
	class BearPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BearPelt0";
		model = "\dz\gear\consumables\Pelt_Bear.p3d";
		peltGain = 10;
		weight = 1200;
		itemSize[] = {8,4};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_bear.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_bear_destruct.rvmat"}}};
				};
			};
		};
	};
	class WolfPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WolfPelt0";
		model = "\dz\gear\consumables\Pelt_Wolf.p3d";
		peltGain = 6;
		weight = 1200;
		itemSize[] = {8,4};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_wolf.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_wolf_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_wolf_destruct.rvmat"}}};
				};
			};
		};
	};
	class SheepPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SheepPelt0";
		model = "\dz\gear\consumables\Pelt_Sheep.p3d";
		weight = 1200;
		itemSize[] = {4,3};
		peltGain = 4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_sheep.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_sheep_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_sheep_destruct.rvmat"}}};
				};
			};
		};
	};
	class MouflonPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MouflonPelt0";
		model = "\dz\gear\consumables\Pelt_Mouflon.p3d";
		peltGain = 10;
		weight = 1200;
		itemSize[] = {4,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_sheep.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_sheep_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_sheep_destruct.rvmat"}}};
				};
			};
		};
	};
	class FoxPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FoxPelt0";
		model = "\dz\gear\consumables\Pelt_Fox.p3d";
		peltGain = 2;
		weight = 600;
		itemSize[] = {4,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_fox.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_fox_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_fox_destruct.rvmat"}}};
				};
			};
		};
	};
	class TannedLeather: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TannedLeather0";
		descriptionShort = "$STR_CfgVehicles_TannedLeather1";
		model = "\dz\gear\consumables\tanned_leather.p3d";
		lootCategory = "Crafted";
		itemSize[] = {2,1};
		canBeSplit = 1;
		varQuantityInit = 8.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		varQuantityDestroyOnMin = 1;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		absorbency = 0.3;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\tanned_leather.rvmat"}},{0.5,{"DZ\gear\consumables\data\tanned_leather_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\tanned_leather_destruct.rvmat"}}};
				};
			};
		};
	};
	class Hook: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Hook0";
		descriptionShort = "$STR_CfgVehicles_Hook1";
		model = "\dz\gear\consumables\bait_hook.p3d";
		rotationFlags = 12;
		weight = 1;
		itemSize[] = {2,2};
		absorbency = 0.8;
		inventorySlot = "Hook";
		lootTag[] = {"Fishing","Farm"};
		lootCategory = "Materials";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\bait.rvmat"}},{0.5,{"DZ\gear\consumables\data\bait_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\bait_destruct.rvmat"}}};
				};
			};
		};
	};
	class BoneHook: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BoneHook0";
		descriptionShort = "$STR_CfgVehicles_BoneHook1";
		model = "\dz\gear\crafting\bone_hook.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 1;
		absorbency = 0.8;
		inventorySlot = "Hook";
		lootCategory = "Crafted";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\bone_hook.rvmat"}},{0.5,{"DZ\gear\consumables\data\bone_hook_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\bone_hook_destruct.rvmat"}}};
				};
			};
		};
	};
	class Bark_ColorBase: Inventory_Base
	{
		displayName = "$STR_CfgVehicles_Bark_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Bark_ColorBase1";
		model = "\dz\gear\consumables\oak_bark.p3d";
		itemSize[] = {1,4};
		weight = 20;
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Materials";
	};
	class Bark_Oak: Bark_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Bark_Oak0";
		model = "\dz\gear\consumables\oak_bark.p3d";
		inventorySlot = "OakBark";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\oak_bark.rvmat"}},{0.5,{"DZ\gear\consumables\data\oak_bark_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\oak_bark_destruct.rvmat"}}};
				};
			};
		};
	};
	class Bark_Birch: Bark_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Bark_Birch0";
		model = "\dz\gear\consumables\birch_bark.p3d";
		inventorySlot = "BirchBark";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\birch_bark.rvmat"}},{0.5,{"DZ\gear\consumables\data\birch_bark_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\birch_bark_destruct.rvmat"}}};
				};
			};
		};
	};
	class Nail: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Nail0";
		descriptionShort = "$STR_CfgVehicles_Nail1";
		model = "\dz\gear\consumables\Nails_loose_10.p3d";
		itemSize[] = {2,1};
		weight = 36.28;
		canBeSplit = 1;
		varQuantityInit = 70.0;
		varQuantityMin = 0.0;
		varQuantityMax = 100.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Crafted";
		inventorySlot[] = {"NailsG_Down","NailsG_Up"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\Pile of Nails.rvmat"}},{0.5,{"DZ\gear\consumables\data\Pile of Nails_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\Pile of Nails_destruct.rvmat"}}};
				};
			};
		};
	};
	class Bone: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Bone0";
		descriptionShort = "$STR_CfgVehicles_Bone1";
		model = "\dz\gear\food\pile_of_bones.p3d";
		handheld = "true";
		weight = 200;
		itemSize[] = {2,2};
		canBeSplit = 1;
		varQuantityInit = 10.0;
		varQuantityMin = 0.0;
		varQuantityMax = 10.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Materials";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pile_of_bones.rvmat"}},{0.5,{"DZ\gear\consumables\data\pile_of_bones_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pile_of_bones_destruct.rvmat"}}};
				};
			};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
	};
	class Bait: EnergyItem_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Bait0";
		descriptionShort = "$STR_CfgVehicles_Bait1";
		model = "\dz\gear\consumables\bait_worm_pinned.p3d";
		lootCategory = "Crafted";
		rotationFlags = 17;
		itemSize[] = {1,2};
		tooltipResources[] = {"power"};
		weight = 15;
		absorbency = 0.8;
		inventorySlot = "Bait";
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\gear\consumables\data\bait.rvmat","DZ\gear\consumables\data\bait_damage.rvmat","DZ\gear\consumables\data\bait_destruct.rvmat"};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\bait.rvmat"}},{0.5,{"DZ\gear\consumables\data\bait_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\bait_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			power = 10;
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 1;
			};
		};
	};
	class BoneBait: EnergyItem_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BoneBait0";
		descriptionShort = "$STR_CfgVehicles_BoneBait1";
		model = "\dz\gear\crafting\bone_bait.p3d";
		lootCategory = "Crafted";
		inventorySlot = "Bait";
		itemSize[] = {1,2};
		rotationFlags = 17;
		tooltipResources[] = {"power"};
		weight = 15;
		absorbency = 0.8;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\data\data\default.rvmat","DZ\characters\data\Generic_damage.rvmat","DZ\characters\data\Generic_destruct.rvmat"};
		};
		class Resources
		{
			power = 10;
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 1;
			};
		};
	};
	class GardenLime: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_GardenLime0";
		descriptionShort = "$STR_CfgVehicles_GardenLime1";
		model = "\dz\gear\consumables\garden_lime.p3d";
		animClass = "NoFireClass";
		SingleUseActions[] = {560};
		weight = 100;
		itemSize[] = {3,6};
		stackedUnit = "g";
		quantityBar = 1;
		lootCategory = "Materials";
		lootTag[] = {"Farm","Work"};
		ContinuousActions[] = {161};
		inventorySlot = "Lime";
		varQuantityInit = 5000.0;
		varQuantityMin = 0.0;
		varQuantityMax = 5000.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\garden_lime.rvmat"}},{0.5,{"DZ\gear\consumables\data\garden_lime_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\garden_lime_destruct.rvmat"}}};
				};
			};
		};
		class Horticulture
		{
			TexId = 1;
			AddEnergyToSlot = 0.5;
			ConsumedQuantity = 250.0;
		};
	};
	class Netting: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Netting0";
		descriptionShort = "$STR_CfgVehicles_Netting1";
		model = "\dz\gear\consumables\Netting.p3d";
		animClass = "NoFireClass";
		rotationFlags = 17;
		absorbency = 0.3;
		itemSize[] = {2,3};
		weight = 400;
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 4.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Tools";
		lootTag[] = {"Fishing"};
	};
	class WoodenPlank: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WoodenPlank0";
		descriptionShort = "$STR_CfgVehicles_WoodenPlank1";
		model = "\dz\gear\consumables\single_plank.p3d";
		SingleUseActions[] = {560};
		weight = 1500;
		itemSize[] = {3,11};
		canBeSplit = 1;
		varQuantityInit = 500.0;
		varQuantityMin = 0.0;
		varQuantityMax = 500.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping","Work","Farm","Forester"};
		inventorySlot[] = {"PlanksG_Down","PlanksG_Up"};
	};
	class PileOfWoodenPlanks: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PileOfWoodenPlanks0";
		descriptionShort = "$STR_CfgVehicles_PileOfWoodenPlanks1";
		model = "\dz\gear\consumables\pile_of_planks.p3d";
		canBeSplit = 1;
		varQuantityInit = 84.0;
		varQuantityMin = 0.0;
		varQuantityMax = 84.0;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {10,10};
		weight = 5000;
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		class AnimationSources
		{
			class stage_1
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class stage_2
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class stage_3
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class MetalPlate: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_MetalPlate0";
		descriptionShort = "$STR_CfgVehicles_MetalPlate1";
		model = "\dz\gear\consumables\Single_Metal_Sheet.p3d";
		rotationFlags = 16;
		weight = 400;
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping","Work","Farm","Forester"};
		inventorySlot[] = {"PlatesG_Down","PlatesG_Up"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyroad_flare: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "tripWireAttachment";
		model = "\dz\gear\consumables\road_flare.p3d";
		class AnimationSources
		{
			class Sticks_Flare_Folded_1
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Sticks_Flare_Unfolded_1
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class ProxyGasCannisterLarge: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "GasCanister";
		model = "\dz\gear\consumables\GasCannisterLarge.p3d";
	};
	class Proxybait_hook: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Hook";
		model = "\dz\gear\consumables\bait_hook.p3d";
	};
};
//};
