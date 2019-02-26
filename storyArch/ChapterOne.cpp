#include <iostream>

int chapter1 () 
{
    int userDecision;
    std::cout << "Welcome to the adventure" << std::endl;
    std::cout << "You see a door infront of you, would you like to to 1.walk away or 2.open the door?" << std::endl;
    std::cin >> userDecision;
    if (userDecision == 1)
    {
        std::cout << "You die now for a laugh" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "You open the door, you walk inside, a grand hall is infront of you. But where are all the people? You notice a chest on the ground: 1.open chest 2.leave chest alone and continue down the hall?" << std::endl;
        std::cin >> userDecision;
        if (userDecision == 1)
        {
            return 0;
        }
        else
        {
            return 0;
        }
    }
}
