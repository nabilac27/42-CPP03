/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 13:27:13 by nchairun          #+#    #+#             */
/*   Updated: 2026/03/09 13:28:00 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

// can’t do anything if it has no hit points or energy points left
//  ClapTrap instances should not interact directly with one another,  and the parameters will not refer to another instance of ClapTrap

/* 
    Attack costs 1 energy
    Repair costs 1 energy
    If hitPoints == 0 → ClapTrap can't do anything
    If energyPoints == 0 → ClapTrap can't act
    takeDamage() just reduces HP
*/

class ClapTrap
{
    private:
        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;

    public:
        ClapTrap();
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap &other);
        ~ClapTrap();

    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif