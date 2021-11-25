/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:18:57 by uterese           #+#    #+#             */
/*   Updated: 2021/11/25 13:43:19 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character()
{
    Name = "default";
    for (int i = 0; i < 4; i++)
		mat[i] = nullptr;
}

Character::Character(std::string const name)
{
    Name = name;
    for (int i = 0; i < 4; i++)
		mat[i] = nullptr;
}

Character::Character(Character const &obj)
{
    for (int i = 0; i < 4; i++)
		mat[i] = obj.mat[i];
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
	{
		if (mat[i] != nullptr)
			delete mat[i];
	}
}

Character & Character::operator=(Character const & obj)
{
    if (this == &obj)
        return (*this);
    Name = obj.Name;
    for (int i = 0; i < 4; i++)
		mat[i] = obj.mat[i]->clone();
    return (*this);
}

std::string const & Character::getName() const
{
    return (Name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
	{
		if (mat[i] == nullptr)
		{
			mat[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
		mat[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3 && mat[idx] != nullptr)
		mat[idx]->use(target);
}