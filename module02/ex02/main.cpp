/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 10:16:36 by uterese           #+#    #+#             */
/*   Updated: 2021/11/10 04:15:24 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	int out = dup(1);
	close(1);
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	dup2(out, 1);
	std::cout.clear();
	std::cout << GRN << a << std::endl;
	std::cout << GRN << ++a << std::endl;
	std::cout << GRN << a << std::endl;
	std::cout << GRN << a++ << std::endl;
	std::cout << GRN << a << std::endl;
	std::cout << GRN << b << std::endl;
	std::cout << GRN << Fixed::max(a, b) << std::endl;
	return 0;
}