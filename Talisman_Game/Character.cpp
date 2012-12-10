#include "Character.h"

/*const string Character::LOCATION = "";
const string Character::ALIGNMENT = "";
const string Character::PROFESSION = "";*/


//-----CONSTRUCTORS/DESTRUCTOR-----//
Character::Character(){}

Character::Character(int _baseStrength, int _baseCraft, int _baseLife, int _baseFate, 
					int _numOfSpells, string _location, string _alignment, string profession)
{
	counterStrength = 0;
    counterCraft = 0;
    gold = 1;
    trophies = 0;
	fateTokens = 0;
	maxObjects = 4;
	numToadTurnsLeft = 0;
	idleTurnsLeft=0;
	this->profession = profession;

    mule = false;
    isToad = false;
	talisman = false;
	axe = false;
	raft = false;
	waterBottle= false;
	isAlive = true;

    baseStrength = _baseStrength;
    baseCraft = _baseCraft;
    baseLife = _baseLife;
    currentLife = _baseLife;
    baseFate = _baseFate;
	currentFate = _baseFate;
    numOfSpells = _numOfSpells;
    spawnPoint = _location;
    alignment = _alignment;
}

Character::~Character(void)
{

	baseStrength = 0;
    counterStrength = 0;
    baseCraft = 0;
    counterCraft = 0;
    baseLife = 0;
    currentLife = 0;
    gold = 0;
    currentFate = 0;
    trophies = 0;
    numOfSpells = 0;
    spawnPoint = "";
    alignment = "";
	profession = "";
    mule = 0;
    isToad = false;
}

//-----OBJECTS-----//
void Character::addObject(Card obj)
{
		if(this->bag.size() <=3){
		this->bag.push_back(obj);
	}
	else if(mule&& this->bag.size() <=7){
		this->bag.push_back(obj);	
	}
	else
		cout<<"The Bag is Full"<<endl;
 }
Card Character::removeObject(Card obj){
	string name = obj.getName();
	for(int i = 0; i <= bag.size(); i++){
		if(bag[i].getName() == name){
			Card temp = bag[i];
			bag[i] = bag.back();
			bag.back() = temp;
			bag.pop_back();
			return temp;
		}
	}		
}
Card Character::removeObject(string name){
	for(int i = 0; i <= bag.size(); i++){
		if(bag[i].getName() == name){
			Card temp = bag[i];
			bag[i] = bag.back();
			bag.back() = temp;
			bag.pop_back();
			return temp;
		}
	}
}
void Character::showBag(void)
{
	if(this->bag.size() != 0){
		for(int i = 0; i < this->bag.size(); i++){
			this->bag[i].print();
			cout << "; ";
		}
	}
	else
		cout << "Bag is empty!\n\n";
}
bool Character::hasInBag(string name){
	for(int i = 0; i <= bag.size(); i++){
		if(bag[i].getName() == name)
			return true;
	}
	return false;
}
bool Character::isBagFull()
{
	if(this->mule)
		return !(this->bag.size()<8);
	else
		return !(this->bag.size()<4);
}

//-----FOLLOWERS-----//
void Character::addFollower(Card obj)
{
	this->followers.push_back(obj);
}
Card Character::removeFollower(Card obj){
	string name = obj.getName();
	for(int i = 0; i <= followers.size(); i++){
		if(followers[i].getName() == name){
			Card temp = followers[i];
			followers[i] = followers.back();
			followers.back() = temp;
			followers.pop_back();
			return temp;
		}
	}	
	
}
Card Character::removeFollower(string name){
	for(int i = 0; i <= followers.size(); i++){
		if(followers[i].getName() == name){
			Card temp = followers[i];
			followers[i] = followers.back();
			followers.back() = temp;
			followers.pop_back();
			return temp;
		}
	}	
}
Card Character::removeFollower(int followerNumber){
	if(followerNumber>followers.size()-1)

	
	for(int i = 0; i <= followers.size(); i++){
		if (i==followerNumber){
			Card temp = followers[i];
			followers[i] = followers.back();
			followers.back() = temp;
			followers.pop_back();
			return temp;
		}
	}	
}
string Character::showFollower(int followerNumber){
	if(followerNumber>followers.size()-1)
	for(int i = 0; i <= followers.size(); i++){
		if (i==followerNumber){
			return followers[i].getName();
		}
	}
	return "";
}
void Character::showFollowers(void){
	if(this->followers.size() != 0){
		for(int i = 0; i < this->followers.size(); i++){
			this->followers[i].print();
			cout << "; ";
		}
	}
	else
		cout << "No Followers!\n\n";
}


