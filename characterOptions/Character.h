#include <iostream>
#include <iterator>
#include <cctype>
#include <algorithm>
#include <map>

class Character
{
    public:
        std::map<std::string, int>::iterator it;

        int health;
        std::string name;

        // Attributes
        std::map<std::string, int> attributeMap;

        // skills
        std::map<std::string, int> skillMap;

        std::string race;
        std::string classG;
        int armourRating;

        int currentExperience;
        int experienceToNextLevel;
        int level;

        inline int getLevel(){return level;}
        inline int getExperience(){return currentExperience;}
        void addXp(int amount);
        void checkLeftOver(int leftOver);
        void levelUp(int leftOver);

        inline int getHealth(){return health;}
        inline void addHealth(int amount){health += amount;}
        inline void loseHealth(int amount){health -= amount;}
        
        void displayAttributes(); 
        void addAttribute(std::string attribute, int amount);

        void displaySkills();
        void addSkill(std::string skill, int amount);

        Character(std::string name, std::string classG, int armourRating);
};
