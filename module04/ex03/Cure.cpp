/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:37:57 by uterese           #+#    #+#             */
/*   Updated: 2021/11/25 13:45:43 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") 
{
}

Cure::~Cure() 
{
}

Cure::Cure(Cure const &obj) : AMateria(obj.type)
{
}

Cure &Cure::operator=(Cure const &obj)
{
	type = obj.type;
	return (*this);
}

AMateria *Cure::clone() const
{
	AMateria *new_cure = new Cure();
	return (new_cure);
}

void Cure::use(ICharacter& target)
{
    (void)target;
	std::cout << GRN"* heals " << target.getName() << "'s wounds *" << std::endl;
}