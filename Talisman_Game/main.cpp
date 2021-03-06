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
#include "SentinelMonster.h"
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

void printMap(Player players[])
{
	int mapAreaNumber=0;
	bool putPlayerOnArea=false;
	
	for(int v = 0;v<7;v++)
	{
		if(v==5)
			cout<<" _ _ _ _ _ = _ \n";
		else if (v==6)
			cout<<" _ _ = _ _ _ _ \n";
		else
			cout<<" _ _ _ _ _ _ _ \n";
		
		for(int h = 0;h<7;h++)
		{
			for (int i=1; i<numberOfPlayers+1; i++)
			{
				if (players[i].getCurrentAreaNumber()==mapAreaNumber)
				{
					if (v==3&&h==3)
						cout<<"}"<<i;
					else
						cout<<"|"<<i;

					putPlayerOnArea=true;
					break;
				}
			}
			if(!putPlayerOnArea)
			{
				if (v==3&&h==3)
					cout<<"} ";
				else
					cout<<"| ";
			}

			putPlayerOnArea=false;
			mapAreaNumber++;
		}
		if (v==6)
			cout<<"|\n"<<" _ _ _ _ _ _ _ \n\n\n";
		else
			cout<<"|\n";
	}
}
	

void playerBannerTemplate(int turn)
{
	switch(turn)
	{
		case (1):
		cout<<" *******   **                                      ** \n"
			<<"/**////** /**            **   **                  *** \n"
			<<"/**   /** /**  ******   //** **   *****  ******  //** \n"
			<<"/*******  /** //////**   //***   **///**//**//*   /** \n"
			<<"/**////   /**  *******    /**   /******* /** /    /** \n"
			<<"/**       /** **////**    **    /**////  /**      /** \n"
			<<"/**       ***//********  **     //******/***      ****\n"
			<<"//       ///  ////////  //       ////// ///      //// \n"<<endl;
		break;
	case (2):
		cout<<" *******   **                                      **** \n"
			<<"/**////** /**            **   **                  */// *\n"
			<<"/**   /** /**  ******   //** **   *****  ******  /    /*\n"
			<<"/*******  /** //////**   //***   **///**//**//*     *** \n"
			<<"/**////   /**  *******    /**   /******* /** /     *//  \n"
			<<"/**       /** **////**    **    /**////  /**      *     \n"
			<<"/**       ***//********  **     //******/***     /******\n"
			<<"//       ///  ////////  //       ////// ///      ////// \n"<<endl;
		break;
	case (3):
		cout<<" *******   **                                      **** \n"
			<<"	/**////** /**            **   **                  */// *\n"
			<<"	/**   /** /**  ******   //** **   *****  ******  /    /*\n"
			<<"	/*******  /** //////**   //***   **///**//**//*     *** \n"
			<<"	/**////   /**  *******    /**   /******* /** /     /// *\n"
			<<"	/**       /** **////**    **    /**////  /**      *   /*\n"
			<<"	/**       ***//********  **     //******/***     / **** \n"
			<<"	//       ///  ////////  //       ////// ///       ////  \n"<<endl;
		break;
	case (4):
		cout<<" *******   **                                        ** \n"
			<<"	/**////** /**            **   **                    */* \n"
			<<"	/**   /** /**  ******   //** **   *****  ******    * /* \n"
			<<"	/*******  /** //////**   //***   **///**//**//*   ******\n"
			<<"	/**////   /**  *******    /**   /******* /** /   /////* \n"
			<<"	/**       /** **////**    **    /**////  /**         /* \n"
			<<"	/**       ***//********  **     //******/***         /* \n"
			<<"	//       ///  ////////  //       ////// ///          /  \n"<<endl;
		break;
	case (5):
		cout<<" *******   **                                     ******\n"
			<<"	/**////** /**            **   **                 /*//// \n"
			<<"	/**   /** /**  ******   //** **   *****  ******  /***** \n"
			<<"	/*******  /** //////**   //***   **///**//**//*  ///// *\n"
			<<"	/**////   /**  *******    /**   /******* /** /        /*\n"
			<<"	/**       /** **////**    **    /**////  /**      *   /*\n"
			<<"	/**       ***//********  **     //******/***     / **** \n"
			<<"	//       ///  ////////  //       ////// ///       ////  \n"<<endl;
		break;
	case (6):
		cout<<" *******   **                                      **** \n"
			<<"	/**////** /**            **   **                  */// *\n"
			<<"	/**   /** /**  ******   //** **   *****  ******  /*   / \n"
			<<"	/*******  /** //////**   //***   **///**//**//*  /***** \n"
			<<"	/**////   /**  *******    /**   /******* /** /   /*/// *\n"
			<<"	/**       /** **////**    **    /**////  /**     /*   /*\n"
			<<"	/**       ***//********  **     //******/***     / **** \n"
			<<"	//       ///  ////////  //       ////// ///       ////  \n"<<endl;
		break;
	}
}

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
	if(opponent.getCharacter()->getProfession()=="Elf" && opponent.getCurrentAreaName()=="Woods")
		return true;
	else if(opponent.getCharacter()->getProfession()=="Dwarf" && opponent.getCurrentAreaName()=="Hills")
		return true;
	else 
		return false;
}

