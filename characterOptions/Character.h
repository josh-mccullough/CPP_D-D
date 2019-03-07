#include <iostream>

class Character
{
    private:
        int mHealth;
        std::string mName;

        // Attributes
        int mStrength;
        int mDexterity;
        int mConstitution; 
        int mIntelligence;
        int mWisdom;
        int mCharisma;

        // skills
        int mAcrobatics;
        int mAnimalHandling;
        int mArcana;
        int mAthletics;
        int mDeception;
        int mHistory;
        int mInsight;
        int mIntimidation;
        int mInvestigation;
        int mMedicine;
        int mNature;
        int mPerception;
        int mPerformance;
        int mPersusion;
        int mReligion;
        int mSleightOfHand;
        int mStealth;
        int mSurvival;

        std::string mRace;
        std::string mClass;
        int mArmourRating;

        int mCurrentExperience;
        int mExperienceToNextLevel;
        int mLevel;
        
    public:
        enum chapterPoint {CHAPTER_1, CHAPTER_2, CHAPTER_3};
        enum storyPoint {C1_P1, C1_P2, C1_P3, C1_P4, C1_P5, C2_P1};
        chapterPoint mChapterPoint;
        storyPoint mStoryPoint;

        void displayAttributes(); 
        void displaySkills();

        inline int getLevel (){return mLevel;}
        inline int getExperience (){return mCurrentExperience;}
        void addXp (int mAmount);
        void checkLeftOver (int mLeftOver);
        void levelUp (int mLeftOver);

        const chapterPoint getChapterPoint () {return mChapterPoint;}
        inline void setChapterPoint (chapterPoint chp) {mChapterPoint = chp;}
        
        const storyPoint getStoryPoint () {return mStoryPoint;}
        inline void setStoryPoint (storyPoint sp) {mStoryPoint = sp;}

        inline bool isAlive () {return mHealth > 0;}
        inline int getHealth () const {return mHealth;}
        inline void addHealth (int amount){mHealth += amount;}
        inline void loseHealth (int amount){mHealth -= amount;}
        
        Character (std::string& name, std::string& race, int armourRating):
                 mHealth (500), mName (name),
                 mStrength (0), mDexterity (0), mConstitution (0), mIntelligence (0),
                 mWisdom (0), mAcrobatics (0), mAnimalHandling (0), mArcana (0),
                 mAthletics (0), mDeception (0), mHistory (0), mInsight (0),
                 mIntimidation (0), mInvestigation (0), mMedicine (0),
                 mNature (0), mPerception (0), mPerformance (0), mPersusion (0),
                 mReligion (0), mSleightOfHand (0), mStealth (0), mSurvival (0),
                 mRace (race), mClass ("something"), mArmourRating (armourRating),
                 mCurrentExperience (0), mExperienceToNextLevel (200), mLevel (1),
                 mChapterPoint(CHAPTER_1), mStoryPoint(C1_P1) 
        {}
        
        // not sure i need this but it looks cool right?
        ~ Character () {}
};
