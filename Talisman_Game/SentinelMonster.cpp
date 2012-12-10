#include "SentinelMonster.h"

const string SentinelMonster::NAME = "Sentinel";
const string SentinelMonster::TYPE = "Monster";
const string SentinelMonster::DESCRIPTION = "A Sentinel is guarding the bridge. It will only let you cross if you defeat it.";

SentinelMonster::SentinelMonster() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


SentinelMonster::~SentinelMonster(void)
{
}
