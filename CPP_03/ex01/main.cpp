#include "ScavTrap.hpp"

int main()
{
    ScavTrap alpha("Alpha");
    ScavTrap beta("Beta");
    ScavTrap gama(alpha);
std::cout <<"--------" << std::endl;

    beta = alpha;
    alpha.attack("Enemy_bot");
    alpha.takeDamage(20);
    alpha.guardGate();
    return 0;

}