void movementOnBoard(Player players[], int turn, Map* TalismanMap)
{
			cout << players[turn].getCharacter()->getProfession() << ", you are at the "<< players[turn].getCurrentAreaName()<<endl;
			char decision;
			bool endTurn=false;
			bool hasRolled=false;

			//--Non-Rolling Non-Movement Alternative to the Turn 1/2
			//-Casting the Command Spell
			if(players[turn].getCurrentAreaName()=="Crown of Command")
			{
				cout<<players[turn].getCharacter()->getProfession()<<", you are still at the CROWN OF COMMAND, please press any key to roll the die and cast the Command Spell!" << endl;
				system("PAUSE");
				int dRoll = diceRoll();
				cout << "You have rolled a " << dRoll << "!"<<endl;
				if (dRoll >3)
				{
					cout << "You have succeded in casting the Spell, All other Players loses a life!! MOUHAHAHA!!"<<endl;
					for (int i=0;i<numberOfPlayers;i++)
					{
						if ((!players[i].checkIfPermaDead()) && i!=turn)
							players[i].getCharacter()->loseLive(1);
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
			if(players[turn].getCharacter()->hasAxe() && players[turn].getCurrentAreaName()=="Woods" && !players[turn].getCharacter()->isBagFull())
			{
				cout<<"Would you like to use this turn to build a Raft instead of moving (y/n)?"<<endl;
				cin>>decision;
				if(decision)
				{
					players[turn].getCharacter()->setHasRaft(true);
					endTurn = true;
				}
			}
			if(endTurn)
				return;

			//--Non-Rolling Movement Alternatives to the Turn 1/2
			//-Using a raft
			if(players[turn].getCharacter()->hasRaft() && players[turn].getCurrentRegion()=="outter")
			{
				cout<<"Would you like to use this turn to cross the Storm River with your Raft instead of moving (y/n)?"<<endl;
				cin>>decision;
				if(decision=='y')
				{
					if(players[turn].getCurrentRegion()=="middle")
					{
						string temp = players[turn].getRaftDestination();
						players[turn].setCurrentArea(TalismanMap,"outter",temp);
						players[turn].setCurrentRegion("outter");
					
					}
					else if(players[turn].getCurrentRegion()=="outter")
					{
						string temp = players[turn].getRaftDestination();
						players[turn].setCurrentArea(TalismanMap,"middle",temp);
						players[turn].setCurrentRegion("middle");
					
					}
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
				if(players[turn].getCurrentAreaName()=="Portal of Power"){
					goto portalOfPower;
				}
				else if(players[turn].getCurrentAreaName()=="Sentinel"){
					goto sentinel;
				}			

				if(hasRolled == false){
					cout<<"Please press any key to roll the die." << endl;
					system("PAUSE");
					dRoll = diceRoll();
					hasRolled = true;
					cout << "You have rolled a " << dRoll << "!"<<endl; 		
				}			
			}
			char movedirection;
			cout << "Would you like to move right(r) or left(l)?" << endl;
			cin >> movedirection; //Must be idiot-proofed

			//Moving Player's Character on the Board	
			mainMovementLoop:
			for (int i=0; i<dRoll; i++)
			{				
				mainMovementLoop2:
				if(i == dRoll)
					break;
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

				//-Special landing points on board 1/5 Sentinel		
				sentinel:
				if(players[turn].getCurrentAreaName()=="Sentinel")
				{
				cout << players[turn].getCharacter()->getProfession() << "!!, you have reach the Sentinel, would you like to tempt to cross the bridge? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						SentinelMonster sentinel;
						if(players[turn].getCharacter()->battleMonster(sentinel)){
							cout<<"Congratulations, you have crossed the bridge!!\n"
								<<"Would you like to continue right(r) or left(l)?"<<endl;
							cin>>movedirection;
							players[turn].setCurrentArea(TalismanMap,"middle","Hills");
							players[turn].setCurrentRegion("middle");
							if(hasRolled == false){
								cout<<"Please press any key to roll the die." << endl;
								system("PAUSE");
								dRoll = diceRoll();
								cout << "You have rolled a " << dRoll << "!"<<endl; 
								hasRolled = true;
							}
							else
								i++;
						}
						else{
							cout << "You have lost the engagement and have failed to cross the bridge.";
							break;
						}
					}
					else{
						if(hasRolled == false){
							cout<<"Please press any key to roll the die." << endl;
							system("PAUSE");
							dRoll = diceRoll();
							hasRolled = true;
							cout << "You have rolled a " << dRoll << "!"<<endl; 			
							cout << "Would you like to move right(r) or left(l)?" << endl;
							movedirection = 'r';
							cin >> movedirection;
							goto mainMovementLoop;
						}
						else{
							i++;
							goto mainMovementLoop2;
						}
					}
				}

				//-Special landing points on board 2/5 Hills from the middle region
				if(players[turn].getCurrentAreaName()=="Hills" && players[turn].getCurrentRegion()=="middle")
				{
				cout << players[turn].getCharacter()->getProfession() << ", you are back at the Hills, would you like to cross the bridge? (y/n) " << endl;
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

				//-Special landing points on board 3/5 Portal of Power
				portalOfPower:
				if(players[turn].getCurrentAreaName()=="Portal of Power")
				{
				cout << players[turn].getCharacter()->getProfession() << "!!, you have reach the Portal of Power, would you like to tempt to open it? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						// Strength or Craft?
						char decision2;
						while(true){
							cout<<"Would you like to attempt to open the Portal with Strength or Craft? (s/c)" << endl;
							cin>>decision2;
							if(decision2 == 's'){
								break;
							}
							else if(decision2 == 'c'){
								break;
							}
							else
								cout<<"Error-- Input must be 's' or 'c'." << endl;
						}

						cout<<"You are about to roll the first die." << endl;
						system("PAUSE");
						int diceRoll1 = diceRoll();
						cout<<"You have rolled a " << diceRoll1 << endl << endl;

						cout<<"You are about to roll the second die." << endl;
						system("PAUSE");
						int diceRoll2 = diceRoll();
						cout<<"You have rolled a " << diceRoll2 << endl << endl;

						int totalRoll = diceRoll1 + diceRoll2;
						cout << "Your total roll is " << totalRoll << endl;
						bool pass = false;

						if(decision2 == 's')
						{
							cout << "Your Strength is " << players[turn].getCharacter()->getStrength() << endl;
							if(totalRoll < players[turn].getCharacter()->getStrength()){
								pass = true;
							}
						}
						else if(decision2 == 'c')
						{
							cout << "Your Craft is " << players[turn].getCharacter()->getCraft() << endl;
							if(totalRoll < players[turn].getCharacter()->getCraft()){
								pass = true;
							}
						}

						if(pass){
							cout<<"You have opened the portal!!"<<endl;
							players[turn].setCurrentArea(TalismanMap,"inner","Plain of Peril");
							players[turn].setCurrentRegion("inner");

							// SHOW SPACE INFO


							break;
						}
						else{
							cout << "You have failed to cross the Portal of Power.";
							break;
						}

					}
					else{
						if(hasRolled == false){
							cout<<"Please press any key to roll the die." << endl;
							system("PAUSE");
							dRoll = diceRoll();
							hasRolled = true;
							cout << "You have rolled a " << dRoll << "!"<<endl; 			
							cout << "Would you like to move right(r) or left(l)?" << endl;
							movedirection = 'r';
							cin >> movedirection;
							goto mainMovementLoop;
						}
						else{
							i++;
							goto mainMovementLoop2;
						}
					}
				}

				//-Special landing points on board 4/5 Plain of Peril from the inner region
				if(players[turn].getCurrentAreaName()=="Plain of Peril" && players[turn].getCurrentRegion()=="inner")
				{
				cout << players[turn].getCharacter()->getProfession() << ", you are back at the Plain Of Peril, would you like to cross the Portal Power back? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						cout<<"You have crossed the the Portal!!\n"
							<<"Would you like to continue right(r) or left(l)?"<<endl;
						cin>>movedirection;
						players[turn].setCurrentArea(TalismanMap,"middle","Portal of Power");
						players[turn].setCurrentRegion("middle");
						i++;
					}
				}

				//-Special landing points on board 5/5 Valley of Fire
				if(players[turn].getCurrentAreaName()=="Valey of Fire")
				{
				cout << players[turn].getCharacter()->getProfession() << "!!, you have reach the Valey of Fire!!"<<endl;
					if(players[turn].getCharacter()->hasTalisman())
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
				cout<<players[i].getCharacter()->getProfession()<<" is also at the "<<players[i].getCurrentAreaName()<<" would you like to encounter them?(y/n)"<<endl;
				cin>>decision;
			}
			//Encountoring Opponent
			if (decision=='y')
			{
				char opponentDecision='n';
				bool opponetCanEvade = canEvade(players[i]);
				if (opponetCanEvade)
				{
					cout<<players[i].getCharacter()->getProfession()<<", would you like to evade?(y/n)"<<endl;
					cin>>opponentDecision;
				}
				//Opponent evades 
				if (opponentDecision =='y')
					break;
				//Opponent does not evade 
				else if(opponentDecision =='n')
				{
					players[turn].getCharacter()->battleCharacter(*players[i].getCharacter());	
				}

			}
			else
				break;
		}//End of character loop
}

void checkIfOnSpecialIdelSpace(Player * players, int turn, Deck* adventureCards, Deck* spellCards)
{
	if (players[turn].getCurrentAreaName()=="Dice with Death"||players[turn].getCurrentAreaName()=="Temple")
	{
		players[turn].encounterSpace(adventureCards, spellCards);
	}
	if (players[turn].getCurrentAreaName()=="Pits"||players[turn].getCurrentAreaName()=="Wereworlf Den")
	{
		players[turn].encounterSpace(adventureCards, spellCards);
		players[turn].getCharacter()->setIdleTurns(players[turn].getCharacter()->getIdleTurns()-1);
	}	
	return;
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
	c= new Giant();
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
		cout << players[i].getCharacter()->getProfession() <<" has been created." << endl;
		players[i].getCharacter()->printStats();
	}

	// CURRENT BUILD:
	// Bag & Followers work; Spells do not.


	//--------------GAME--------------
	cout<<"----------------------------PRESS ANY KEY TO BEGINNING THE GAME\n";
	system("PAUSE");
	system("CLS");

	while(numberOfPlayersAlive > 1)
	{
		//----Character Movement/Activity on Board
		if(!players[turn].checkIfPermaDead())
		{
			playerBannerTemplate(turn);
			printMap(players);
			players[turn].getCharacter()->printStats();

			if(players[turn].getCharacter()->getIdleTurns()>0)
			{
				cout<<"Sorry Adventurer, you must stay on this space this turn.\n";
				
				checkIfOnSpecialIdelSpace(players, turn,adventureCards, spellCards);
				players[turn].getCharacter()->setIdleTurns(players[turn].getCharacter()->getIdleTurns()-1);
			}
			else
			{
				movementOnBoard(players, turn, TalismanMap);

				//Encounters with players -if possible-
				encounterPlayer(players, turn);

				//Encounter with space
				cout << players[turn].getCharacter()->getProfession() << ", you are now at the "<< players[turn].getCurrentAreaName()
					 <<"\n\n"<<players[turn].getCurrentAreaDescription()<<endl;
				players[turn].encounterSpace(adventureCards, spellCards);

				cout<<"This is the end of you turn, press any key to end turn."<<endl;
				system("PAUSE");
				system("CLS");
			}

			//Killing character if he died this turn!
			if (players[turn].getCharacter()->getLife()<1){
				players[turn].isNowPermaDead();
				cout<<"Sorry "<<players[turn].getCharacter()->getProfession()<<" this is where your adventure ends, you are now dead!"<<endl;
				numberOfPlayersAlive--;}
		}
		(turn == numberOfPlayers)?(turn=1):(turn++);
	}

	cout<<"======================\n"
		<<"Congradulation!!!!\n\n"
		<<players[turn].getCharacter()->getProfession()<<" has won the Game!\n";
		players[turn].getCharacter()->printStats();

		cout<<"Thank you for playing, see you next time!";
	system("PAUSE");
	return 0;
}