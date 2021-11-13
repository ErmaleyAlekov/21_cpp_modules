/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 10:17:00 by uterese           #+#    #+#             */
/*   Updated: 2021/11/10 02:11:49 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : fix(0)
{
	std::cout << GRN"Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & obj)
{
	std::cout << GRN"Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed()
{
	std::cout << RED"Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & obj)
{
	std::cout << GRN"Assignation operator called" << std::endl;
	if (this != &obj)
		fix = obj.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << GRN"getRawBits member function called" << std::endl;
	return (fix);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << GRN"setRawBits member function called" << std::endl;
	fix = raw;
}
