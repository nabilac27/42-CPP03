/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 23:09:22 by nchairun          #+#    #+#             */
/*   Updated: 2026/03/12 02:10:03 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ClapA("ClapA");
    ClapTrap ClapB("ClapB");
    ClapTrap ClapC("ClapC");

    ClapA.attack("target");
    ClapB.takeDamage(5);
    ClapC.beRepaired(3);

    return (0);
}