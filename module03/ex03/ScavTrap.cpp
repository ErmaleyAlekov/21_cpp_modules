/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:47:46 by uterese           #+#    #+#             */
/*   Updated: 2021/11/14 22:32:02 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    xp = 100;
    energy = 50;
    atata = 20;
    std::cout << GRN"Default constructor called from ScavTrap class" << std::endl;
}

ScavTrap::ScavTrap(std::string name1) : ClapTrap(name1)
{
    std::cout << GRN"Constructor called from ScavTrap class" << std::endl;
    xp = 100;
    energy = 50;
    atata = 20;
    std::cout  << GRN << name << " have " << xp << " health point, " << energy \
        << " energy points, " << atata << " damage points." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED"Default destructor called from ScavTrap class" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << name << GRN" have enterred in Gate keeper mode" << std::endl;
}