bool Character::hasThisFollower(string name){
	for(int i = 0; i <= followers.size(); i++){
		if(followers[i].getName() == name)
			return true;
	}
	return false;
}

int Character::getNumFollowers(){
	return this->followers.size();
}

//-----SPELLS-----//

bool Character::hasRoomForSpells(){
	int crafty;
	int maxnumOfSpells;
	crafty = this->getCraft();
	if(crafty==1||crafty==2)
		maxnumOfSpells=0;
	if(crafty==3)	
		maxnumOfSpells=1;
	if(crafty==4||crafty==5)
		maxnumOfSpells=2;
	if(crafty>=6)
		maxnumOfSpells=3;
	if(spells.size()<maxnumOfSpells)
	{
		return true;
	}
	else
		return false;
}

void Character::addSpell(Card obj)
{
	if(this->hasRoomForSpells())
	this->spells.push_back(obj);
}

Card Character::removeSpell(Card obj){
	string name = obj.getName();
	for(int i = 0; i <= spells.size(); i++){
		if(spells[i].getName() == name){
			Card temp = spells[i];
			spells[i] = spells.back();
			spells.back() = temp;
			spells.pop_back();
			return temp;
		}
	}	
	
}
Card Character::removeSpell(string name){
	for(int i = 0; i <= spells.size(); i++){
		if(spells[i].getName() == name){
			Card temp = spells[i];
			spells[i] = spells.back();
			spells.back() = temp;
			spells.pop_back();
			return temp;
		}
	}	
}
void Character::showSpells(void){
	if(this->spells.size() != 0){
		for(int i = 0; i < this->spells.size(); i++){
			this->spells[i].print();
			cout << "\n\n";
		}
	}
	else
		cout << "You do not have any Spells!\n\n";
}

//-----GAIN/LOSS-----//
void Character::gainStrength(int str){
	counterStrength += str;	
}

void Character::loseStrength(int str){

	counterStrength -= str;

	if(counterStrength < 0){
		counterStrength = 0;
	}	
}

void Character::gainCraft(int craft){

	counterCraft += craft;
	
}

void Character::loseCraft(int craft){

	counterCraft -= craft;

	if(counterCraft < 0){
		counterCraft = 0;
	}	
}

void Character::gainLive(int lives){
	currentLife += lives;
}

void Character::loseLive(int lives){

	currentLife -= lives;

	if (currentLife <=0 ){
		isAlive = false;
	}

}

void Character::replenishLives(int lives){

	if(currentLife >= baseLife){
		return;
	}
	
	currentLife += lives;
	if(currentLife > baseLife){
		currentLife = baseLife;
	}
}

void Character::gainFate(int fate){

	currentFate += fate;


}

void Character::loseFate(int fate){

	currentFate -= fate;

	if (currentFate <=0 ){
		currentFate = 0;
	}

}

void Character::replenishFate(int fate){

	if(currentFate >= baseFate){
		return;
	}
	
	currentFate += fate;
	if(currentFate > baseFate){
		currentFate = baseFate;
	}
}

void Character::gainGold(int _gold){

	gold += _gold;

}

void Character::loseGold(int _gold){

	gold -= _gold;
}

//-----UPDATES-----//
void Character::updateMule(){
	//TODO
	mule = !mule;
}

void Character::updateToad(){
	isToad = !isToad;
}

//-----GETTERS/SETTERS-----//
string Character::getAlignment(){
	
	return this->alignment;
}

