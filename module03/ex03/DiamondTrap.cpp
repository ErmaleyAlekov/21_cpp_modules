/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:28:55 by uterese           #+#    #+#             */
/*   Updated: 2021/11/15 12:51:44 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : Name("Default name")
{
    name = "Default_clap_name";
    xp = FragTrap::xp;
    energy = ScavTrap::energy;
    atata = FragTrap::atata;
    std::cout << GRN"Default constructor called from DiamondTrap class" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name1) : Name(name1)
{
    std::cout << GRN"Constructor called from DiamondTrap class" << std::endl;
    name = name1 + "_clap_name";
    xp = FragTrap::xp;
    energy = ScavTrap::energy;
    atata = FragTrap::atata;
    std::cout  << GRN << Name << " have " << xp << " health point, " << energy \
        << " energy points, " << atata << " damage points." << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << GRN"DiamondTrap name is " << Name \
        << " and ClapTrap name is " << name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED"Default destructor called from DiamondTrap class" << std::endl;
}