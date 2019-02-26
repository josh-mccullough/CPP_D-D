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
        inline int getLevel (){return level;}
        inline int getExperience (){return currentExperience;}
        void addXp (int amount);
        void checkLeftOver (int leftOver);
        void levelUp (int leftOver);

        inline int getHealth (){return health;}
        inline void addHealth (int amount){health += amount;}
        inline void loseHealth (int amount){health -= amount;}
        
        Character (std::string name, std::string classG, int armourRating):
                 strength(0), dexterity(0), constitution(0), intelligence(0),
                 wisdom(0), acrobatics(0), animalHandling(0), arcana(0),
                 athletics(0), deception(0), history(0), insight(0),
                 intimidation(0), investigation(0), medicine(0),
                 nature(0), perception(0), performance(0), persusion(0),
                 religion(0), sleightOfHand(0), stealth(0), survival(0),
                 experienceToNextLevel(100), currentExperience(0),level(1), health(500)
        {
            name = name;
            classG = classG;
            armourRating = armourRating;
        }
        
        // not sure i need this but it looks cool right?
        ~ Character () {}
};
