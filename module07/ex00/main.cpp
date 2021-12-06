/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:10:42 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 17:22:19 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

template<typename T> void swap(T& a, T& b)
{
	T buf;
	buf = a;
	a = b;
	b = buf;
}

template<typename T> T min(T a, T b)
{
    if (a < b)
        return (a);
    else if (a > b)
        return (b);
    else
    {
        std::cout << RED"haven`t min value! ";
        return (a);
    }
}

template<typename T> T max(T a, T b)
{
    if (a < b)
        return (b);
    else if (a > b)
        return (a);
    else
    {
        std::cout << RED"haven`t max value! ";
        return (a);
    }
}

int	main(void)
{
	int a = 3;
	int b = 3;
	::swap(a, b);
	std::cout << GRN"a = " << a << ", b = " << b << std::endl;
	std::cout << GRN"min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << GRN"max(a, b) = " << ::max( a, b ) << std::endl;	
	std::string c = "string1";
	std::string d = "str2";
	::swap(c, d);
	std::cout << GRN"c = " << c << ", d = " << d << std::endl;
	std::cout << GRN"min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << GRN"max(c, d) = " << ::max( c, d ) << std::endl;
    double i = 5;
    double f = 7;
    ::swap(i, f);
    std::cout << GRN"i = " << i << ", f = " << f << std::endl;
	std::cout << GRN"min(i, f) = " << ::min(i, f) << std::endl;
	std::cout << GRN"max(i, f) = " << ::max(i, f) << std::endl;
	return (0);
}