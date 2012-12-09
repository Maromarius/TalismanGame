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
	OutterRegionAreas[7] = new Fields(7);
	OutterRegionAreas[8] = new Ruins(8);
	OutterRegionAreas[9] = new Plains(9);
	OutterRegionAreas[10] = new Forest(10);
	OutterRegionAreas[11] = new Fields(11);
	OutterRegionAreas[12] = new Village(12);
	OutterRegionAreas[13] = new Fields(13);
	OutterRegionAreas[14] = new Graveyard(14);
	OutterRegionAreas[15] = new Woods(15);
	OutterRegionAreas[16] = new Sentinel(16);
	OutterRegionAreas[17] = new Hills(17);
	OutterRegionAreas[18] = new Chapel(18);
	OutterRegionAreas[19] = new Fields(19);
	OutterRegionAreas[20] = new Crags(20);
	OutterRegionAreas[21] = new Plains(21);
	OutterRegionAreas[22] = new Woods(22);
	OutterRegionAreas[23] = new Fields(23);
	for(int i =0;i<24;i++)
		this->OutterRegion.addAtTail(OutterRegionAreas[i]);
	
	//Middle Region
	Area * MiddleRegionAreas[16];
	MiddleRegionAreas[0] = new WarlocksCave(24);
	MiddleRegionAreas[1] = new Desert(25);
	MiddleRegionAreas[2] = new Oasis(26);
	MiddleRegionAreas[3] = new Desert(27);
	MiddleRegionAreas[4] = new Temple(28);
	MiddleRegionAreas[5] = new Woods(29);
	MiddleRegionAreas[6] = new Runes(30);
	MiddleRegionAreas[7] = new Castle(31);
	MiddleRegionAreas[8] = new PortalOfPower(32);
	MiddleRegionAreas[9] = new BlackKnight(33);
	MiddleRegionAreas[10] = new HiddenValley(34);
	MiddleRegionAreas[11] = new Hills(35);
	MiddleRegionAreas[12] = new CursedGlade(36);
	MiddleRegionAreas[13] = new Runes(37);
	MiddleRegionAreas[14] = new Chasm(38);
	MiddleRegionAreas[15] = new Runes(39);
	for(int i =0;i<16;i++)
		this->MiddleRegion.addAtTail(MiddleRegionAreas[i]);

	//Inner region
		Area * InnerRegionAreas[8];
	InnerRegionAreas[0] = new ValleyOfFire(40);
	InnerRegionAreas[1] = new WerewolfDen(41);
	InnerRegionAreas[2] = new DiceWithDeath(42);
	InnerRegionAreas[3] = new Crypt(43);
	InnerRegionAreas[4] = new PlainOfPeril(44);
	InnerRegionAreas[5] = new Mines(45);
	InnerRegionAreas[6] = new VampiresTower(46);
	InnerRegionAreas[7] = new Pits(47);
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