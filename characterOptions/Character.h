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
        enum chapterPoint {CHAPTER_1, CHAPTER_2, CHAPTER_3};
        enum storyPoint {C1_P1, C1_P2, C1_P3, C1_P4, C1_P5, C2_P1};
        chapterPoint mChapterPoint;
        storyPoint mStoryPoint;

        inline int getLevel (){return level;}
        inline int getExperience (){return currentExperience;}
        void addXp (int amount);
        void checkLeftOver (int leftOver);
        void levelUp (int leftOver);

        const chapterPoint getChapterPoint () {return mChapterPoint;}
        inline void setChapterPoint (chapterPoint chp) {mChapterPoint = chp;}
        
        const storyPoint getStoryPoint () {return mStoryPoint;}
        inline void setStoryPoint (storyPoint sp) {mStoryPoint = sp;}

        inline bool isAlive () {return health > 0;}
        inline int getHealth () const {return health;}
        inline void addHealth (int amount){health += amount;}
        inline void loseHealth (int amount){health -= amount;}
        

        Character (std::string& name, std::string& race, int armourRating):
                 health(500), name(name),
                 strength(0), dexterity(0), constitution(0), intelligence(0),
                 wisdom(0), acrobatics(0), animalHandling(0), arcana(0),
                 athletics(0), deception(0), history(0), insight(0),
                 intimidation(0), investigation(0), medicine(0),
                 nature(0), perception(0), performance(0), persusion(0),
                 religion(0), sleightOfHand(0), stealth(0), survival(0),
                 race(race), classG("something"), armourRating(armourRating),
                 currentExperience(0), experienceToNextLevel(200), level(1),
                 mChapterPoint(CHAPTER_1), mStoryPoint(C1_P1) 
        {}
        
        // not sure i need this but it looks cool right?
        ~ Character () {}
};
