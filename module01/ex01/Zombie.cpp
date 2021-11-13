/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 00:46:08 by uterese           #+#    #+#             */
/*   Updated: 2021/10/18 02:59:38 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::Zombie(std::string name)
{
	zname = name;
}

Zombie& Zombie::operator=(std::string name)
{
	zname = name;
	return *this;
}

Zombie::~Zombie()
{
	std::cout << zname + ":" << RED" [destroyed]" << GRN"\n";
}

void Zombie::announce()
{
	std::cout << GRN << zname << ": [BraiiiiiiinnnzzzZ...]" << std::endl;
}
