/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 12:18:33 by nchairun          #+#    #+#             */
/*   Updated: 2026/03/11 18:18:00 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap scav("ScavA");
    FragTrap frag("FragA");

    scav.attack("enemy");
    scav.guardGate();

    frag.attack("enemy");
    frag.highFivesGuys();

    return 0;
}