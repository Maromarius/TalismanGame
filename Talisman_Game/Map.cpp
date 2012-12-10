#include "Map.h"

Map::Map()
{
	//Outter Region
	Area * OutterRegionAreas[24];
	OutterRegionAreas[0] = new City(0);
	OutterRegionAreas[1] = new Fields(1);
	OutterRegionAreas[2] = new Hills(2);
	OutterRegionAreas[3] = new Plains(3);
	OutterRegionAreas[4] = new Woods(4);
	OutterRegionAreas[5] = new Plains(5);
	OutterRegionAreas[6] = new Tavern(6);
	OutterRegionAreas[7] = new Fields(13);
	OutterRegionAreas[8] = new Ruins(20);
	OutterRegionAreas[9] = new Plains(27);
	OutterRegionAreas[10] = new Forest(34);
	OutterRegionAreas[11] = new Fields(41);
	OutterRegionAreas[12] = new Village(48);
	OutterRegionAreas[13] = new Fields(47);
	OutterRegionAreas[14] = new Graveyard(46);
	OutterRegionAreas[15] = new Woods(45);
	OutterRegionAreas[16] = new Sentinel(44);
	OutterRegionAreas[17] = new Hills(43);
	OutterRegionAreas[18] = new Chapel(42);
	OutterRegionAreas[19] = new Fields(35);
	OutterRegionAreas[20] = new Crags(28);
	OutterRegionAreas[21] = new Plains(21);
	OutterRegionAreas[22] = new Woods(14);
	OutterRegionAreas[23] = new Fields(7);
	for(int i =0;i<24;i++)
		this->OutterRegion.addAtTail(OutterRegionAreas[i]);
	
	//Middle Region
	Area * MiddleRegionAreas[16];
	MiddleRegionAreas[0] = new WarlocksCave(8);
	MiddleRegionAreas[1] = new Desert(9);
	MiddleRegionAreas[2] = new Oasis(10);
	MiddleRegionAreas[3] = new Desert(11);
	MiddleRegionAreas[4] = new Temple(12);
	MiddleRegionAreas[5] = new Woods(19);
	MiddleRegionAreas[6] = new Runes(26);
	MiddleRegionAreas[7] = new Castle(33);
	MiddleRegionAreas[8] = new PortalOfPower(40);
	MiddleRegionAreas[9] = new BlackKnight(39);
	MiddleRegionAreas[10] = new HiddenValley(38);
	MiddleRegionAreas[11] = new Hills(37);
	MiddleRegionAreas[12] = new CursedGlade(36);
	MiddleRegionAreas[13] = new Runes(29);
	MiddleRegionAreas[14] = new Chasm(22);
	MiddleRegionAreas[15] = new Runes(15);
	for(int i =0;i<16;i++)
		this->MiddleRegion.addAtTail(MiddleRegionAreas[i]);

	//Inner region
		Area * InnerRegionAreas[8];
	InnerRegionAreas[0] = new ValleyOfFire(16);
	InnerRegionAreas[1] = new WerewolfDen(17);
	InnerRegionAreas[2] = new DiceWithDeath(18);
	InnerRegionAreas[3] = new Crypt(25);
	InnerRegionAreas[4] = new PlainOfPeril(32);
	InnerRegionAreas[5] = new Mines(31);
	InnerRegionAreas[6] = new VampiresTower(30);
	InnerRegionAreas[7] = new Pits(23);
	for(int i =0;i<8;i++)
		this->InnerRegion.addAtTail(InnerRegionAreas[i]);

	//Crown of Command
	this->Crown.addAtTail("Crown of Command");

	//Setting Raft Destinations
	int middleRegiontracker = 0;
	for (int i=0;i<24;i++)
	{
		OutterRegionAreas[i]->setRaftDestination(MiddleRegionAreas[middleRegiontracker]);
		MiddleRegionAreas[middleRegiontracker]->setRaftDestination(OutterRegionAreas[i]);
	}
}

Map::~Map()
{
	delete &OutterRegion;
	delete &MiddleRegion;
	delete &InnerRegion;
	delete &Crown;
}