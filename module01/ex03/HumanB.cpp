/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:58:14 by uterese           #+#    #+#             */
/*   Updated: 2021/10/18 14:38:58 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <random>

HumanB::HumanB(const std::string name)
{
	Name = name;
}

int HumanB::attack(int health)
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist (0,10);
	int damage = dist(mt);
	health = health - damage;
	std::cout << GRN + Name << " attack the Bob with " << _weapon->getType() << std::endl;
	std::cout << RED + Name << " give the Bob " << damage << " damage!\n";
	return (health);
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}