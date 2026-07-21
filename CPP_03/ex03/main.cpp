#include "DiamondTrap.hpp"
#include <iostream>

void print_values(DiamondTrap& sven) {
    std::cout << "hp = " << sven.getHitpoints() << std::endl;
    std::cout << "ep = " << sven.getEnergypoints() << std::endl;
    std::cout << "ad = " << sven.getAttackDamage() << std::endl;
}

int main()
{
    std::cout << "----no parameter----" << std::endl;
    DiamondTrap defaultMonster;
    defaultMonster.whoAmI();

    std::cout << "\n----with parameter----" << std::endl;

    DiamondTrap sven("Sven");
    sven.whoAmI();

    sven.attack("dummy");
    print_values(sven);

    sven.takeDamage(50);
    print_values(sven);

    sven.beRepaired(25);
    print_values(sven);

    sven.guardGate();
    sven.highFivesGuys();

    std::cout << "\n----mcopying object----" << std::endl;
    DiamondTrap cloneSven(sven);
    cloneSven.whoAmI();

    std::cout << "\n----with parameter----" << std::endl;
    DiamondTrap anotherMonster("Bob");
    anotherMonster.whoAmI();

    std::cout << "\n----assigning object----" << std::endl;
    anotherMonster = sven;
    anotherMonster.whoAmI();
    return 0;
}