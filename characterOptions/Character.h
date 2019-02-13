#include <iostream>

class Character
{
    public:
        int health;
        std::string name;
        int strength;
        int dexterity;
        int currentExperience;
        int experienceToNextLevel;
        int level;

        void displayLevel();

        void displayAttributes();

        void displayExperience();

        void addDex(int amount);
        
        void addStrength(int amount);
        
        void addXp(int amount);
        
        void addStat(int number);

        void checkLeftOver(int leftOver);

        void levelUp(int leftOver);

        Character(std::string name, int dex, int str);
};
