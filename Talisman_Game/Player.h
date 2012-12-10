#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Map.h"
#include "Player.h"
#include "Character.h"
#include "Card.h"
#include "Assassin.h"
#include "Druid.h"
#include "Dwarf.h"
#include "Elf.h"
#include "Ghoul.h"
#include "Ministrel.h"
#include "Monk.h"
#include "Priest.h"
#include "Prophetess.h"
#include "Sorceress.h"
#include "Thief.h"
#include "Troll.h"
#include "Warrior.h"
#include "Wizard.h"

#include <cstdlib>
#include <ctime>
using namespace std;

class Player
{
	protected:
		Character character;
		Area* currentArea;
		string currentRegion;
		bool isPermaDead;
		static const int NUMBEROFCHARACTERS = 14;

	public:
		Player::Player(void);
		Player::Player(Map * Board, int[]);
		Player::~Player(void);
		Character Player::createCharacter(int);
		Character* Player::getCharacter(void);
		bool Player::checkIfPermaDead(void);
		void Player::isNowPermaDead(void);
		void Player::setCurrentArea(Map * Board,string region, string TargetArea);
		string Player::getCurrentAreaName(void);
		int Player::getCurrentAreaNumber(void);
		string Player::getCurrentAreaDescription(void);
		string Player::getCurrentRegion(void);
		void Player::setCurrentRegion(string);
		void moveCharacterLeft();
		void moveCharacterRight();
		void encounterSpace(Deck* , Deck*);

		void addToBag(Card);
		Card removeFromBag(Card);
		Card removeFromBag(string);
		void addFollower(Card);
		Card removeFollower(Card);
		Card removeFollower(string);
		bool hasRoomForSpells(void);
		void addSpell(Card);
		Card removeSpell(Card);
		Card removeSpell(string);
};
#endif