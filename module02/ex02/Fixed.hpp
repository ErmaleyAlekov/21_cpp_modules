/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 10:15:41 by uterese           #+#    #+#             */
/*   Updated: 2021/11/10 03:56:04 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
#include <unistd.h>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & obj);
		Fixed(const int i);
		Fixed(const float j);
		~Fixed(void);

		Fixed &	operator=(Fixed const & obj);
		bool	operator>(Fixed const & obj);
		bool	operator<(Fixed const & obj);
		bool	operator>=(Fixed const & obj);
		bool	operator<=(Fixed const & obj);
		bool	operator==(Fixed const & obj);
		bool	operator!=(Fixed const & obj);

		Fixed	operator+(Fixed const & obj);
		Fixed	operator-(Fixed const & obj);
		Fixed	operator*(Fixed const & obj);
		Fixed	operator/(Fixed const & obj);

		Fixed & operator++();
		Fixed	operator++(int);
		Fixed & operator--();
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed const & min(Fixed const & a, Fixed const & b);
		static Fixed const & max(Fixed const & a, Fixed const & b);
		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed & max(Fixed & a, Fixed & b);
		std::string log;
	private:
		int fix;
		static const int bits;
};
std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif