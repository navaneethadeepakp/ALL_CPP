#include "ClapTrap.hpp"

int main()
{
    ClapTrap myRobo("Bot1");
    std::cout << myRobo.getName() << " has " << myRobo.getHitpoints() << " hit points and " << myRobo.getEnergypoints() << " energy points" << std::endl;
    myRobo.attack("Bot2");
    std::cout << myRobo.getName() << " has " << myRobo.getHitpoints() << " hit points and " << myRobo.getEnergypoints() << " energy points" << std::endl;
    myRobo.takeDamage(5);
    std::cout << myRobo.getName() << " has " << myRobo.getHitpoints() << " hit points and " << myRobo.getEnergypoints() << " energy points" << std::endl;
    myRobo.beRepaired(3);
    std::cout << myRobo.getName() << " has " << myRobo.getHitpoints() << " hit points and " << myRobo.getEnergypoints() << " energy points" << std::endl;

    myRobo.takeDamage(10);
    std::cout << myRobo.getName() << " has " << myRobo.getHitpoints() << " hit points and " << myRobo.getEnergypoints() << " energy points" << std::endl;
    myRobo.attack("bot3");
    std::cout << myRobo.getName() << " has " << myRobo.getHitpoints() << " hit points and " << myRobo.getEnergypoints() << " energy points" << std::endl;
    return 0;
}