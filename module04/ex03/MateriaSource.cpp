/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:52:23 by uterese           #+#    #+#             */
/*   Updated: 2021/11/25 13:39:39 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
		mat[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
    for (int i = 0; i < 4; i++)
		mat[i] = obj.mat[i]->clone();
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
	{
		if (mat[i] != nullptr)
			delete mat[i];
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & obj)
{
    for (int i = 0; i < 4; i++)
        mat[i] = obj.mat[i]->clone();
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
	{

		if (mat[i] != nullptr && mat[i]->getType() == type)
			return (mat[i]->clone());
	}
	return (nullptr);
}