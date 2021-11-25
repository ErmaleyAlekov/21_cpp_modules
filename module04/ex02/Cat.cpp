/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:37:32 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 12:02:45 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat() : mozg(new Brain())
{
    type = "Cat";
    std::cout << GRN"Default constructor called from Cat class" << std::endl;
}

Cat::Cat (Cat const & obj) : mozg(new Brain())
{
    std::cout << GRN"Copy constructor called from Cat class" << std::endl;
	*this = obj;
}

Cat:: ~Cat()
{
    delete mozg;
    std::cout << RED"Destructor called form Cat class" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

Cat & Cat::operator=(Cat const & obj)
{
    if (this == &obj)
        return (*this);
    type = obj.type;
    return (*this);
}

Brain *Cat::getBrain() const
{
    return (mozg);
}

std::string Cat::getType() const
{
    return (type); 
}
