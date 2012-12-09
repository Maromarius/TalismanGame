#include "DiceWithDeath.h"
#include "Area.h"

const string DiceWithDeath::NAME = "Dice With Death";
const string DiceWithDeath::DESCRIPTION =	"You Must/n"
											"Roll 2 dice for yourself and 2 for Death. If the Scores are equal: You must Dice with Death again on your next\n"
											"Turn. If your score is lower: You lose 1 life and must Dice with Dice again on your next Turn.\n"
											"If your score is higher: You may move on your next Turn.\n";

DiceWithDeath::DiceWithDeath(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

DiceWithDeath::~DiceWithDeath()
{
}