/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:24:44 by nchairun          #+#    #+#             */
/*   Updated: 2026/03/12 02:03:36 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ************************************************************************** */
/*                            CONSTRUCTORS                                    */
/* ************************************************************************** */

FragTrap::FragTrap() : ClapTrap("default")
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "Default constructor called [FragTrap]" << std::endl;
}


FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "Parameterized constructor called [FragTrap]" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "Copy constructor called [FragTrap]" << std::endl;
}

/* ************************************************************************** */
/*                        ASSIGNMENT OPERATOR                                 */
/* ************************************************************************** */

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "Copy assignment operator called [FragTrap]" << std::endl;
    return *this;
}

/* ************************************************************************** */
/*                              DESTRUCTOR                                    */
/* ************************************************************************** */

FragTrap::~FragTrap()
{
    std::cout << "Destructor called [FragTrap]" << std::endl;
}

/* ************************************************************************** */
/*                              ACTIONS                                       */
/* ************************************************************************** */

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}