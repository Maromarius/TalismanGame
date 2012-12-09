#include "Player.h"


Character character;
bool isPermaDead;

Player::Player()
{}

Player::Player(Map* Board, int isInPlay[])
{
	// Roll for a random character 
		int characterRoll;

		while(true)
		{
			srand((unsigned int)time(0));
			characterRoll = rand() % NUMBEROFCHARACTERS;
			if(isInPlay[characterRoll] == 0)
			{
				isInPlay[characterRoll] = 1;
				break;
			}			
		}

		character = createCharacter(characterRoll);
		isPermaDead = false;
		currentRegion = "outter";
		Player::setCurrentArea(Board,"outter",character.getSpawnPoint());
}

Player::~Player()
{
}

bool Player::checkIfPermaDead(void)
{
	return isPermaDead;
}

void Player::isNowPermaDead(void)
{
	isPermaDead = true;
}

Character Player::createCharacter(int characterRoll)
{
	// Create & return the character
		Character *character;
		
		switch(characterRoll){
			case 0:
				character = new Assassin();
				cout << "You drew the Assassin card!" << endl;
				break;
			case 1:
				character = new Druid();
				cout << "You drew the Druid card!"<< endl;
				break;
			case 2:
				character = new Dwarf();
				cout << "You drew the Dwarf card!"<< endl;
				break;
			case 3:
				character = new Elf();
				cout << "You drew the Elf card!"<< endl;
				break;
			case 4:
				character = new Ghoul();
				cout << "You drew the Ghoul card!"<< endl;
				break;
			case 5:
				character = new Ministrel();
				cout << "You drew the Ministrel card!"<< endl;
				break;
			case 6:
				character = new Monk();
				cout << "You drew the Monk card!"<< endl;
				break;
			case 7:
				character = new Priest();
				cout << "You drew the Priest card!"<< endl;
				break;
			case 8:
				character = new Prophetess();
				cout << "You drew the Prophetess card!"<< endl;
				break;
			case 9:
				character = new Sorceress();
				cout << "You drew the Sorceress card!"<< endl;
				break;
			case 10:
				character = new Thief();
				cout << "You drew the Thief card!"<< endl;
				break;
			case 11:
				character = new Troll();
				cout << "You drew the Troll card!"<< endl;
				break;
			case 12:
				character = new Warrior();
				cout << "You drew the Warrior card!"<< endl;
				break;
			case 13:
				character = new Wizard();
				cout << "You drew the Wizard card!"<< endl;
				break;
		}

		return *character;

}

Character* Player::getCharacter()
{
	return &character;
}

void Player::setCurrentArea(Map * Board, string region,string TargetArea)
{
	if(region == "inner")
		this->currentArea = Board->InnerRegion.getArea(TargetArea);
	if(region == "middle")
		this->currentArea = Board->MiddleRegion.getArea(TargetArea);
	if(region == "outter")
		this->currentArea = Board->OutterRegion.getArea(TargetArea);
	if(region =="crown")
		this->currentArea = Board->Crown.getArea(TargetArea);
}

string Player::getCurrentAreaName(void)
{
	return currentArea->getAreaName();
}

string Player::getCurrentAreaDescription(void)
{
	return currentArea->getAreaDescription();
}

int Player::getCurrentAreaNumber(void)
{
	return currentArea->getAreaMapNumber();
}

string Player::getCurrentRegion(void)
{
	return this->currentRegion;
}
void Player::setCurrentRegion(string newRegion)
{
	this->currentRegion = newRegion;
}

void Player :: moveCharacterRight()
{
	this->currentArea = this->currentArea->getRight();
}

void Player :: moveCharacterLeft()
{
	this->currentArea = this->currentArea->getLeft();
}

// Bag
void Player:: addToBag(Card card)
{
	this->character.addObject(card);
}
Card Player:: removeFromBag(Card card){
	return this->character.removeObject(card);
}
Card Player:: removeFromBag(string card){
	return this->character.removeObject(card);
}

// Followers
void Player:: addFollower(Card card)
{
	this->character.addFollower(card);
}
Card Player:: removeFollower(Card card){
	return this->character.removeFollower(card);
}
Card Player:: removeFollower(string card){
	return this->character.removeFollower(card);
}

// Spells
/*
void Player:: addSpell(Card card)
{
	this->character.addSpell(card);
}
Card Player:: removeSpell(Card card){
	return this->character.removeSpell(card);
}
Card Player:: removeSpell(string card){
	return this->character.removeSpell(card);
}*/