/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 13:50:46 by nchairun          #+#    #+#             */
/*   Updated: 2026/03/10 11:17:56 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// can’t do anything if it has no hit points or energy points left
//  ClapTrap instances should not interact directly with one another,  and the parameters will not refer to another instance of ClapTrap

/* 
    Attack costs 1 energy
    Repair costs 1 energy
    If hitPoints == 0 → ClapTrap can't do anything
    If energyPoints == 0 → ClapTrap can't act
    takeDamage() just reduces HP
*/

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Parameterized constructor of " << name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "Copy constructor of " << name << " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of " << name << " called" << std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator of " << name << " called" << std::endl;
	return (*this);
}


ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name		 = other.name;
		hitPoints	 = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "Copy assignment operator of " << name << " called" << std::endl;
	return (*this);
}


ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of " << name << " called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoints < 1 || energyPoints < 1)
    {
        std::cout << "ClapTrap " << name << " can't attack." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints < 1)
    {
        std::cout << "ClapTrap" << name << " can't take damage." << std::endl;
        return;
    }
    hitPoints = hitPoints - amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damages!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints < 1 || energyPoints < 1)
    {
        std::cout << "ClapTrap " << name << " can't repair." << std::endl;
        return;
    }
    energyPoints--;
	hitPoints = hitPoints + amount;
	std::cout << "ClapTrap " << name << " repairs, causing " << amount << " hit points!" << std::endl;
}
