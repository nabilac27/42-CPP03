/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:21:58 by nchairun          #+#    #+#             */
/*   Updated: 2026/03/10 22:26:30 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* 
    - Name, which is passed as a parameter to the constructor
    - Hit points (100), representing the health of the ClapTrap
    - Energy points (50)
    - Attack damage (20)
    - void guardGate()
*/


ScavTrap::ScavTrap() : ClapTrap("default")
{
    hitPoints    = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "Default constructor called [ScavTrap]" << std::endl;
}


ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    hitPoints    = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "Parameterized constructor called [ScavTrap]" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "Copy constructor called [ScavTrap]" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        name         = other.name;
        hitPoints    = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "Copy assignment operator called [ScavTrap]" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called [ScavTrap]" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hitPoints < 1 || energyPoints < 1)
    {
        std::cout << "ScavTrap " << name << " can't attack." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
