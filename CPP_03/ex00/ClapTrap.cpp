#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("deafault"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& rName): name(rName), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap constructor called " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &other)
{
    std::cout << "ClapTrap assignment operator called" << std::endl;
    (void)other;
    if (this != &other)
    {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_points > 0 && hit_points > 0)
    {
        energy_points--;
        std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage." << std::endl;
    }
    else
         std::cout << "ClapTrap " << name << " has no energy or hit points left to attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= hit_points)
        hit_points = 0;
    else
        hit_points -= amount;
    std::cout << "ClapTrap " << name << " took " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points > 0 && hit_points > 0)
    {
        energy_points--;
        hit_points += amount;
        std::cout << "ClapTrap " << name << " repaired itself for " << amount << " points!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " cannot repair (no energy or HP)." << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called for " << name << std::endl;
}

std::string ClapTrap::getName() const{ return name;}
unsigned int ClapTrap::getHitpoints() const{ return hit_points;}
unsigned int ClapTrap::getEnergypoints() const{ return energy_points;}
// hitpoints- lose when take damge from enemy 
// energy points - looses when attack the target or reapairing
// Attack Action:
// Condition: Requires energy_points > 0 and hit_points > 0.  
// Cost: Decreases energy_points by 1.  
// Result: The target loses hit points (simulated via output message). 

// Repair Action:Condition:
// Requires energy_points > 0 and hit_points > 0. 
// Cost: Decreases energy_points by 1. 
// Result: Increases hit_points by the specified amount. 

// Take Damage Action:
// Result: Reduces hit_points by amount.  

// The "Empty Tank" ScenarioYou are 100% correct about the limit.
// Since each attack and repair costs 1 energy point, your robot acts like a battery.
// If you start with 10 energy points, you can perform exactly 10 actions total.
// Once that counter hits 0:  Your code will trigger the else block (the "no energy left" message) for any subsequent attack or beRepaired calls.  
// However, because takeDamage does not require energy (it is something happening to you, not something you are doing), your robot can still be damaged even if it is completely out of energy.  