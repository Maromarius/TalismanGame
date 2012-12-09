#ifndef CHARACTER_H
#define CHARACTER_H
#include "Enemy.h"
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class Character
{

protected: //TO CHANGE!!!


	//Character Stats
	int baseStrength;		// Base Strength (on Character Card)
	
	int counterStrength;	// How many Strength counters have been obtained
	
	int baseCraft;			// Base Craft (on Character Card)
	int counterCraft;		// How many Craft counters have been obtained
	
	int baseLife;			// Base Life (on Character Card)
	int currentLife;		// How many Life counters the Character currently has
	
	int baseFate;			// How many Fate Tokens does the Character start with?
	int currentFate;

	int trophies;			// Amount of trophies
	int numOfSpells;		// Number of spells a character can hold
	int gold;				// Amount of Gold the Character currently has
	int fateTokens;			// Amount of Fate Tokens the Character currently has
	int maxObjects;

	bool talisman;			// Is one of the character's Adventure Cards a Talisman?
	bool mule;				// Is the character own a Mule as one of his Adventure Cards?
	bool axe;				// Does the character have an Axe as one of his Adventure Cards?
	bool raft;				// Does the character have a Raft as one of his Adventure Cards?
	bool isAlive;

	bool isToad;			// Is the character currently inflicted with Toad status?
	int numToadTurnsLeft;	// How many turns does the character have left of being a Toad?
	
	string spawnPoint;		// The Area on the Map where this character starts

	string alignment;
	string profession;

	vector<AdventureCard> bag;

	//Spell spells[3];					// Array to hold the spells a character has
    //LinkedList<Follower> followers;	// Linked list to hold all followers



public:
	Character::Character(void);
	Character::Character(int, int, int, int, int, string, string,string);
	Character::~Character(void);
	void gainStrength(int);
    void loseStrength(int);
    void gainCraft(int);
    void loseCraft(int);
    void gainLive(int);
    void replenishLives(int);
    void loseLive(int);
    void gainFate(int);
    void replenishFate(int);
    void loseFate(int);
	void gainGold(int);
	void loseGold(int);
    void updateLocation(string);
    void updateAlignment(string);
    void updateMule();
    void updateToad();
	void addObject(AdventureCard);
	void moveRight();
	void moveLeft();
	void battleCharacter(Character);
	void battleMonster(Enemy);
	void removeObject(AdventureCard);
	void removeObject(string);
	string getProfession();
	string getSpawnPoint();
	string getAlignment();
	int getLife();
	int getBaseLife();
	int getStrength();
	int getBaseStrength();
	int getCraft();
	int getBaseCraft();
	int getCounterStrength();
	int getCounterCraft();
	void showBag();
	int getMaxObjectSize();
	void printStats();
	bool hasAxe();
	bool hasRaft();
	void setHasRaft(bool);
	bool hasTalisman();
	void setHasTalisman(bool);
	void acquiresRaft();
	bool isBagFull();


};

#endif