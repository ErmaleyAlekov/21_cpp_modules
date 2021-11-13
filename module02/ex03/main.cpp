/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:49:45 by uterese           #+#    #+#             */
/*   Updated: 2021/11/13 11:06:10 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static void getval(float *x)
{
    std::string input;
    std::getline(std::cin, input);
    if (!std::cin)
        exit(1);
    const char *buff = input.data();
    *x = std::atof(buff);
    if (!*x)
        std::cout << RED"Wrong or default value! Default value = 0" << GRN << std::endl;
}

static void take_x_y(float *x, float *y)
{
    std::cout << GRN"x = ";
    getval(x);
    std::cout << GRN"y = ";
    getval(y);
}

static void initialize()
{
    float x = 0;
    float y = 0;
    
    std::cout << GRN"Write top of first angle in float or int value" << std::endl;
    take_x_y(&x, &y);
    Point const a(x, y);
    std::cout << GRN"Write top of second angle in float or int value" << std::endl;
    take_x_y(&x, &y);
    Point const b(x, y);
    std::cout << GRN"Write top of third angle in float or int value" << std::endl;
    take_x_y(&x, &y);
    Point const c(x, y);
    std::cout << GRN"Write point in float or int value" << std::endl;
    take_x_y(&x, &y);
    Point const point(x, y);
    bool answer = bsp(a, b, c, point);
    if(answer == true)
        std::cout << GRN"[Answer is True]" << std::endl;
    else
        std::cout << RED"[Answer is False]" << std::endl;
}

int main()
{
    std::string input;

    while (input != "EXIT")
    {
        std::cout << GRN"USE START or EXIT command" << std::endl;
        std::getline(std::cin, input);
        if (!std::cin)
            exit(1);
        if (input == "START")
        {
            initialize();
            continue ;
        }
        else if (input != "EXIT")
        {
            std::cout << RED"Error: wrong command" << std::endl;
            continue ;
        }
    }
    return (0);
}