class CfgPatches
{
	class DZ_Weapons_Firearms_AK74
	{
		units[]=
		{
			"AK74",
			"AK74_Black",
			"AK74_Green",
			"AKS74U",
			"AKS74U_Black",
			"AKS74U_Green"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class AK74_Base: Rifle_Base
	{
		scope=0;
		weight=3070;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		WeaponLength=0.85000002;
		ObstructionDistance=0.72500002;
		barrelArmor=2.743;
		initSpeedMultiplier=0.69999999;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		magazines[]=
		{
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Mag_AK74_45Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,0.85000002};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"magazine"
		};
		hiddenSelections[]=
		{
			"camo",
			"magazine"
		};
		class NoiseShoot
		{
			strength=80;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AK74_Shot_1st_SoundSet",
				"AK74_Shot_1st_iterior_SoundSet",
				"AK74_Tail_SoundSet",
				"AK74_InteriorTail_SoundSet",
				"AK74_Slapback_SoundSet",
				"AK74_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK74_1st_silencer_SoundSet",
					"AK74_silencerTail_SoundSet",
					"AK74_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK74_1st_silencerHomeMade_SoundSet",
					"AK74_silencerHomeMadeTail_SoundSet",
					"AK74_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_AK74";
			recoilProne="recoil_AK74_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"AK74_Shot_1st_SoundSet",
				"AK74_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"AK74_Shot_SoundSet",
				"AK74_Shot_iterior_SoundSet",
				"AK74_Tail_SoundSet",
				"AK74_InteriorTail_SoundSet",
				"AK74_Slapback_SoundSet",
				"AK74_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"AK74_1st_silencer_SoundSet"
				},
				
				{
					"AK74_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"AK74_silencer_SoundSet",
					"AK74_silencerTail_SoundSet",
					"AK74_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK74_silencerHomeMade_SoundSet",
					"AK74_silencerHomeMadeTail_SoundSet",
					"AK74_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.097999997;
			recoil="recoil_AK74";
			recoilProne="recoil_AK74_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
		};
		weaponStateAnim="dz\anims\anm\player\reloads\AK74U\w_AKS74U_states.anm";
	};
	class AK74: AK74_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_AK740";
		descriptionShort="$STR_cfgWeapons_AK741";
		model="\dz\weapons\firearms\AK101\ak101.p3d";
		attachments[]=
		{
			"weaponButtstockAK",
			"WeaponHandguardAK",
			"weaponWrap",
			"weaponOpticsAK",
			"weaponFlashlight",
			"weaponMuzzleAK",
			"weaponBayonetAK"
		};
		itemSize[]={8,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\AK101\data\ak101_co.paa",
			"DZ\weapons\attachments\magazine\data\magazine_ak74_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\AK101\data\ak101.rvmat",
			"DZ\weapons\attachments\magazine\data\magazine_ak74_tan.rvmat"
		};
		weaponStateAnim="dz/anims/anm/player/reloads/AK101/w_AK101_states.anm";
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
								"DZ\weapons\firearms\AK101\Data\ak101.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\AK101\Data\ak101.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\AK101\Data\ak101_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_ak74_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=8;
				shotsToStartOverheating=4;
				overheatingDecayInterval=0.69999999;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.69999999};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.69999999,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
	};
	class AK74_Black: AK74
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
	};
	class AK74_Green: AK74
	{
		scope=2;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
	};
	class AKS74U: AK74_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_AKS74U0";
		descriptionShort="$STR_cfgWeapons_AKS74U1";
		model="\dz\weapons\firearms\AK74\aks74u.p3d";
		attachments[]=
		{
			"weaponButtstockAK",
			"weaponWrap",
			"weaponMuzzleAK"
		};
		weight=2700;
		itemSize[]={6,3};
		PPDOFProperties[]={1,0.5,50,175,4,10};
		WeaponLength=0.70999998;
		ObstructionDistance=0.48800001;
		initSpeedMultiplier=0.56999999;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.8,1.8,0.69999999};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\AK74\data\aks74u_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\AK74\data\aks74u.rvmat"
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
								"DZ\weapons\firearms\ak74\Data\aks74u.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\ak74\Data\aks74u.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\ak74\Data\aks74u_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\ak74\Data\aks74u_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\ak74\Data\aks74u_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"AKSU_Shot_1st_SoundSet",
				"AKSU_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"AKSU_Shot_SoundSet",
				"AKSU_Shot_iterior_SoundSet",
				"AKSU_Tail_SoundSet",
				"AKSU_InteriorTail_SoundSet",
				"AKSU_Slapback_SoundSet",
				"AKSU_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"AKSU_1st_silencer_SoundSet"
				},
				
				{
					"AKSU_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"AKSU_silencer_SoundSet",
					"AKSU_silencerTail_SoundSet",
					"AKSU_silencerInteriorTail_SoundSet"
				},
				
				{
					"AKSU_silencerHomeMade_SoundSet",
					"AKSU_silencerHomeMadeTail_SoundSet",
					"AKSU_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.097999997;
			recoil="recoil_AK74";
			recoilProne="recoil_AK74_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AKSU_Shot_1st_SoundSet",
				"AKSU_Shot_1st_iterior_SoundSet",
				"AKSU_Tail_SoundSet",
				"AKSU_InteriorTail_SoundSet",
				"AKSU_Slapback_SoundSet",
				"AKSU_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AKSU_1st_silencer_SoundSet",
					"AKSU_silencerTail_SoundSet",
					"AKSU_silencerInteriorTail_SoundSet"
				},
				
				{
					"AKSU_1st_silencerHomeMade_SoundSet",
					"AKSU_silencerHomeMadeTail_SoundSet",
					"AKSU_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_AK74";
			recoilProne="recoil_AK74_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_ak74_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.1,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=8;
				shotsToStartOverheating=4;
				overheatingDecayInterval=0.69999999;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.69999999};
					positionOffset[]={0.0099999998,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.69999999,1};
					positionOffset[]={0.0099999998,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\AK74U\w_AKS74U_states.anm";
	};
	class AKS74U_Black: AKS74U
	{
		scope=2;
		descriptionShort="$STR_cfgWeapons_AKS74U_Black0";
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
	};
	class AKS74U_Green: AKS74U
	{
		scope=2;
		descriptionShort="$STR_cfgWeapons_AKS74U_Green0";
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.37,0.28,1.0,CO)"
		};
	};
};
