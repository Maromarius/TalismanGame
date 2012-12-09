#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <string>
#include "Region.h"
#include "BlackKnight.h"
#include "Castle.h"
#include "Chapel.h"
#include "Chasm.h"
#include "City.h"
#include "Crags.h"
#include "Crypt.h"
#include "CursedGlade.h"
#include "Desert.h"
#include "DiceWithDeath.h"
#include "Fields.h"
#include "Forest.h"
#include "Graveyard.h"
#include "HiddenValley.h"
#include "Hills.h"
#include "Mines.h"
#include "Oasis.h"
#include "Pits.h"
#include "PlainOfPeril.h"
#include "Plains.h"
#include "PortalOfPower.h"
#include "Ruins.h"
#include "Runes.h"
#include "Sentinel.h"
#include "Tavern.h"
#include "Temple.h"
#include "ValleyOfFire.h"
#include "VampiresTower.h"
#include "Village.h"
#include "WarlocksCave.h"
#include "WerewolfDen.h"
#include "Woods.h"
using namespace std;



class Map : public Region
{
public:
	
	//Regions of TalisMAN
	Region OutterRegion;
	Region MiddleRegion;
	Region InnerRegion;
	Region Crown;

	//Constructor & Destructor
	Map();
	~Map();
};
#endif