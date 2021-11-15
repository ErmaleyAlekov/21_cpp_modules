/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:27:32 by uterese           #+#    #+#             */
/*   Updated: 2021/11/14 22:32:49 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : xp(10), energy(10), atata(0)
{
    std::cout << GRN"Default constructor called from ClapTrap class" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), xp(10), energy(10), atata(0)
{
    std::cout << GRN"Constructor called from ClapTrap class" << std::endl;
    std::cout  << GRN << name << " have " << xp << " health point, " << energy \
        << " energy points, " << atata << " damage points." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED"Default destructor called from ClapTrap class" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << GRN << name << " attack " << target << ", causing " << atata \
         << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    xp -= amount;
    std::cout << GRN << name << " take a damage and have " << xp \
        << " health points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    xp += amount;
    std::cout << GRN << name << " will be repaired and have " << xp \
        << " health points" << std::endl;
}