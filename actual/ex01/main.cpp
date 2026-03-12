/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 23:09:22 by nchairun          #+#    #+#             */
/*   Updated: 2026/03/12 16:39:36 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clapA("ClapA");
    ScavTrap scavB("ScavB");

    std::cout << "\n--------- ATTACK TEST ---------\n" << std::endl;
    clapA.attack("ScavB");
    scavB.takeDamage(3);

    scavB.attack("ClapA");
    clapA.takeDamage(20);

    std::cout << "\n--------- REPAIR TEST ---------\n" << std::endl;
    scavB.beRepaired(5);

    std::cout << "\n--------- GUARD MODE TEST ---------\n" << std::endl;
    scavB.guardGate();

    std::cout << "\n--------- NO ENERGY TEST ---------\n" << std::endl;
    for (int i = 0; i < 55; i++)
        scavB.attack("ClapA");

    std::cout << "\n--------- DEATH TEST ---------\n" << std::endl;
    scavB.takeDamage(200);
    scavB.attack("ClapA");
    scavB.beRepaired(5);

    std::cout << "\n-------------------------------\n" << std::endl;

    return 0;
}