void Character::setAlignment(string _alignment){
	if(alignment == "Good" || alignment == "Neutral" || alignment == "Evil")
		alignment = _alignment;
	else
		cout << "Error-- that is not a valid alignment.";
}

string Character::getProfession(){

	return this->profession;
}


string Character::getSpawnPoint()
{
	return this->spawnPoint;
}

int Character::getLife(){

	return this->currentLife;
}

int Character::getStrength(){
		int strengthy=0;

		for(int i=0;i<this->followers.size();i++)
			strengthy += followers[i].getStrength();

		strengthy+=(this->baseStrength+this->counterStrength);
		return (strengthy);
}

int Character::getCraft(){
		int crafty;
		crafty=(this->baseCraft)+(this->counterCraft);
		return crafty;
}

int Character::getBaseLife(){

	return this->baseLife;
}

int Character::getBaseStrength(){

	return this->baseStrength;
}

int Character::getBaseCraft(){
	return this->baseCraft;
}

int Character::getCounterStrength(){

	return this->counterStrength;
}

int Character::getCounterCraft(){

	return this->counterCraft;
}
int Character::getIdleTurns(){
	return this->idleTurnsLeft;
}

int Character::getMaxObjectSize()
{
	return this->maxObjects;
}

int Character::getGold()
{
	return this->gold;
}

int Character::getFate()
{
	return this->currentFate;
}

bool Character::hasRaft()
{
	return this->raft;
}
void Character::setIdleTurns(int i){
	this->idleTurnsLeft=i;
}
void Character::setHasRaft(bool raftSituation)
{
	this->raft = raftSituation;
}
bool Character::hasWaterBottle(void){
	return this->waterBottle;
}
void Character::setHasWaterBottle(bool waterBottlesituation){
	this->waterBottle = waterBottlesituation;
}
void Character::setHasTalisman(bool talismanSituation)
{
	this->talisman = talismanSituation;
}

bool Character::hasAxe()
{
	return this->axe;
}

bool Character::hasTalisman()
{
	return this->talisman;
}
//-----BATTLES-----//
void Character::battleCharacter(Character opponent)
{
	int attackRoll;
	int opponentAttackRoll;
	char decision;

	//Spells
	cout<<"Would you like to use a spell?(y/n)"<<endl;
	cin>>decision;
	//if(decision =='y')
		//this->useSpell();
	cout<<"Would your opponent like to use a spell?(y/n)"<<endl;
	cin>>decision;
	//if(decision =='y')
		//opponent->useSpell();

	//Attack
	cout<<"Roll Dice for your attack roll."<<endl;
	srand((unsigned int)time(0));
	attackRoll= ((int) rand() % 6 + 1);
	system("PAUSE");
	cout<<"You have a "<<attackRoll<<endl;
	
	cout<<"Roll Dice for your Opponet's attack roll."<<endl;
	srand((unsigned int)time(0));
	opponentAttackRoll= ((int) rand() % 6 + 1);
	system("PAUSE");
	cout<<opponent.getProfession()<<"has a "<<opponentAttackRoll<<endl;

	//Using fate to Redo OR not to battle
	if(this->currentFate>0)
	{
		cout<<"Would you like to use a Fate Counter?(y/n)"<<endl;
		cin>>decision;
	}
	if(decision =='y')
	{
		this->loseFate(1);
		this->battleCharacter(opponent);
		return;
	}
	else if(decision =='n')
	{
		char spoilDecision;
		//You win the battle
		if(this->getStrength()+attackRoll > opponent.getStrength()+opponentAttackRoll)
		{
			cout<<this->getProfession()<<" wins!\n"
				<<"Would you like to take one of the "<<opponent.getProfession()<<"'s lives, take one of his/her belongings or gold?(l/b/g)"<<endl;
			cin>>spoilDecision;
			if(spoilDecision =='l')
			{
				opponent.loseLive(1);
				return;
			}
			else if (spoilDecision =='b')
			{
				
			}
			else if (spoilDecision =='g')
			{
				this->gainGold(1);
				opponent.loseGold(1);
			}
		}
		//Its a draw
		else if (this->getStrength()+attackRoll == opponent.getStrength()+opponentAttackRoll)
		{
		cout<<"It's a stand-off"<<endl;
		return;		
		}
		//You lose the battle
		else if (this->getStrength()+attackRoll < opponent.getStrength()+opponentAttackRoll)
		{
			char spoilDecision;
			cout<<opponent.getProfession()<<" wins!/n"
				<<"Would he/she like to take one of your lives,your belongings or one gold?(l/b/g)"<<endl;
			cin>>spoilDecision;
			if(spoilDecision =='l')
			{
					this->loseLive(1);
					return;
			}
			else if (spoilDecision =='b')
			{
			
			}
			else if (spoilDecision =='g')
			{
				this->loseGold(1);
				opponent.gainGold(1);
			}
		}
		this->printStats();
		opponent.printStats();
	}
}

