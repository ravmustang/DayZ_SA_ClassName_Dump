class CfgPatches
{
	class DZ_Nonlethal
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Weapons"
		};
	};
};
class Mode_SemiAuto;
class Mode_Safe: Mode_SemiAuto
{
	magazines[]={};
};
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class DefaultWeapon;
	class NonlethalCore: DefaultWeapon
	{
		scope=0;
		targetCategory="loot";
		type=1;
		autoReload=0;
		rotationFlags=17;
		storageCategory=1;
		class Single: Mode_SemiAuto
		{
		};
		class NoiseShoot
		{
			strength=10;
			type="shot";
		};
		opticsZoomMin=0.414215;
		opticsZoomInit=0.57736999;
		opticsZoomMax=0.70021999;
		barrelArmor=400;
		magazineSlot="magazine";
	};
	class NonlethalPistol: NonlethalCore
	{
		itemSize[]={4,2};
		cursor="aimGunGhost";
		cursorAim="aimPistol";
		inventorySlot[]=
		{
			"Pistol"
		};
		animClass="Pistol";
		armAction="HandGun";
	};
	class NonlethalRifle: NonlethalCore
	{
		itemSize[]={8,2};
		cursor="aimGunGhost";
		cursorAim="aimRifle";
		inventorySlot[]=
		{
			"Shoulder"
		};
		animClass="Rifle";
	};
};
