/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 12:18:33 by nchairun          #+#    #+#             */
/*   Updated: 2026/03/12 16:45:54 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// int main()
// {
//     ClapTrap clapA("ClapA");
//     FragTrap fragB("FragB");

//     std::cout << "\n--------- ATTACK TEST ---------\n" << std::endl;
//     clapA.attack("FragB");
//     fragB.takeDamage(3);

//     fragB.attack("ClapA");
//     clapA.takeDamage(20);

//     std::cout << "\n--------- REPAIR TEST ---------\n" << std::endl;
//     fragB.beRepaired(5);

//     std::cout << "\n--------- HIGH FIVE TEST ---------\n" << std::endl;
//     fragB.highFivesGuys();

//     std::cout << "\n--------- NO ENERGY TEST ---------\n" << std::endl;
//     for (int i = 0; i < 105; i++)
//         fragB.attack("ClapA");

//     std::cout << "\n--------- DEATH TEST ---------\n" << std::endl;
//     fragB.takeDamage(200);
//     fragB.attack("ClapA");
//     fragB.beRepaired(5);

//     std::cout << "\n-------------------------------\n" << std::endl;
//     return 0;
// }