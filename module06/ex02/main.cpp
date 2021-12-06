/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:47:27 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 17:21:13 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "a.hpp"
#include "b.hpp"
#include "c.hpp"
#include <iostream>
#include <random>
#define GRN "\001\e[0;32m\002"

void identify(Base *p)
{
	if (p == 0)
		return ;
	if (dynamic_cast<A*>(p) != 0)
		std::cout << GRN"A class; ";
	else if (dynamic_cast<B*>(p) != 0)
		std::cout << GRN"B class; ";
	else if (dynamic_cast<C*>(p) != 0)
		std::cout << GRN"C class; ";	
}

void identify(Base &p)
{
	if (dynamic_cast<A*>(&p) != 0)
		std::cout << GRN"A class; ";
	else if (dynamic_cast<B*>(&p) != 0)
		std::cout << GRN"B class; ";
	else if (dynamic_cast<C*>(&p) != 0)
		std::cout << GRN"C class; ";	
}

Base *generate()
{
    std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist (0,2);
    int rand = dist(mt);
    if (rand == 0)
        return (new A);
    else if (rand == 1)
        return (new B);
    else
        return (new C);
}

int main()
{
    int i = 0;
    while (i++ < 10)
    {
        Base *p = generate();
        identify(p);
        std::cout << std::endl;
        identify(*p);
    }
    std::cout << std::endl;
    return (0);
}