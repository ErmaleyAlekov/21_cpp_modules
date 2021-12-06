/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:08:31 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 14:25:14 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctype.h>
#include <limits>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"

int main(int arg, char **argv)
{
    if (arg < 2 || arg > 2)
        return (1);
    char *a = argv[1];
    std::string str = a;
    int to_int = std::atof(a);
    double to_double = std::atof(a);
    if (to_double > __DBL_MAX__)
        to_double = std::numeric_limits<double>::infinity();
    float to_float = std::atof(a);
    char to_char = static_cast<char>(to_int);
    int len = str.length();
    if (len > 1 && to_int == 0)
    {
        std::cout << RED"Incorrect argument!\n";
        return (1);
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(5);
    if (len == 1 && isdigit(a[0]) == 0)
    {
        to_char = a[0];
        to_int = a[0];
        to_double = a[0];
        to_float = a[0];
        std::cout << GRN"Convert to int: " << to_int << std::endl;
        std::cout << GRN"Convert to double: " << to_double << std::endl;
        std::cout << GRN"Convert to float: " << to_float << "f" << std::endl;
        std::cout << GRN"Convert to char: '" << to_char << "'"<< std::endl;
        return (0);
    }
    if (to_int == -2147483648)
    {
        std::cout << GRN"Convert to int: impossible\n";
        std::cout << GRN"Convert to double: " << to_double << std::endl;
        std::cout << GRN"Convert to float: " << to_float << "f" << std::endl;
        std::cout << GRN"Convert to char: impossible"<< std::endl;
        return (0);
    }
    if (to_int <= 31 || to_int >= 127)
    {
        std::cout << GRN"Convert to int: " << to_int << std::endl;
        std::cout << GRN"Convert to double: " << to_double << std::endl;
        std::cout << GRN"Convert to float: " << to_float << "f" << std::endl;
        std::cout << GRN"Convert to char: Non displayable or impossible"<< std::endl;
        return (0);
    }
    std::cout << GRN"Convert to int: " << to_int << std::endl;
    std::cout << GRN"Convert to double: " << to_double << std::endl;
    std::cout << GRN"Convert to float: " << to_float << "f" << std::endl;
    std::cout << GRN"Convert to char: '" << to_char << "'"<< std::endl;
    return (0);
}