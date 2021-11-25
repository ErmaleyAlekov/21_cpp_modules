/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:32:06 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 11:56:54 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("default")
{
    std::cout << GRN"Default constructor called from Animal class" << std::endl;
}

Animal::~Animal()
{
    std::cout << RED"Destructor called from Animal class" << std::endl;
}

Animal & Animal::operator=(Animal const & obj)
{
    if (this == &obj)
        return (*this);
    type = obj.type;
    return (*this);
}