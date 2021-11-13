/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:46:52 by uterese           #+#    #+#             */
/*   Updated: 2021/11/10 19:45:00 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : fix(0)
{
	// std::cout << GRN"Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & obj)
{
	std::cout << GRN"Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int i)
{
	std::cout << GRN"Int constructor called" << std::endl;
	fix = (i << bits);
}

Fixed::Fixed(const float j)
{
	// std::cout << GRN"Float constructor called" << std::endl;
	fix = (roundf(j * (1 << bits)));
}

Fixed::~Fixed()
{
	// std::cout << RED"Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & obj)
{
	std::cout << GRN"Assignation operator called" << std::endl;
	if (this != &obj)
		fix = obj.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)fix / (float)(1 << bits));
}

int		Fixed::toInt(void) const
{
	return (fix >> bits);
}

int		Fixed::getRawBits() const
{
	return (fix);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << GRN"setRawBits member function called" << std::endl;
	fix = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}

bool	Fixed::operator>(Fixed const & rhs)
{
	if (fix > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const & rhs)
{
	if (fix < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const & rhs)
{
	if (fix >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const & rhs)
{
	if (fix <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const & rhs)
{
	if (fix == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const & rhs)
{
	if (fix != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	Fixed obj(*this);

	obj.setRawBits(getRawBits() + rhs.getRawBits());
	return (obj);
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	Fixed obj(*this);

	obj.setRawBits(getRawBits() - rhs.getRawBits());
	return (obj);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	Fixed obj(*this);

	obj.setRawBits((getRawBits() * rhs.getRawBits()) / (1 << bits));
	return (obj);
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	Fixed obj(*this);

	obj.setRawBits((getRawBits() * (1 << bits)) / rhs.getRawBits());
	return (obj);
}

Fixed & Fixed::operator++()
{
	fix++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed obj = *this;
	++*this;
	return (obj);
}

Fixed & Fixed::operator--()
{
	fix--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed obj = *this;
	--*this;
	return (obj);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.toFloat() < b.toFloat())
		return (b);
	return (a);
}

Fixed const & min(Fixed const & a, Fixed const & b)
{
	return (Fixed::min(a, b));
}

Fixed const & max(Fixed const & a, Fixed const & b)
{
	return (Fixed::max(a, b));
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a.toFloat() < b.toFloat())
		return (b);
	return (a);
}

Fixed & min(Fixed & a, Fixed & b)
{
	return (Fixed::min(a, b));
}

Fixed & max(Fixed & a, Fixed & b)
{
	return (Fixed::max(a, b));
}