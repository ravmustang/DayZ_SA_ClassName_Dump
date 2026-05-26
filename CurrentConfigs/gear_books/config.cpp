class CfgPatches
{
	class DZ_Gear_Books
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
	class Book_Base;
	class ItemBook: Book_Base
	{
		quantityShow=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\books\Data\book.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\books\Data\book.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\books\Data\book_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\books\Data\book_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\books\Data\book_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class BookBible: ItemBook
	{
		scope=2;
		title="The Bible";
		author="King James Version";
		file="dz\gear\books\non-fiction\Bible.html";
		lootTag[]=
		{
			"Religious"
		};
		displayName="$STR_CfgVehicles_BookBible0";
		descriptionShort="$STR_CfgVehicles_BookBible1";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_bible_CO.paa"
		};
	};
	class BookTheWarOfTheWorlds: ItemBook
	{
		scope=2;
		title="The War of the Worlds";
		author="H.G. Wells";
		file="dz\gear\books\fiction\TheWarOfTheWorlds.html";
		displayName="The War of the Worlds";
		descriptionShort="The War of the Worlds";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheWarOfTheWorlds_co.paa"
		};
	};
	class BookAroundTheWorldIn80Days: ItemBook
	{
		scope=2;
		title="Around the World in 80 Days";
		author="Jules Verne";
		file="dz\gear\books\fiction\AroundTheWorldIn80Days.html";
		displayName="Around the World in 80 Days";
		descriptionShort="Around the World in 80 Days";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_AroundTheWorldIn80Days_co.paa"
		};
	};
	class BookCrimeAndPunishment: ItemBook
	{
		scope=2;
		title="Crime and Punishment";
		author="Dostoyevsky";
		file="dz\gear\books\fiction\CrimeAndPunishment.html";
		displayName="Crime and Punishment";
		descriptionShort="Crime and Punishment";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_CrimeAndPunishment_co.paa"
		};
	};
	class BookTheMetamorphosis: ItemBook
	{
		scope=2;
		title="The Metamorphosis";
		author="F. Kafka";
		file="dz\gear\books\short_stories\TheMetamorphosis.html";
		displayName="The Metamorphosis";
		descriptionShort="The Metamorphosis";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheMetamorphosis_co.paa"
		};
	};
	class BookTheRaven: ItemBook
	{
		scope=2;
		title="The Raven";
		author="E. A. Poe";
		file="dz\gear\books\poetry\TheRaven.html";
		displayName="The Raven";
		descriptionShort="The Raven";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheRaven_co.paa"
		};
	};
	class BookTheArtOfWar: ItemBook
	{
		scope=2;
		title="The Art Of War";
		author="Sunzi";
		file="dz\gear\books\non-fiction\TheArtOfWar.html";
		displayName="The Art Of War";
		descriptionShort="The Art Of War";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheArtOfWar_co.paa"
		};
	};
	class BookRobinsonCrusoe: ItemBook
	{
		scope=2;
		title="Robinson Crusoe";
		author="D. Defoe";
		file="dz\gear\books\fiction\RobinsonCrusoe.html";
		displayName="Robinson Crusoe";
		descriptionShort="Robinson Crusoe";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_RobinsonCrusoe_co.paa"
		};
	};
	class BookRussian: ItemBook
	{
		scope=2;
		title="Russian learning book";
		author="";
		file="dz\gear\books\non-fiction\Russian.html";
		displayName="Russian learning book";
		descriptionShort="Russian learning book";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Russian_co.paa"
		};
	};
	class BookRussianCheatSheet: ItemBook
	{
		scope=2;
		title="Russian cheat sheet";
		author="";
		file="dz\gear\books\non-fiction\RussianCheatSheet.html";
		displayName="Russian cheat sheet";
		descriptionShort="Russian cheat sheet";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_RussianCheatSheet_co.paa"
		};
	};
	class BookThePictureOfDorianGray: ItemBook
	{
		scope=2;
		title="The Picture Of Dorian Gray";
		author="Oscar Wilde";
		file="dz\gear\books\fiction\ThePictureOfDorianGray.html";
		displayName="The Picture Of Dorian Gray";
		descriptionShort="The Picture Of Dorian Gray";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ThePictureOfDorianGray_co.paa"
		};
	};
	class BookThePitAndThePendulum: ItemBook
	{
		scope=2;
		title="The Pit and the Pendulum";
		author="E. A. Poe";
		file="dz\gear\books\short_stories\ThePitAndThePendulum.html";
		displayName="The Pit and the Pendulum";
		descriptionShort="The Pit and the Pendulum";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ThePitAndThePendulum_co.paa"
		};
	};
	class BookTheTimeMachine: ItemBook
	{
		scope=2;
		title="The Time Machine";
		author="H. G. Wells";
		file="dz\gear\books\short_stories\TheTimeMachine.html";
		displayName="The Time Machine";
		descriptionShort="The Time Machine";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheTimeMachine_co.paa"
		};
	};
	class BookTheCountryOfTheBlind: ItemBook
	{
		scope=2;
		title="The Country of the Blind";
		author="H. G. Wells";
		file="dz\gear\books\short_stories\TheCountryOfTheBlind.html";
		displayName="The Country of the Blind";
		descriptionShort="The Country of the Blind";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCountryOfTheBlind_co.paa"
		};
	};
	class BookBilaNemoc: ItemBook
	{
		scope=2;
		title="Bila nemoc";
		author="Karel Capek";
		file="dz\gear\books\drama\BilaNemoc.html";
		displayName="Bila nemoc";
		descriptionShort="Bila nemoc";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_BilaNemoc_co.paa"
		};
	};
	class BookYouth: ItemBook
	{
		scope=2;
		title="Youth";
		author="Isaac Asimov";
		file="dz\gear\books\short_stories\Youth.html";
		displayName="Youth";
		descriptionShort="Youth";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Youth_co.paa"
		};
	};
	class BookVerwandlung: ItemBook
	{
		scope=2;
		title="Die Verwandlung";
		author="Franz Kafka";
		file="dz\gear\books\short_stories\Verwandlung.html";
		displayName="Die Verwandlung";
		descriptionShort="Die Verwandlung";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Verwandlung_co.paa"
		};
	};
	class BookTheJungleBook: ItemBook
	{
		scope=2;
		title="The Jungle Book";
		author="Rudyard Kipling";
		file="dz\gear\books\fiction\TheJungleBook.html";
		displayName="The Jungle Book";
		descriptionShort="The Jungle Book";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheJungleBook_co.paa"
		};
	};
	class BookTheBrothersKaramazov: ItemBook
	{
		scope=2;
		title="The Brothers Karamazov";
		author="F. Dostoyevsky";
		file="dz\gear\books\drama\TheBrothersKaramazov.html";
		displayName="The Brothers Karamazov";
		descriptionShort="The Brothers Karamazov";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheBrothersKaramazov_co.paa"
		};
	};
	class BookTheCallOfCthulhu: ItemBook
	{
		scope=2;
		title="The Call of Cthulhu";
		author="H. P. Lovecraft";
		file="dz\gear\books\short_stories\TheCallOfCthulhu.html";
		displayName="The Call of Cthulhu";
		descriptionShort="The Call of Cthulhu";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCallOfCthulhu_co.paa"
		};
	};
	class BookTheShunnedHouse: ItemBook
	{
		scope=2;
		title="The Shunned House";
		author="H. P. Lovecraft";
		file="dz\gear\books\short_stories\TheShunnedHouse.html";
		displayName="The Shunned House";
		descriptionShort="The Shunned House";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheShunnedHouse_co.paa"
		};
	};
	class BookTheHoundOfTheBaskervilles: ItemBook
	{
		scope=2;
		title="The Hound of the Baskervilles";
		author="A. C. Doyle";
		file="dz\gear\books\short_stories\TheHoundOfTheBaskervilles.html";
		displayName="The Hound of the Baskervilles";
		descriptionShort="The Hound of the Baskervilles";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheHoundOfTheBaskervilles_co.paa"
		};
	};
	class BookAndersen: ItemBook
	{
		scope=2;
		title="Fairy Tales";
		author="Andersen";
		file="dz\gear\books\fiction\Andersen.html";
		displayName="Fairy Tales";
		descriptionShort="Fairy Tales";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Andersen_co.paa"
		};
	};
	class BookTonyAndTheBeetles: ItemBook
	{
		scope=2;
		title="Tony and the Beetles";
		author="Philip K. Dick";
		file="dz\gear\books\short_stories\TonyAndTheBeetles.html";
		displayName="Tony and the Beetles";
		descriptionShort="Tony and the Beetles";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TonyAndTheBeetles_co.paa"
		};
	};
	class BookTheCosmicComputer: ItemBook
	{
		scope=2;
		title="The Cosmic Computer";
		author="H. Beam Piper";
		file="dz\gear\books\fiction\TheCosmicComputer.html";
		displayName="The Cosmic Computer";
		descriptionShort="The Cosmic Computer";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCosmicComputer_co.paa"
		};
	};
	class BookATravelerInTime: ItemBook
	{
		scope=2;
		title="A Traveler In Time";
		author="August Derleth";
		file="dz\gear\books\short_stories\ATravelerInTime.html";
		displayName="A Traveler In Time";
		descriptionShort="A Traveler In Time";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ATravelerInTime_co.paa"
		};
	};
	class BookTheVariableMan: ItemBook
	{
		scope=2;
		title="The Variable Man";
		author="Philip K. Dick";
		file="dz\gear\books\fiction\TheVariableMan.html";
		displayName="The Variable Man";
		descriptionShort="The Variable Man";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheVariableMan_co.paa"
		};
	};
	class BookTheOutlet: ItemBook
	{
		scope=2;
		title="The Outlet";
		author="Andy Adams";
		file="dz\gear\books\Automatic\TheOutlet.html";
		displayName="The Outlet";
		descriptionShort="The Outlet";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheOutlet_co.paa"
		};
	};
	class BookTheBarrier: ItemBook
	{
		scope=2;
		title="The Barrier";
		author="Rex Beach";
		file="dz\gear\books\Automatic\TheBarrier.html";
		displayName="The Barrier";
		descriptionShort="The Barrier";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheBarrier_co.paa"
		};
	};
	class BookTheDesertOfWheat: ItemBook
	{
		scope=2;
		title="The Desert of Wheat";
		author="Zane Grey";
		file="dz\gear\books\Automatic\TheDesertOfWheat.html";
		displayName="The Desert of Wheat";
		descriptionShort="The Desert of Wheat";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheDesertOfWheat_co.paa"
		};
	};
	class BookFlyingURanch: ItemBook
	{
		scope=2;
		title="Flying U Ranch";
		author="B. M. Bower";
		file="dz\gear\books\Automatic\FlyingURanch.html";
		displayName="Flying U Ranch";
		descriptionShort="Flying U Ranch";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_FlyingURanch_co.paa"
		};
	};
	class BookCassidysRustlerRoundUp: ItemBook
	{
		scope=2;
		title="Hopalong Cassidy's Rustler Round-Up";
		author="Clarence Edward Mulford";
		file="dz\gear\books\Automatic\CassidysRustlerRoundUp.html";
		displayName="Hopalong Cassidy's Rustler Round-Up";
		descriptionShort="Hopalong Cassidy's Rustler Round-Up";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_CassidysRustlerRoundUp_co.paa"
		};
	};
	class BookLonesomeLand: ItemBook
	{
		scope=2;
		title="Lonesome Land";
		author="B. M. Bower";
		file="dz\gear\books\Automatic\LonesomeLand.html";
		displayName="Lonesome Land";
		descriptionShort="Lonesome Land";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LonesomeLand_co.paa"
		};
	};
	class BookTrailin: ItemBook
	{
		scope=2;
		title="Trailin'!";
		author="Max Brand";
		file="dz\gear\books\Automatic\Trailin.html";
		displayName="Trailin'!";
		descriptionShort="Trailin'!";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Trailin_co.paa"
		};
	};
	class BookRonickyDoone: ItemBook
	{
		scope=2;
		title="Ronicky Doone";
		author="Max Brand";
		file="dz\gear\books\Automatic\RonickyDoone.html";
		displayName="Ronicky Doone";
		descriptionShort="Ronicky Doone";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_RonickyDoone_co.paa"
		};
	};
	class BookBettyZane: ItemBook
	{
		scope=2;
		title="Betty Zane";
		author="Zane Grey";
		file="dz\gear\books\Automatic\BettyZane.html";
		displayName="Betty Zane";
		descriptionShort="Betty Zane";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_BettyZane_co.paa"
		};
	};
	class BookATexasMatchmaker: ItemBook
	{
		scope=2;
		title="A Texas Matchmaker";
		author="Andy Adams";
		file="dz\gear\books\Automatic\ATexasMatchmaker.html";
		displayName="A Texas Matchmaker";
		descriptionShort="A Texas Matchmaker";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ATexasMatchmaker_co.paa"
		};
	};
	class BookTheThunderBird: ItemBook
	{
		scope=2;
		title="The Thunder Bird";
		author="B. M. Bower";
		file="dz\gear\books\Automatic\TheThunderBird.html";
		displayName="The Thunder Bird";
		descriptionShort="The Thunder Bird";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheThunderBird_co.paa"
		};
	};
	class BookBlackJack: ItemBook
	{
		scope=2;
		title="Black Jack";
		author="Max Brand";
		file="dz\gear\books\Automatic\BlackJack.html";
		displayName="Black Jack";
		descriptionShort="Black Jack";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_BlackJack_co.paa"
		};
	};
	class BookTheLastTrail: ItemBook
	{
		scope=2;
		title="The Last Trail";
		author="Zane Grey";
		file="dz\gear\books\Automatic\TheLastTrail.html";
		displayName="The Last Trail";
		descriptionShort="The Last Trail";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheLastTrail_co.paa"
		};
	};
	class BookSelectedStories: ItemBook
	{
		scope=2;
		title="Selected Stories";
		author="Bret Harte";
		file="dz\gear\books\Automatic\SelectedStories.html";
		displayName="Selected Stories";
		descriptionShort="Selected Stories";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_SelectedStories_co.paa"
		};
	};
	class BookTheHeritageOfTheSioux: ItemBook
	{
		scope=2;
		title="The Heritage of the Sioux";
		author="B.M. Bower";
		file="dz\gear\books\Automatic\TheHeritageOfTheSioux.html";
		displayName="The Heritage of the Sioux";
		descriptionShort="The Heritage of the Sioux";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheHeritageOfTheSioux_co.paa"
		};
	};
	class BookDesertGold: ItemBook
	{
		scope=2;
		title="Desert Gold";
		author="Zane Grey";
		file="dz\gear\books\Automatic\DesertGold.html";
		displayName="Desert Gold";
		descriptionShort="Desert Gold";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DesertGold_co.paa"
		};
	};
	class BookTheHiddenChildren: ItemBook
	{
		scope=2;
		title="The Hidden Children";
		author="Robert W. Chambers";
		file="dz\gear\books\Automatic\TheHiddenChildren.html";
		displayName="The Hidden Children";
		descriptionShort="The Hidden Children";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheHiddenChildren_co.paa"
		};
	};
	class BookTheLastOfThePlainsmen: ItemBook
	{
		scope=2;
		title="The Last of the Plainsmen";
		author="Zane Grey";
		file="dz\gear\books\Automatic\TheLastOfThePlainsmen.html";
		displayName="The Last of the Plainsmen";
		descriptionShort="The Last of the Plainsmen";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheLastOfThePlainsmen_co.paa"
		};
	};
	class BookGunmansReckoning: ItemBook
	{
		scope=2;
		title="Gunman's Reckoning";
		author="Max Brand";
		file="dz\gear\books\Automatic\GunmansReckoning.html";
		displayName="Gunman's Reckoning";
		descriptionShort="Gunman's Reckoning";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_GunmansReckoning_co.paa"
		};
	};
	class BookSkyrider: ItemBook
	{
		scope=2;
		title="Skyrider";
		author="B. M. Bower";
		file="dz\gear\books\Automatic\Skyrider.html";
		displayName="Skyrider";
		descriptionShort="Skyrider";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Skyrider_co.paa"
		};
	};
	class BookSpinifexAndSand: ItemBook
	{
		scope=2;
		title="Spinifex and Sand";
		author="David W Carnegie";
		file="dz\gear\books\Automatic\SpinifexAndSand.html";
		displayName="Spinifex and Sand";
		descriptionShort="Spinifex and Sand";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_SpinifexAndSand_co.paa"
		};
	};
	class BookSunsetPass: ItemBook
	{
		scope=2;
		title="Sunset Pass";
		author="Charles King";
		file="dz\gear\books\Automatic\SunsetPass.html";
		displayName="Sunset Pass";
		descriptionShort="Sunset Pass";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_SunsetPass_co.paa"
		};
	};
	class BookTheCaveOfGold: ItemBook
	{
		scope=2;
		title="The Cave of Gold";
		author="Everett McNeil";
		file="dz\gear\books\Automatic\TheCaveOfGold.html";
		displayName="The Cave of Gold";
		descriptionShort="The Cave of Gold";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCaveOfGold_co.paa"
		};
	};
	class BookTheDayOfTheBeast: ItemBook
	{
		scope=2;
		title="The Day of the Beast";
		author="Zane Grey";
		file="dz\gear\books\Automatic\TheDayOfTheBeast.html";
		displayName="The Day of the Beast";
		descriptionShort="The Day of the Beast";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheDayOfTheBeast_co.paa"
		};
	};
	class BookTheQuirt: ItemBook
	{
		scope=2;
		title="The Quirt";
		author="B.M. Bower";
		file="dz\gear\books\Automatic\TheQuirt.html";
		displayName="The Quirt";
		descriptionShort="The Quirt";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheQuirt_co.paa"
		};
	};
	class BookAVoyageToArcturus: ItemBook
	{
		scope=2;
		title="A Voyage to Arcturus";
		author="David Lindsay";
		file="dz\gear\books\Automatic\AVoyageToArcturus.html";
		displayName="A Voyage to Arcturus";
		descriptionShort="A Voyage to Arcturus";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_AVoyageToArcturus_co.paa"
		};
	};
	class BookWealthOfNations: ItemBook
	{
		scope=2;
		title="An Inquiry into the Nature and Causes of the Wealth of Nations";
		author="Adam Smith";
		file="dz\gear\books\Automatic\WealthOfNations.html";
		displayName="An Inquiry into the Nature and Causes of the Wealth of Nations";
		descriptionShort="An Inquiry into the Nature and Causes of the Wealth of Nations";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_WealthOfNations_co.paa"
		};
	};
	class BookAndersensFairyTales: ItemBook
	{
		scope=2;
		title="Andersen's Fairy Tales";
		author="Hans Christian Andersen";
		file="dz\gear\books\Automatic\AndersensFairyTales.html";
		displayName="Andersen's Fairy Tales";
		descriptionShort="Andersen's Fairy Tales";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_AndersensFairyTales_co.paa"
		};
	};
	class BookBlackBeauty: ItemBook
	{
		scope=2;
		title="Black Beauty";
		author="Anna Sewell";
		file="dz\gear\books\Automatic\BlackBeauty.html";
		displayName="Black Beauty";
		descriptionShort="Black Beauty";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_BlackBeauty_co.paa"
		};
	};
	class BookBuddenbrooks: ItemBook
	{
		scope=2;
		title="Buddenbrooks";
		author="Thomas Mann";
		file="dz\gear\books\Automatic\Buddenbrooks.html";
		displayName="Buddenbrooks";
		descriptionShort="Buddenbrooks";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Buddenbrooks_co.paa"
		};
	};
	class BookDeadSouls: ItemBook
	{
		scope=2;
		title="Dead Souls";
		author="Nikolai Vasilievich Gogol";
		file="dz\gear\books\Automatic\DeadSouls.html";
		displayName="Dead Souls";
		descriptionShort="Dead Souls";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DeadSouls_co.paa"
		};
	};
	class BookErewhon: ItemBook
	{
		scope=2;
		title="Erewhon";
		author="Samuel Butler";
		file="dz\gear\books\Automatic\Erewhon.html";
		displayName="Erewhon";
		descriptionShort="Erewhon";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Erewhon_co.paa"
		};
	};
	class BookFatherGoriot: ItemBook
	{
		scope=2;
		title="Father Goriot";
		author="Honore de Balzac";
		file="dz\gear\books\Automatic\FatherGoriot.html";
		displayName="Father Goriot";
		descriptionShort="Father Goriot";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_FatherGoriot_co.paa"
		};
	};
	class BookGreatExpectations: ItemBook
	{
		scope=2;
		title="Great Expectations";
		author="Charles Dickens";
		file="dz\gear\books\Automatic\GreatExpectations.html";
		displayName="Great Expectations";
		descriptionShort="Great Expectations";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_GreatExpectations_co.paa"
		};
	};
	class BookGulliversTravels: ItemBook
	{
		scope=2;
		title="Gulliver's Travels";
		author="Jonathan Swift";
		file="dz\gear\books\Automatic\GulliversTravels.html";
		displayName="Gulliver's Travels";
		descriptionShort="Gulliver's Travels";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_GulliversTravels_co.paa"
		};
	};
	class BookHeartOfDarkness: ItemBook
	{
		scope=2;
		title="Heart of Darkness";
		author="Joseph Conrad";
		file="dz\gear\books\Automatic\HeartOfDarkness.html";
		displayName="Heart of Darkness";
		descriptionShort="Heart of Darkness";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_HeartOfDarkness_co.paa"
		};
	};
	class BookHerland: ItemBook
	{
		scope=2;
		title="Herland";
		author="Charlotte Perkins Stetson Gilman";
		file="dz\gear\books\Automatic\Herland.html";
		displayName="Herland";
		descriptionShort="Herland";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Herland_co.paa"
		};
	};
	class BookIvanhoe: ItemBook
	{
		scope=2;
		title="Ivanhoe";
		author="Walter Scott";
		file="dz\gear\books\Automatic\Ivanhoe.html";
		displayName="Ivanhoe";
		descriptionShort="Ivanhoe";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Ivanhoe_co.paa"
		};
	};
	class BookKidnapped: ItemBook
	{
		scope=2;
		title="Kidnapped";
		author="Robert Louis Stevenson";
		file="dz\gear\books\Automatic\Kidnapped.html";
		displayName="Kidnapped";
		descriptionShort="Kidnapped";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Kidnapped_co.paa"
		};
	};
	class BookLaChartreuseDeParme: ItemBook
	{
		scope=2;
		title="La Chartreuse de Parme";
		author="Stendhal";
		file="dz\gear\books\Automatic\LaChartreuseDeParme.html";
		displayName="La Chartreuse de Parme";
		descriptionShort="La Chartreuse de Parme";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LaChartreuseDeParme_co.paa"
		};
	};
	class BookLordJim: ItemBook
	{
		scope=2;
		title="Lord Jim";
		author="Joseph Conrad";
		file="dz\gear\books\Automatic\LordJim.html";
		displayName="Lord Jim";
		descriptionShort="Lord Jim";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LordJim_co.paa"
		};
	};
	class BookMadameBovary: ItemBook
	{
		scope=2;
		title="Madame Bovary";
		author="Gustave Flaubert";
		file="dz\gear\books\Automatic\MadameBovary.html";
		displayName="Madame Bovary";
		descriptionShort="Madame Bovary";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_MadameBovary_co.paa"
		};
	};
	class BookNostromo: ItemBook
	{
		scope=2;
		title="Nostromo: A Tale of the Seaboard";
		author="Joseph Conrad";
		file="dz\gear\books\Automatic\Nostromo.html";
		displayName="Nostromo: A Tale of the Seaboard";
		descriptionShort="Nostromo: A Tale of the Seaboard";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Nostromo_co.paa"
		};
	};
	class BookNaturalSelection: ItemBook
	{
		scope=2;
		title="On the Origin of Species by Means of Natural Selection";
		author="Charles Darwin";
		file="dz\gear\books\Automatic\NaturalSelection.html";
		displayName="On the Origin of Species by Means of Natural Selection";
		descriptionShort="On the Origin of Species by Means of Natural Selection";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_NaturalSelection_co.paa"
		};
	};
	class BookTheMetamorphosesOfOvid: ItemBook
	{
		scope=2;
		title="The Metamorphoses of Ovid";
		author="Publius Ovidius Naso";
		file="dz\gear\books\Automatic\TheMetamorphosesOfOvid.html";
		displayName="The Metamorphoses of Ovid";
		descriptionShort="The Metamorphoses of Ovid";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheMetamorphosesOfOvid_co.paa"
		};
	};
	class BookMobyDick: ItemBook
	{
		scope=2;
		title="Moby Dick";
		author="Herman Melville";
		file="dz\gear\books\Automatic\MobyDick.html";
		displayName="Moby Dick";
		descriptionShort="Moby Dick";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_MobyDick_co.paa"
		};
	};
	class BookKingLear: ItemBook
	{
		scope=2;
		title="King Lear";
		author="";
		file="dz\gear\books\Automatic\KingLear.html";
		displayName="King Lear";
		descriptionShort="King Lear";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_KingLear_co.paa"
		};
	};
	class BookLaDbcle: ItemBook
	{
		scope=2;
		title="La Débâcle";
		author="Emile Zola";
		file="dz\gear\books\Automatic\LaDbcle.html";
		displayName="La Débâcle";
		descriptionShort="La Débâcle";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LaDbcle_co.paa"
		};
	};
	class BookTheCanterburyTales: ItemBook
	{
		scope=2;
		title="The Canterbury Tales and Other Poems";
		author="";
		file="dz\gear\books\Automatic\TheCanterburyTales.html";
		displayName="The Canterbury Tales and Other Poems";
		descriptionShort="The Canterbury Tales and Other Poems";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCanterburyTales_co.paa"
		};
	};
	class BookTheRightsOfWoman: ItemBook
	{
		scope=2;
		title="A Vindication of the Rights of Women";
		author="Mary Wollstonecraft [Godwin]";
		file="dz\gear\books\Automatic\TheRightsOfWoman.html";
		displayName="A Vindication of the Rights of Women";
		descriptionShort="A Vindication of the Rights of Women";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheRightsOfWoman_co.paa"
		};
	};
	class BookToTheInteriorOfTheEarth: ItemBook
	{
		scope=2;
		title="A Journey to the Interior of the Earth";
		author="Jules Verne";
		file="dz\gear\books\Automatic\ToTheInteriorOfTheEarth.html";
		displayName="A Journey to the Interior of the Earth";
		descriptionShort="A Journey to the Interior of the Earth";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ToTheInteriorOfTheEarth_co.paa"
		};
	};
	class BookNjalsSaga: ItemBook
	{
		scope=2;
		title="Njal's Saga";
		author="Unknown Icelanders";
		file="dz\gear\books\Automatic\NjalsSaga.html";
		displayName="Njal's Saga";
		descriptionShort="Njal's Saga";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_NjalsSaga_co.paa"
		};
	};
	class BookTheTrial: ItemBook
	{
		scope=2;
		title="The Trial";
		author="Franz Kafka";
		file="dz\gear\books\Automatic\TheTrial.html";
		displayName="The Trial";
		descriptionShort="The Trial";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheTrial_co.paa"
		};
	};
	class BookDonQuixote: ItemBook
	{
		scope=2;
		title="Don Quixote";
		author="Miguel de Cervantes Saavedra";
		file="dz\gear\books\Automatic\DonQuixote.html";
		displayName="Don Quixote";
		descriptionShort="Don Quixote";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DonQuixote_co.paa"
		};
	};
	class BookPhilosophiaeNaturalis: ItemBook
	{
		scope=2;
		title="Philosophiae Naturalis Principia Mathematica";
		author="Isaac Newton";
		file="dz\gear\books\Automatic\PhilosophiaeNaturalis.html";
		displayName="Philosophiae Naturalis Principia Mathematica";
		descriptionShort="Philosophiae Naturalis Principia Mathematica";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_PhilosophiaeNaturalis_co.paa"
		};
	};
	class BookPrideAndPrejudice: ItemBook
	{
		scope=2;
		title="Pride and Prejudice";
		author="Jane Austen";
		file="dz\gear\books\Automatic\PrideAndPrejudice.html";
		displayName="Pride and Prejudice";
		descriptionShort="Pride and Prejudice";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_PrideAndPrejudice_co.paa"
		};
	};
	class BookRasselas: ItemBook
	{
		scope=2;
		title="Rasselas";
		author="Samuel Johnson";
		file="dz\gear\books\Automatic\Rasselas.html";
		displayName="Rasselas";
		descriptionShort="Rasselas";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Rasselas_co.paa"
		};
	};
	class BookScaramouche: ItemBook
	{
		scope=2;
		title="Scaramouche";
		author="Rafael Sabatini";
		file="dz\gear\books\Automatic\Scaramouche.html";
		displayName="Scaramouche";
		descriptionShort="Scaramouche";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Scaramouche_co.paa"
		};
	};
	class BookShe: ItemBook
	{
		scope=2;
		title="She";
		author="H. Rider Haggard";
		file="dz\gear\books\Automatic\She.html";
		displayName="She";
		descriptionShort="She";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_She_co.paa"
		};
	};
	class BookSonsAndLovers: ItemBook
	{
		scope=2;
		title="Sons and Lovers";
		author="David Herbert Lawrence";
		file="dz\gear\books\Automatic\SonsAndLovers.html";
		displayName="Sons and Lovers";
		descriptionShort="Sons and Lovers";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_SonsAndLovers_co.paa"
		};
	};
	class BookTheCallOfTheWild: ItemBook
	{
		scope=2;
		title="The Call of the Wild";
		author="Jack London";
		file="dz\gear\books\Automatic\TheCallOfTheWild.html";
		displayName="The Call of the Wild";
		descriptionShort="The Call of the Wild";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCallOfTheWild_co.paa"
		};
	};
	class BookTheComingRace: ItemBook
	{
		scope=2;
		title="The Coming Race";
		author="Edward Bulwer Lytton";
		file="dz\gear\books\Automatic\TheComingRace.html";
		displayName="The Coming Race";
		descriptionShort="The Coming Race";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheComingRace_co.paa"
		};
	};
	class BookRobinsonCrusoeAdventures: ItemBook
	{
		scope=2;
		title="The Further Adventures of Robinson Crusoe";
		author="Daniel Defoe";
		file="dz\gear\books\Automatic\RobinsonCrusoeAdventures.html";
		displayName="The Further Adventures of Robinson Crusoe";
		descriptionShort="The Further Adventures of Robinson Crusoe";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_RobinsonCrusoeAdventures_co.paa"
		};
	};
	class BookTheIslandOfDoctorMoreau: ItemBook
	{
		scope=2;
		title="The Island of Doctor Moreau";
		author="H. G. Wells";
		file="dz\gear\books\Automatic\TheIslandOfDoctorMoreau.html";
		displayName="The Island of Doctor Moreau";
		descriptionShort="The Island of Doctor Moreau";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheIslandOfDoctorMoreau_co.paa"
		};
	};
	class BookTheMahabharataOfKrishna: ItemBook
	{
		scope=2;
		title="The Mahabharata of Krishna-Dwaipayana Vyasa Bk. 4";
		author="Kisari Mohan Ganguli";
		file="dz\gear\books\Automatic\TheMahabharataOfKrishna.html";
		displayName="The Mahabharata of Krishna-Dwaipayana Vyasa Bk. 4";
		descriptionShort="The Mahabharata of Krishna-Dwaipayana Vyasa Bk. 4";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheMahabharataOfKrishna_co.paa"
		};
	};
	class BookTheManWhoWasThursday: ItemBook
	{
		scope=2;
		title="The Man Who Was Thursday";
		author="G. K. Chesterton";
		file="dz\gear\books\Automatic\TheManWhoWasThursday.html";
		displayName="The Man Who Was Thursday";
		descriptionShort="The Man Who Was Thursday";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheManWhoWasThursday_co.paa"
		};
	};
	class BookThePossessed: ItemBook
	{
		scope=2;
		title="The Possessed";
		author="Fyodor Dostoevsky";
		file="dz\gear\books\Automatic\ThePossessed.html";
		displayName="The Possessed";
		descriptionShort="The Possessed";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ThePossessed_co.paa"
		};
	};
	class BookThePrisonerOfZenda: ItemBook
	{
		scope=2;
		title="The Prisoner of Zenda";
		author="Anthony Hope";
		file="dz\gear\books\Automatic\ThePrisonerOfZenda.html";
		displayName="The Prisoner of Zenda";
		descriptionShort="The Prisoner of Zenda";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ThePrisonerOfZenda_co.paa"
		};
	};
	class BookAPrincessOfMars: ItemBook
	{
		scope=2;
		title="A Princess of Mars";
		author="Edgar Rice Burroughs";
		file="dz\gear\books\Automatic\APrincessOfMars.html";
		displayName="A Princess of Mars";
		descriptionShort="A Princess of Mars";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_APrincessOfMars_co.paa"
		};
	};
	class BookKingSolomonsMines: ItemBook
	{
		scope=2;
		title="King Solomon's Mines";
		author="H. Rider Haggard";
		file="dz\gear\books\Automatic\KingSolomonsMines.html";
		displayName="King Solomon's Mines";
		descriptionShort="King Solomon's Mines";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_KingSolomonsMines_co.paa"
		};
	};
	class BookMiddlemarch: ItemBook
	{
		scope=2;
		title="Middlemarch";
		author="George Eliot";
		file="dz\gear\books\Automatic\Middlemarch.html";
		displayName="Middlemarch";
		descriptionShort="Middlemarch";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Middlemarch_co.paa"
		};
	};
	class BookTheHouseOfTheSevenGables: ItemBook
	{
		scope=2;
		title="The House of the Seven Gables";
		author="Nathaniel Hawthorne";
		file="dz\gear\books\Automatic\TheHouseOfTheSevenGables.html";
		displayName="The House of the Seven Gables";
		descriptionShort="The House of the Seven Gables";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheHouseOfTheSevenGables_co.paa"
		};
	};
	class BookTheMonkARomance: ItemBook
	{
		scope=2;
		title="The Monk - A romance";
		author="M. G. Lewis";
		file="dz\gear\books\Automatic\TheMonkARomance.html";
		displayName="The Monk - A romance";
		descriptionShort="The Monk - A romance";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheMonkARomance_co.paa"
		};
	};
	class BookTheJustifiedSinner: ItemBook
	{
		scope=2;
		title="The Private Memoirs and Confessions of a Justified Sinner";
		author="James Hogg";
		file="dz\gear\books\Automatic\TheJustifiedSinner.html";
		displayName="The Private Memoirs and Confessions of a Justified Sinner";
		descriptionShort="The Private Memoirs and Confessions of a Justified Sinner";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheJustifiedSinner_co.paa"
		};
	};
	class BookTheRedBadgeOfCourage: ItemBook
	{
		scope=2;
		title="The Red Badge of Courage";
		author="Stephen Crane";
		file="dz\gear\books\Automatic\TheRedBadgeOfCourage.html";
		displayName="The Red Badge of Courage";
		descriptionShort="The Red Badge of Courage";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheRedBadgeOfCourage_co.paa"
		};
	};
	class BookADollsHouse: ItemBook
	{
		scope=2;
		title="A Doll's House";
		author="Henrik Ibsen";
		file="dz\gear\books\Automatic\ADollsHouse.html";
		displayName="A Doll's House";
		descriptionShort="A Doll's House";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ADollsHouse_co.paa"
		};
	};
	class BookAfterLondon: ItemBook
	{
		scope=2;
		title="After London";
		author="Richard Jefferies";
		file="dz\gear\books\Automatic\AfterLondon.html";
		displayName="After London";
		descriptionShort="After London";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_AfterLondon_co.paa"
		};
	};
	class BookGilgameshEpic: ItemBook
	{
		scope=2;
		title="An Old Babylonian Version of the Gilgamesh Epic";
		author="Anonymous";
		file="dz\gear\books\Automatic\GilgameshEpic.html";
		displayName="An Old Babylonian Version of the Gilgamesh Epic";
		descriptionShort="An Old Babylonian Version of the Gilgamesh Epic";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_GilgameshEpic_co.paa"
		};
	};
	class BookAnnaKarenina: ItemBook
	{
		scope=2;
		title="Anna Karenina";
		author="Leo Tolstoy";
		file="dz\gear\books\Automatic\AnnaKarenina.html";
		displayName="Anna Karenina";
		descriptionShort="Anna Karenina";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_AnnaKarenina_co.paa"
		};
	};
	class BookCandide: ItemBook
	{
		scope=2;
		title="Candide";
		author="Voltaire";
		file="dz\gear\books\Automatic\Candide.html";
		displayName="Candide";
		descriptionShort="Candide";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Candide_co.paa"
		};
	};
	class BookFaust: ItemBook
	{
		scope=2;
		title="Faust";
		author="Johann Wolfgang von Goethe";
		file="dz\gear\books\Automatic\Faust.html";
		displayName="Faust";
		descriptionShort="Faust";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Faust_co.paa"
		};
	};
	class BookHinduLiterature: ItemBook
	{
		scope=2;
		title="Hindu Literature";
		author="Epiphanius Wilson";
		file="dz\gear\books\Automatic\HinduLiterature.html";
		displayName="Hindu Literature";
		descriptionShort="Hindu Literature";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_HinduLiterature_co.paa"
		};
	};
	class BookHunger: ItemBook
	{
		scope=2;
		title="Hunger";
		author="Knut Hamsun";
		file="dz\gear\books\Automatic\Hunger.html";
		displayName="Hunger";
		descriptionShort="Hunger";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Hunger_co.paa"
		};
	};
	class BookJapaneseLiterature: ItemBook
	{
		scope=2;
		title="Japanese Literature";
		author="Various";
		file="dz\gear\books\Automatic\JapaneseLiterature.html";
		displayName="Japanese Literature";
		descriptionShort="Japanese Literature";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_JapaneseLiterature_co.paa"
		};
	};
	class BookLeRougeEtLeNoir: ItemBook
	{
		scope=2;
		title="Le Rouge et le noir";
		author="Stendhal";
		file="dz\gear\books\Automatic\LeRougeEtLeNoir.html";
		displayName="Le Rouge et le noir";
		descriptionShort="Le Rouge et le noir";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LeRougeEtLeNoir_co.paa"
		};
	};
	class BookTheDecameron: ItemBook
	{
		scope=2;
		title="The Decameron of Giovanni Boccaccio";
		author="Giovanni Boccaccio";
		file="dz\gear\books\Automatic\TheDecameron.html";
		displayName="The Decameron of Giovanni Boccaccio";
		descriptionShort="The Decameron of Giovanni Boccaccio";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheDecameron_co.paa"
		};
	};
	class BookTheGiacomoLeopardi: ItemBook
	{
		scope=2;
		title="The Poems of Giacomo Leopardi";
		author="Giacomo Leopardi";
		file="dz\gear\books\Automatic\TheGiacomoLeopardi.html";
		displayName="The Poems of Giacomo Leopardi";
		descriptionShort="The Poems of Giacomo Leopardi";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheGiacomoLeopardi_co.paa"
		};
	};
	class BookAliceInWonderland: ItemBook
	{
		scope=2;
		title="Alice's Adventures in Wonderland";
		author="";
		file="dz\gear\books\Automatic\AliceInWonderland.html";
		displayName="Alice's Adventures in Wonderland";
		descriptionShort="Alice's Adventures in Wonderland";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_AliceInWonderland_co.paa"
		};
	};
	class BookTheScarletPimpernel: ItemBook
	{
		scope=2;
		title="The Scarlet Pimpernel";
		author="Baroness Orczy";
		file="dz\gear\books\Automatic\TheScarletPimpernel.html";
		displayName="The Scarlet Pimpernel";
		descriptionShort="The Scarlet Pimpernel";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheScarletPimpernel_co.paa"
		};
	};
	class BookTheThreeMusketeers: ItemBook
	{
		scope=2;
		title="The Three Musketeers";
		author="";
		file="dz\gear\books\Automatic\TheThreeMusketeers.html";
		displayName="The Three Musketeers";
		descriptionShort="The Three Musketeers";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheThreeMusketeers_co.paa"
		};
	};
	class BookTheTurnOfTheScrew: ItemBook
	{
		scope=2;
		title="The Turn of the Screw";
		author="Henry James";
		file="dz\gear\books\Automatic\TheTurnOfTheScrew.html";
		displayName="The Turn of the Screw";
		descriptionShort="The Turn of the Screw";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheTurnOfTheScrew_co.paa"
		};
	};
	class BookTranslationsOfShakuntala: ItemBook
	{
		scope=2;
		title="Translations of Shakuntala and Other Works";
		author="K?alid?asa";
		file="dz\gear\books\Automatic\TranslationsOfShakuntala.html";
		displayName="Translations of Shakuntala and Other Works";
		descriptionShort="Translations of Shakuntala and Other Works";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TranslationsOfShakuntala_co.paa"
		};
	};
	class BookTreasureIsland: ItemBook
	{
		scope=2;
		title="Treasure Island";
		author="Robert Louis Stevenson";
		file="dz\gear\books\Automatic\TreasureIsland.html";
		displayName="Treasure Island";
		descriptionShort="Treasure Island";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TreasureIsland_co.paa"
		};
	};
	class BookUlysses: ItemBook
	{
		scope=2;
		title="Ulysses";
		author="James Joyce";
		file="dz\gear\books\Automatic\Ulysses.html";
		displayName="Ulysses";
		descriptionShort="Ulysses";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Ulysses_co.paa"
		};
	};
	class BookUncleSilas: ItemBook
	{
		scope=2;
		title="Uncle Silas";
		author="J. S. LeFanu";
		file="dz\gear\books\Automatic\UncleSilas.html";
		displayName="Uncle Silas";
		descriptionShort="Uncle Silas";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_UncleSilas_co.paa"
		};
	};
	class BookTheAeneid: ItemBook
	{
		scope=2;
		title="The Aeneid";
		author="Virgil";
		file="dz\gear\books\Automatic\TheAeneid.html";
		displayName="The Aeneid";
		descriptionShort="The Aeneid";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheAeneid_co.paa"
		};
	};
	class BookWarAndPeace: ItemBook
	{
		scope=2;
		title="War and Peace";
		author="Leo Tolstoy";
		file="dz\gear\books\Automatic\WarAndPeace.html";
		displayName="War and Peace";
		descriptionShort="War and Peace";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_WarAndPeace_co.paa"
		};
	};
	class BookWielandOrTheTransformation: ItemBook
	{
		scope=2;
		title="Wieland or The Transformation";
		author="Charles Brockden Brown";
		file="dz\gear\books\Automatic\WielandOrTheTransformation.html";
		displayName="Wieland or The Transformation";
		descriptionShort="Wieland or The Transformation";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_WielandOrTheTransformation_co.paa"
		};
	};
	class BookWutheringHeights: ItemBook
	{
		scope=2;
		title="Wuthering Heights";
		author="Emily Bronte";
		file="dz\gear\books\Automatic\WutheringHeights.html";
		displayName="Wuthering Heights";
		descriptionShort="Wuthering Heights";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_WutheringHeights_co.paa"
		};
	};
	class BookCinqSemainesEnBallon: ItemBook
	{
		scope=2;
		title="Cinq Semaines En Ballon";
		author="Jules Verne";
		file="dz\gear\books\Automatic\CinqSemainesEnBallon.html";
		displayName="Cinq Semaines En Ballon";
		descriptionShort="Cinq Semaines En Ballon";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_CinqSemainesEnBallon_co.paa"
		};
	};
	class BookDracula: ItemBook
	{
		scope=2;
		title="Dracula";
		author="Bram Stoker";
		file="dz\gear\books\Automatic\Dracula.html";
		displayName="Dracula";
		descriptionShort="Dracula";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Dracula_co.paa"
		};
	};
	class BookMrchenFrKinder: ItemBook
	{
		scope=2;
		title="Märchen für Kinder";
		author="Hans Christian Andersen";
		file="dz\gear\books\Automatic\MrchenFrKinder.html";
		displayName="Märchen für Kinder";
		descriptionShort="Märchen für Kinder";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_MrchenFrKinder_co.paa"
		};
	};
	class BookLesTroisMousquetaires: ItemBook
	{
		scope=2;
		title="Les trois mousquetaires";
		author="Alexandre Dumas";
		file="dz\gear\books\Automatic\LesTroisMousquetaires.html";
		displayName="Les trois mousquetaires";
		descriptionShort="Les trois mousquetaires";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LesTroisMousquetaires_co.paa"
		};
	};
	class BookDeLorigineDesEspces: ItemBook
	{
		scope=2;
		title="De l'origine des especes";
		author="Charles Darwin";
		file="dz\gear\books\Automatic\DeLorigineDesEspces.html";
		displayName="De l'origine des especes";
		descriptionShort="De l'origine des especes";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DeLorigineDesEspces_co.paa"
		};
	};
	class BookDasNibelungenlied: ItemBook
	{
		scope=2;
		title="Das Nibelungenlied";
		author="Unknown";
		file="dz\gear\books\Automatic\DasNibelungenlied.html";
		displayName="Das Nibelungenlied";
		descriptionShort="Das Nibelungenlied";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DasNibelungenlied_co.paa"
		};
	};
	class BookTheLastMan: ItemBook
	{
		scope=2;
		title="The Last Man";
		author="Mary Shelley";
		file="dz\gear\books\Automatic\TheLastMan.html";
		displayName="The Last Man";
		descriptionShort="The Last Man";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheLastMan_co.paa"
		};
	};
	class BookFaustErsterTeil: ItemBook
	{
		scope=2;
		title="Faust: Der Tragödie erster Teil";
		author="Johann Wolfgang von Goethe";
		file="dz\gear\books\Automatic\FaustErsterTeil.html";
		displayName="Faust: Der Tragödie erster Teil";
		descriptionShort="Faust: Der Tragödie erster Teil";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_FaustErsterTeil_co.paa"
		};
	};
	class BookLenfer1Of2: ItemBook
	{
		scope=2;
		title="L'enfer (1 of 2)";
		author="Dante Alighieri";
		file="dz\gear\books\Automatic\Lenfer1Of2.html";
		displayName="L'enfer (1 of 2)";
		descriptionShort="L'enfer (1 of 2)";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Lenfer1Of2_co.paa"
		};
	};
	class BookVoyageAuCentreDeLaTerre: ItemBook
	{
		scope=2;
		title="Voyage au Centre de la Terre";
		author="Jules Verne";
		file="dz\gear\books\Automatic\VoyageAuCentreDeLaTerre.html";
		displayName="Voyage au Centre de la Terre";
		descriptionShort="Voyage au Centre de la Terre";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_VoyageAuCentreDeLaTerre_co.paa"
		};
	};
	class BookRomeoUndJulia: ItemBook
	{
		scope=2;
		title="Romeo und Julia";
		author="William Shakespeare";
		file="dz\gear\books\Automatic\RomeoUndJulia.html";
		displayName="Romeo und Julia";
		descriptionShort="Romeo und Julia";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_RomeoUndJulia_co.paa"
		};
	};
	class BookFrankenstein: ItemBook
	{
		scope=2;
		title="Frankenstein";
		author="Mary Wollstonecraft (Godwin) Shelley";
		file="dz\gear\books\Automatic\Frankenstein.html";
		displayName="Frankenstein";
		descriptionShort="Frankenstein";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Frankenstein_co.paa"
		};
	};
	class BookDeLaTerreLaLune: ItemBook
	{
		scope=2;
		title="De la terre a la lune";
		author="Jules Verne";
		file="dz\gear\books\Automatic\DeLaTerreLaLune.html";
		displayName="De la terre a la lune";
		descriptionShort="De la terre a la lune";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DeLaTerreLaLune_co.paa"
		};
	};
	class BookDonQuichotte: ItemBook
	{
		scope=2;
		title="L’Ingénieux Hidalgo Don Quichotte de la Manche";
		author="Michel Cervantes";
		file="dz\gear\books\Automatic\DonQuichotte.html";
		displayName="L’Ingénieux Hidalgo Don Quichotte de la Manche";
		descriptionShort="L’Ingénieux Hidalgo Don Quichotte de la Manche";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DonQuichotte_co.paa"
		};
	};
	class BookLleMystrieuse: ItemBook
	{
		scope=2;
		title="L'Île mystérieuse";
		author="Jules Verne";
		file="dz\gear\books\Automatic\LleMystrieuse.html";
		displayName="L'Île mystérieuse";
		descriptionShort="L'Île mystérieuse";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LleMystrieuse_co.paa"
		};
	};
	class BookLaComdieHumaine: ItemBook
	{
		scope=2;
		title="La Comédie humaine volume I";
		author="Honoré de Balzac";
		file="dz\gear\books\Automatic\LaComdieHumaine.html";
		displayName="La Comédie humaine volume I";
		descriptionShort="La Comédie humaine volume I";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LaComdieHumaine_co.paa"
		};
	};
	class BookLesCorneilles: ItemBook
	{
		scope=2;
		title="Les Corneilles";
		author="J.-H. Rosny";
		file="dz\gear\books\Automatic\LesCorneilles.html";
		displayName="Les Corneilles";
		descriptionShort="Les Corneilles";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LesCorneilles_co.paa"
		};
	};
	class Book20000LieuesSousLesMers: ItemBook
	{
		scope=2;
		title="20000 Lieues sous les mers";
		author="Jules Verne";
		file="dz\gear\books\Automatic\20000LieuesSousLesMers.html";
		displayName="20000 Lieues sous les mers";
		descriptionShort="20000 Lieues sous les mers";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_20000LieuesSousLesMers_co.paa"
		};
	};
	class BookThreeMenInABoat: ItemBook
	{
		scope=2;
		title="Three Men in a Boat";
		author="Jerome K. Jerome";
		file="dz\gear\books\fiction\ThreeMenInABoat.html";
		displayName="Three Men in a Boat";
		descriptionShort="Three Men in a Boat";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ThreeMenInABoat_co.paa"
		};
	};
};
