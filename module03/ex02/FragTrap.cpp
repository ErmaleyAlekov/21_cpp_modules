/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:46:41 by uterese           #+#    #+#             */
/*   Updated: 2021/11/14 17:35:57 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("")
{
    std::cout << GRN"Default constructor called from FragTrap class" << std::endl;
    xp = 100;
    energy = 100;
    atata = 30;
    std::cout  << GRN << name << " have " << xp << " health point, " << energy \
        << " energy points, " << atata << " damage points." << std::endl;
}

FragTrap::FragTrap(std::string name1) : ClapTrap(name1)
{
    std::cout << GRN"Constructor called from FragTrap class" << std::endl;
    xp = 100;
    energy = 100;
    atata = 30;
   std::cout  << GRN << name << " have " << xp << " health point, " << energy \
        << " energy points, " << atata << " damage points." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << RED"Default destructor called from FragTrap class" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << GRN << name << " threw a positive high five!" << std::endl;
}