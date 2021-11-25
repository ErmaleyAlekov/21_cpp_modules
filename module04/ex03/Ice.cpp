/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:57:46 by uterese           #+#    #+#             */
/*   Updated: 2021/11/25 13:45:36 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") 
{
}   

Ice::~Ice() 
{
}

Ice::Ice(Ice const &obj) : AMateria(obj.type)
{
}

Ice &Ice::operator=(Ice const &obj)
{
	type = obj.type;
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *new_ice = new Ice(*this);
	return (new_ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << GRN"* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}