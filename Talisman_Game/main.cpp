#include "Map.h"
#include "Player.h"
#include "Character.h"
#include "Deck.h"
#include "Card.h"
#include "BattleObject.h"
#include "Axe.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Ape.h"
#include "Bear.h"
#include "Lion.h"
#include "Serpent.h"
#include "WildBoar.h"
#include "Wolf.h"
#include "Dragon.h"
#include "Bandit.h"
#include "Giant.h"
#include "Goblin.h"
#include "Hobgoblin.h"
#include "Ogre.h"
#include "Demon.h"
#include "Ghost.h"
#include "Lemure.h"
#include "Shadow.h"
#include "Spectre.h"
#include "Wraith.h"
#include "Enemy.h"
#include "Alchemist.h"
#include "CursedByAHag.h"
#include "Follower.h"
#include "Gnome.h"
#include "Guide.h"
#include "Healer.h"
#include "Maiden.h"
#include "Mercenary.h"
#include "Mule.h"
#include "Pixie.h"
#include "Poltergeist.h"
#include "Prince.h"
#include "Princess.h"
#include "Armour.h"
#include "Axe.h"
#include "BattleObject.h"
#include "Helmet.h"
#include "HolyLance.h"
#include "Shield.h"
#include "Sword.h"
#include "Amulet.h"
#include "Cross.h"
#include "HolyGrail.h"
#include "MagicBelt.h"
#include "MagicObject.h"
#include "OrbOfKnowledge.h"
#include "PotionofStrength.h"
#include "Ring.h"
#include "Runesword.h"
#include "SolomonsCrown.h"
#include "Talisman.h"
#include "Angel.h"
#include "Blizzard.h"
#include "BookOfSpells.h"
#include "Event.h"
#include "EvilDarkness.h"
#include "MagicalVortex.h"
#include "MarketDay.h"
#include "Mephistopheles.h"
#include "Pestilence.h"
#include "Raiders.h"
#include "Siren.h"
#include "Storm.h"
#include "MagicPortal.h"
#include "MagicStream.h"
#include "Market.h"
#include "Marsh.h"
#include "Maze.h"
#include "Place.h"
#include "PoolofLife.h"
#include "Shrine.h"
#include "Enchanter.h"
#include "Fairy.h"
#include "Hermit.h"
#include "Mage.h"
#include "Phantom.h"
#include "Sorcerer.h"
#include "Stranger.h"
#include "BagOfGold.h"
#include "NormalObject.h"
#include "Raft.h"
#include "TwoBagsofGold.h"
#include "AdventureCard.h"
#include "Acquisition.h"
#include "Alchemy.h"
#include "Counterspell.h"
#include "DestroyMagic.h"
#include "Destruction.h"
#include "Divination.h"
#include "Healing.h"
#include "Hex.h"
#include "Immobility.h"
#include "Invisibility.h"
#include "Mesmerism.h"
#include "Nullify.h"
#include "Preservation.h"
#include "PsyonicBlast.h"
#include "RandomSpell.h"
#include "Spell.h"
#include "Teleport.h"
#include "TemporalWarp.h"

using namespace std;

const int MAXNUMBEROFPLAYERS = 6;
const int NUMBEROFCHARACTERS = 14;
int isInPlay[NUMBEROFCHARACTERS];
int numberOfPlayers;
int numberOfPlayersAlive = 0;
int SmallStrengthCounters = 32;
int BigStrengthCounters = 8;
int SmallCraftCounters = 32;
int BigCraftCounters = 8;
int LivesCounters = 40;
int FateCounters = 36;
int GoldCoins = 30;
int turn = 1;

void initializeCharacterArray(void)
{
	for(int i = 0; i < NUMBEROFCHARACTERS; i++)
	{
		isInPlay[i] = 0;
	}
}

int diceRoll(void)
{
	srand((unsigned int)time(0));
	return ((int) rand() % 6 + 1);
}

