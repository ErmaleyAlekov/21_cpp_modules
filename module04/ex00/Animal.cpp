/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:32:06 by uterese           #+#    #+#             */
/*   Updated: 2021/11/22 17:50:49 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("default")
{
    std::cout << GRN"Default constructor called from Animal class" << std::endl;
}

Animal::Animal(Animal const & obj)
{
    std::cout << GRN"Copy constructor called from Animal class" << std::endl;
	*this = obj;
}

Animal::~Animal()
{
    std::cout << RED"Destructor called from Animal class" << std::endl;
}

std::string Animal::getType() const
{
    return (type); 
}

void Animal::makeSound() const
{
    std::cout << GRN"This " << type << " make sound!" << std::endl;
}

Animal & Animal::operator=(Animal const & obj)
{
    if (this == &obj)
        return (*this);
    type = obj.type;
    return (*this);
}