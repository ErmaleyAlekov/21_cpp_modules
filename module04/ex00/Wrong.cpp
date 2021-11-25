/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:15:13 by uterese           #+#    #+#             */
/*   Updated: 2021/11/22 18:21:19 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

Wrong::Wrong() : type("default")
{
    std::cout << GRN"Default constructor called from Wrong class" << std::endl;
}

Wrong::Wrong(Wrong const & obj)
{
    std::cout << GRN"Copy constructor called from Wrong class" << std::endl;
	*this = obj;
}

Wrong::~Wrong()
{
    std::cout << RED"Destructor called from Wrong class" << std::endl;
}

std::string Wrong::getType() const
{
    return (type); 
}

void Wrong::makeSound() const
{
    std::cout << GRN"This " << type << " make sound!" << std::endl;
}

Wrong & Wrong::operator=(Wrong const & obj)
{
    if (this == &obj)
        return (*this);
    type = obj.type;
    return (*this);
}
