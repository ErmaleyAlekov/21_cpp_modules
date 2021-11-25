/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:58:01 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 10:19:45 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : mozg(new Brain())
{
    type = "Dog";
    std::cout << GRN"Default constructor called from Dog class" << std::endl;
}

Dog::Dog(Dog const &obj) : mozg(new Brain())
{
    std::cout << GRN"Copy constructor called from Dog class" << std::endl;
	*this = obj;
}

Dog::~Dog()
{
    delete (mozg);
    std::cout << RED"Destructor called from Dog class" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Auf" << std::endl;
}

Dog & Dog::operator= (Dog const & obj)
{
    if (this == &obj)
        return (*this);
    type = obj.type;
    return (*this);
}

Brain *Dog::getBrain() const
{
    return (mozg);
}