bool canEvade(Player opponent)
{
	if(opponent.getCharacter().getProfession()=="Elf" && opponent.getCurrentAreaName()=="Woods")
		return true;
	else if(opponent.getCharacter().getProfession()=="Dwarf" && opponent.getCurrentAreaName()=="Hills")
		return true;
	else 
		return false;
}

void movementOnBoard(Player players[], int turn, Map* TalismanMap)
{
	cout << "\nIt is currently Player " << turn << "'s turn!" << endl;
			cout << players[turn].getCharacter().getProfession() << ", you are at the "<< players[turn].getCurrentAreaName()<<endl;
			char decision;
			bool endTurn=false;

			//--Non-Rolling Non-Movement Alternative to the Turn 1/2
			//-Casting the Command Spell
			if(players[turn].getCurrentAreaName()=="Crown of Command")
			{
				cout<<players[turn].getCharacter().getProfession()<<", you are still at the COROWN OF COMMAND, please press any key to roll the die and cast the Command Spell!" << endl;
				system("PAUSE");
				int dRoll = diceRoll();
				cout << "You have rolled a " << dRoll << "!"<<endl;
				if (dRoll >3)
				{
					cout << "You have succeded in casting the Spell, All other Players loses a life!! MOUHAHAHA!!"<<endl;
					for (int i=0;i<numberOfPlayers;i++)
					{
						if ((!players[i].checkIfPermaDead()) && i!=turn)
							players[i].getCharacter().loseLive(1);
					}
					endTurn = true;
				}
				else
				{
					cout << "You missed the spell ... nothing happened."<<endl;
					endTurn = true;
				}
			}
			if(endTurn)
				return;
			
			//--Non-Rolling Non-Movement Alternatives to the Turn 2/2
			//-Building a raft
			if(players[turn].getCharacter().hasAxe() && players[turn].getCurrentAreaName()=="Woods" && !players[turn].getCharacter().isBagFull())
			{
				cout<<"Would you like to use this turn to build a Raft instead of moving (y/n)?"<<endl;
				cin>>decision;
				if(decision)
				{
					players[turn].getCharacter().setHasRaft(true);
					endTurn = true;
				}
			}
			if(endTurn)
				return;

			//--Non-Rolling Movement Alternatives to the Turn 1/2
			//-Using a raft
			if(players[turn].getCharacter().hasRaft() && players[turn].getCurrentRegion()=="outter")
			{
				cout<<"Would you like to use this turn to cross the Storm River with your Raft instead of moving (y/n)?"<<endl;
				cin>>decision;
				if(decision)
				{
					//Implement raft crossing
					endTurn = true;
				}
			}
			if(endTurn)
				return;

			//--Non-Rolling Movement Alternatives to the Turn 2/2
			//-Inside the Inner Region
			int dRoll;
			if (players[turn].getCurrentRegion()=="inner")
			{
				cout<<"While in the Inner Region of Talisman, one may only move to one area at the time."<<endl;
				dRoll = 1;
			}
			//--Rolling Movement Alternative to the Turn
			else
			{
				cout<<"Please press any key to roll the die." << endl;
				system("PAUSE");
				dRoll = diceRoll();
				cout << "You have rolled a " << dRoll << "!"<<endl; 
			}
			char movedirection;
			cout << "Would you like to move right(r) or left(l)?" << endl;
			cin >> movedirection; //Must be idiot-proofed

			//Moving Player's Character on the Board
			for (int i=0; i<dRoll; i++)
			{
				if(movedirection == 'r')
				{
					players[turn].moveCharacterRight();
					cout << "You are moving towards the "<< players[turn].getCurrentAreaName()<<endl;
				}
				else if(movedirection == 'l')
				{
					players[turn].moveCharacterLeft();
					cout << "You are moving towards the "<< players[turn].getCurrentAreaName()<<endl;
				}
				else
				{
					cout<<"Can't move there!";
				}

				//-Special landing points on board 1/4 Sentinel
				if(players[turn].getCurrentAreaName()=="Sentinel")
				{
				cout << players[turn].getCharacter().getProfession() << "!!, you have reach the Sentinel, would you like to tempt to cross the bridge? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						cout<<"Congratulations, you have crossed the bridge!!\n"
							<<"Would you like to continue right(r) or left(l)?"<<endl;
						cin>>movedirection;
						players[turn].setCurrentArea(TalismanMap,"middle","Hills");
						players[turn].setCurrentRegion("middle");
						i++;
					}
				}

				//-Special landing points on board 2/4 Hills from the middle region
				if(players[turn].getCurrentAreaName()=="Hills" && players[turn].getCurrentRegion()=="middle")
				{
				cout << players[turn].getCharacter().getProfession() << ", you are back at the Hills, would you like to cross the bridge? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						cout<<"You have crossed the bridge!!\n"
							<<"Would you like to continue right(r) or left(l)?"<<endl;
						cin>>movedirection;
						players[turn].setCurrentArea(TalismanMap,"outter","Sentinel");
						players[turn].setCurrentRegion("outter");
						i++;
					}
				}

				//-Special landing points on board 3/4 Portal of Power
				if(players[turn].getCurrentAreaName()=="Portal of Power")
				{
				cout << players[turn].getCharacter().getProfession() << "!!, you have reach the Portal of Power, would you like to tempt to open it? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						cout<<"You have opened the portal!!\n"
							<<"Would you like to continue right(r) or left(l)?"<<endl;
						cin>>movedirection;
						players[turn].setCurrentArea(TalismanMap,"inner","Plain of Peril");
						players[turn].setCurrentRegion("inner");
						i++;
					}
				}

				//-Special landing points on board 4/4 Valey of Fire
				if(players[turn].getCurrentAreaName()=="Valey of Fire")
				{
				cout << players[turn].getCharacter().getProfession() << "!!, you have reach the Valey of Fire!!"<<endl;
					if(players[turn].getCharacter().hasTalisman())
					{
						cout<<"You have used your Talisman to enter into the Crown of Command!!\n"<<endl;
						players[turn].setCurrentArea(TalismanMap,"crown","Crown of Command");
						players[turn].setCurrentRegion("crown");
						i++;
					}
					else
					{
						cout<<"Sorry Adventurer, without the Talisman, you may not continue beyond this point, please move back toward the plain of Peril.\n"<<endl;
					}
				}
			}
}

