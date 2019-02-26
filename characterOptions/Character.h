#include <iostream>

class Character
{
    private:
        int health;
        std::string name;

        // Attributes
        void displayAttributes(); 
        int strength;
        int dexterity;
        int constitution; 
        int intelligence;
        int wisdom;
        int charisma;

        // skills
        void displaySkills();
        int acrobatics;
        int animalHandling;
        int arcana;
        int athletics;
        int deception;
        int history;
        int insight;
        int intimidation;
        int investigation;
        int medicine;
        int nature;
        int perception;
        int performance;
        int persusion;
        int religion;
        int sleightOfHand;
        int stealth;
        int survival;

        std::string race;
        std::string classG;
        int armourRating;

        int currentExperience;
        int experienceToNextLevel;
        int level;

    public:
        inline int getLevel(){return level;}
        inline int getExperience(){return currentExperience;}
        void addXp(int amount);
        void checkLeftOver(int leftOver);
        void levelUp(int leftOver);

        inline int getHealth(){return health;}
        inline void addHealth(int amount){health += amount;}
        inline void loseHealth(int amount){health -= amount;}
        
        Character(std::string name, std::string classG, int armourRating);
};
