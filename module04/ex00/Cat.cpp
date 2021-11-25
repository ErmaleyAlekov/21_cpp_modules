/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:37:32 by uterese           #+#    #+#             */
/*   Updated: 2021/11/22 17:58:40 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat()
{
    type = "Cat";
    std::cout << GRN"Default constructor called from Cat class" << std::endl;
}

Cat::Cat (Cat const & obj)
{
    std::cout << GRN"Copy constructor called from Cat class" << std::endl;
	*this = obj;
}

Cat:: ~Cat()
{
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
