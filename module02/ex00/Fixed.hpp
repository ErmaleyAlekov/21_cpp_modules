/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 10:15:41 by uterese           #+#    #+#             */
/*   Updated: 2021/11/10 01:48:53 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <unistd.h>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & obj);
		~Fixed(void);

		Fixed &	operator=(Fixed const & obj);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int fix;
		static const int bits;
};

#endif