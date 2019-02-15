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

        inline int getLevel(){return level;}

        inline int getExperience(){return currentExperience;}

        inline int getHealth(){return health;}

        inline void addDex(int amount){dexterity += amount;}
        
        inline void addStrength(int amount){strength += amount;}

        inline void addHealth(int amount){health += amount;}

        inline void loseHealth(int amount){health -= amount;}
        
        void displayAttributes();
        
        void addXp(int amount);
        
        void addStat(int number);

        void checkLeftOver(int leftOver);

        void levelUp(int leftOver);

        Character(std::string name, int dex, int str);
};
