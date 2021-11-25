/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:24:28 by uterese           #+#    #+#             */
/*   Updated: 2021/11/22 18:28:33 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat:: WrongCat()
{
    type = "Cat";
    std::cout << GRN"Default constructor called from Cat class" << std::endl;
}

WrongCat::WrongCat (WrongCat const & obj)
{
    std::cout << GRN"Copy constructor called from Cat class" << std::endl;
	*this = obj;
}

WrongCat:: ~WrongCat()
{
    std::cout << RED"Destructor called form Cat class" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & obj)
{
    if (this == &obj)
        return (*this);
    type = obj.type;
    return (*this);
}