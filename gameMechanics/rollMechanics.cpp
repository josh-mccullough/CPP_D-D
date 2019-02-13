#include "rollMechanics.h"

int oneRoll()
{
	int roll;
    int min = 1; // the min number a die can roll is 1
    int max = 6;// this->dieSize; // the max value is the die size

    roll = rand() % (max - min + 1) + min;

    return roll;
}


bool checkHitChance()
{
    if (oneRoll() > 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
