/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:59:01 by uterese           #+#    #+#             */
/*   Updated: 2021/10/18 12:19:01 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{
	_type = type;
}

const std::string &Weapon::getType()
{
	return _type;
}

void Weapon::setType(const std::string newType)
{
	this->_type = newType;
}