void encounterPlayer(Player players[], int turn)
{
	//Looking through all characters
	for (int i=1; i<numberOfPlayers+1; i++)
		{
			char decision='n';
			//Looking if the oppenent characters or on the same area
			if ((i!=turn) && (players[i].getCurrentAreaNumber() == players[turn].getCurrentAreaNumber())) 
			{
				//Decide if you would to encounter the character
				cout<<players[i].getCharacter().getProfession()<<" is also at the "<<players[i].getCurrentAreaName()<<" would you like to encounter them?(y/n)"<<endl;
				cin>>decision;
			}
			//Encountoring Opponent
			if (decision=='y')
			{
				char opponentDecision='n';
				bool opponetCanEvade = canEvade(players[i]);
				if (opponetCanEvade)
				{
					cout<<players[i].getCharacter().getProfession()<<", would you like to evade?(y/n)"<<endl;
					cin>>opponentDecision;
				}
				//Opponent evades 
				if (opponentDecision =='y')
					break;
				//Opponent does not evade 
				else if(opponentDecision =='n')
				{
					players[turn].getCharacter().battleCharacter(players[i].getCharacter());	
				}

			}
			else
				break;
		}//End of character loop
}

Deck* createAdventureCardDeck(void){
	Deck * temp = new Deck();

	Card * c = new Ape();
	temp->add(*c);
	c = new Bear();
	temp->add(*c);
	c = new Lion();
	temp->add(*c);
	c = new Serpent();
	temp->add(*c);
	c = new WildBoar();
	temp->add(*c);
	c = new Wolf();
	temp->add(*c);
	c = new Dragon();
	temp->add(*c);
	c = new Bandit();
	temp->add(*c);
	c = new Giant();
	temp->add(*c);
	c = new Goblin();
	temp->add(*c);
	c = new Hobgoblin();
	temp->add(*c);
	c = new Ogre();
	temp->add(*c);
	c = new Demon();
	temp->add(*c);
	c = new Ghost();
	temp->add(*c);
	c = new Lemure();
	temp->add(*c);
	c = new Shadow();
	temp->add(*c);
	c = new Spectre();
	temp->add(*c);
	c = new Wraith();
	temp->add(*c);
	c = new Alchemist();
	temp->add(*c);
	c = new CursedByAHag();
	temp->add(*c);
	c = new Gnome();
	temp->add(*c);
	c = new Guide();
	temp->add(*c);
	c = new Healer();
	temp->add(*c);
	c = new Maiden();
	temp->add(*c);
	c = new Mercenary();
	temp->add(*c);
	c = new Mule();
	temp->add(*c);
	c = new Pixie();
	temp->add(*c);
	c = new Poltergeist();
	temp->add(*c);
	c = new Prince();
	temp->add(*c);
	c = new Princess();
	temp->add(*c);
	c = new Armour();
	temp->add(*c);
	c = new Axe();
	temp->add(*c);
	c = new Helmet();
	temp->add(*c);
	c = new HolyLance();
	temp->add(*c);
	c = new Shield();
	temp->add(*c);
	c = new Sword();
	temp->add(*c);
	c = new Amulet();
	temp->add(*c);
	c = new Cross();
	temp->add(*c);
	c = new HolyGrail();
	temp->add(*c);
	c = new MagicBelt();
	temp->add(*c);
	c = new OrbOfKnowledge();
	temp->add(*c);
	c = new PotionOfStrength();
	temp->add(*c);
	c = new Ring();
	temp->add(*c);
	c = new Runesword();
	temp->add(*c);
	c = new SolomonsCrown();
	temp->add(*c);
	c = new Talisman();
	temp->add(*c);
	c = new Angel();
	temp->add(*c);
	c = new Blizzard();
	temp->add(*c);
	c = new BookOfSpells();
	temp->add(*c);
	c = new EvilDarkness();
	temp->add(*c);
	c = new MagicalVortex();
	temp->add(*c);
	c = new MarketDay();
	temp->add(*c);
	c = new Pestilence();
	temp->add(*c);
	c = new Raiders();
	temp->add(*c);
	c = new Siren();
	temp->add(*c);
	c = new Storm();
	temp->add(*c);
	c = new MagicPortal();
	temp->add(*c);
	c = new MagicStream();
	temp->add(*c);
	c = new Market();
	temp->add(*c);
	c = new Marsh();
	temp->add(*c);
	c = new Maze();
	temp->add(*c);
	c = new PoolofLife();
	temp->add(*c);
	c = new Shrine();
	temp->add(*c);
	c = new Enchanter();
	temp->add(*c);
	c = new Fairy();
	temp->add(*c);
	c = new Hermit();
	temp->add(*c);
	c = new Mage();
	temp->add(*c);
	c = new Phantom();
	temp->add(*c);
	c = new Sorcerer();
	temp->add(*c);
	c = new BagOfGold();
	temp->add(*c);
	c = new Raft();
	temp->add(*c);
	c = new TwoBagsOfGold();
	temp->add(*c);

    temp->shuffle();
	return temp;
}

