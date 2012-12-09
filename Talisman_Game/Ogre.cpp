#include "Ogre.h"

const string Ogre::NAME = "Ogre";
const string Ogre::TYPE = "Monster";
const string Ogre::DESCRIPTION = "An Ogre has decided this area is easy pickings. It will remain here until it is killed.";

Ogre::Ogre() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Ogre::~Ogre(void)
{
}
