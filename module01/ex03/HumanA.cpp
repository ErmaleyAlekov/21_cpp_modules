/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:57:51 by uterese           #+#    #+#             */
/*   Updated: 2021/10/18 14:38:21 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <random>

HumanA::HumanA(const std::string name, Weapon &weapon)
{
	Name = name;
	_weapon = &weapon;
}

int HumanA::attack(int health)
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist (0,10);
	int damage = dist(mt);
	health = health - damage;
	std::cout << GRN + Name << " attack the Jim with " << _weapon->getType() << std::endl;
	std::cout << RED + Name << " give the Jim " << damage << " damage!\n";
	return (health);
}