bool Character::battleMonster(Card monster)
{
	char decision = 'n';
	int attackRoll;
	int monsterAttackRoll;
	
	//Attack
	cout<<"Roll Dice for your attack roll."<<endl;
	srand((unsigned int)time(0));
	attackRoll= ((int) rand() % 6 + 1);
	system("PAUSE");
	cout<<"You have a "<<attackRoll<<endl;

	cout<<"Roll Dice for your Opponent's attack roll."<<endl;
	srand((unsigned int)time(0));
	monsterAttackRoll= ((int) rand() % 6 + 1);
	system("PAUSE");
	cout<<monster.getName()<<" has a "<<monsterAttackRoll<<endl;

	//Using fate to Redo OR not to battle
	if(this->currentFate>0)
	{
		cout<<"Would you like to use a Fate Counter?(y/n)"<<endl;
		cin>>decision;
	}
	if(decision =='y')
	{
		this->currentFate--;
		this->battleMonster(monster);
		return false;
	}
	else if(decision =='n')
	{
		char spoilDecision;
		
		cout << "Your total strength for this battle is " << this->getStrength()+attackRoll << endl;
		cout << "Monster's total strength for this battle is \n" << monster.getStrength()+monsterAttackRoll << endl << endl;

		//You win the battle
		if(this->getStrength()+attackRoll > monster.getStrength()+monsterAttackRoll)
		{
			cout<<"You wins!\n"<<endl;
			this->trophies += 1;
			if(this->trophies>4){
				//Changing throphie management for strenth gaining
				this->trophies = this->trophies%4;
				this->counterStrength+=1;
			}
			return true;
		}
		//Its a draw
		else if (this->getStrength()+attackRoll == monster.getStrength()+monsterAttackRoll)
		{
			cout<<"It's a stand-off.\n"<<endl;
			return false;		
		}
		//You lose the battle
		else if (this->getStrength()+attackRoll < monster.getStrength()+monsterAttackRoll)
		{
			cout<<"You lose!\n";
			this->currentLife--;			
			this->printStats();
			return false;
		}
	}
}

//-----PRINT-----//
void Character::printStats()
{
	cout << this->getProfession() << "'s stats are as follows:\n"
	<<"-------------------------------\n"
	<<"Alignment: "<<this->getAlignment()<<"\n"
	<< "Current Life: " << this->getLife() << "/" << this->getBaseLife()<<"\n"
	<< "Strength: " << this->getStrength() << " (" << this->getBaseStrength() << " Base + " << this->getCounterStrength() << " Counters)\n"
	<< "Craft: " << this->getCraft() << " (" << this->getBaseCraft() << " Base + " << this->getCounterCraft() << " Counters)\n"
	<< "Gold: " <<this->getGold()<<"\n"
	<< "Fate: " <<this->getFate()<<"\n"
	<< "Bag: "; this->showBag(); cout<<"\n"
	<< "Followers: "; this->showFollowers(); cout<<"\n\n\n";
	return;
}

//-----MISCELLANEOUS-----//