Deck* createSpellCardDeck(void){
	Deck * temp = new Deck();

	Card * c = new Acquisition();
	temp->add(*c);
	c = new Alchemy();
	temp->add(*c);
	c = new Counterspell();
	temp->add(*c);
	c = new DestroyMagic();
	temp->add(*c);
	c = new Destruction();
	temp->add(*c);
	c = new Divination();
	temp->add(*c);
	c = new Healing();
	temp->add(*c);
	c = new Hex();
	temp->add(*c);
	c = new Immobility();
	temp->add(*c);
	c = new Invisibility();
	temp->add(*c);
	c = new Mesmerism();
	temp->add(*c);
	c = new Nullify();
	temp->add(*c);
	c = new Preservation();
	temp->add(*c);
	c = new PsyonicBlast();
	temp->add(*c);
	c = new RandomSpell();
	temp->add(*c);
	c = new Teleport();
	temp->add(*c);
	c = new TemporalWarp();
	temp->add(*c);

	temp->shuffle();
	return temp;
}

int main(void){
	cout<<" **********            ** **                                       \n"
		<<"/////**///            /**//                                        \n"
		<<"    /**      ******   /** **  ****** **********   ******   ******* \n"
		<<"    /**     //////**  /**/** **//// //**//**//** //////** //**///**\n"
		<<"    /**      *******  /**/**//*****  /** /** /**  *******  /**  /**\n"
		<<"    /**     **////**  /**/** /////** /** /** /** **////**  /**  /**\n"
		<<"    /**    //******** ***/** ******  *** /** /**//******** ***  /**\n"
		<<"    //      //////// /// // //////  ///  //  //  //////// ///   // \n"<<endl;

	//--------------SETUP--------------
	//--Board Setup
	Map* TalismanMap = new Map();
	Deck* adventureCards = createAdventureCardDeck();
	Deck* spellCards = createSpellCardDeck();

	//--Number of Players Setup
	bool correctInput = false;
	int characterNumberSelection;
	while (!correctInput)
	{
		cout<<"How many players will be playing this game?"<<endl;	
		cin>>characterNumberSelection;
		//Checking for correct number of players
		if(characterNumberSelection>1 && characterNumberSelection<=6)
			correctInput = true;
		if(!correctInput)
			cout<<"I am sorry that number of players is not permitted, please try again."<<endl;
	}
	numberOfPlayers = characterNumberSelection;
	numberOfPlayersAlive = numberOfPlayers;

	Player *players = new Player[numberOfPlayers];


	//--Assign characters to players
	initializeCharacterArray();
	for (int i=1; i<numberOfPlayers+1; i++)
	{
		cout << "Creating Player " << i << endl;
		new (&players[i]) Player(TalismanMap, isInPlay);
		cout << players[i].getCharacter().getProfession() <<" has been created." << endl;
		players[i].getCharacter().printStats();
	}

	// MIKE TEST 1212
	/*Card c = adventureCards->draw();
	players[0].addToBag(c);
	players[0].getCharacter().showBag();

	c = players[0].removeFromBag(c);
	cout << "??" << endl;
	players[0].getCharacter().showBag();
	c.print();*/

	//--------------GAME--------------
	//for(int testTurns = 0 ; testTurns<30; testTurns++)
	while(numberOfPlayersAlive > 1)
	{
		//----Character Movement/Activity on Board
		if(!players[turn].checkIfPermaDead())
		{
			movementOnBoard(players, turn, TalismanMap);

			//Encounters with players -if possible-
			encounterPlayer(players, turn);

			//Encounter with space
			cout << players[turn].getCharacter().getProfession() << ", you are now at the "<< players[turn].getCurrentAreaName()
				 <<"\n\n"<<players[turn].getCurrentAreaDescription()<<endl;
			

			cout<<"This is the end of you turn, press any key to end turn."<<endl;
			system("PAUSE");
			system("CLS");

		}
		(turn == numberOfPlayers)?(turn=1):(turn++);
	}
	system("PAUSE");
	return 0;
}