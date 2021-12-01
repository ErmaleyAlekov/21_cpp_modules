/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:39:42 by uterese           #+#    #+#             */
/*   Updated: 2021/11/30 12:49:22 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat	a("Alex", 28); a.getUp();
        std::cout << a << std::endl; a.getDown();
        std::cout << a << std::endl;
    }
    catch (std::exception &e) {std::cout << RED"ERROR: " << e.what() << std::endl;}
    try {Bureaucrat  b("Will", 150); b.getDown();}
    catch (std::exception &e) {std::cout << RED"ERROR: " << e.what() << std::endl;}
    try {Bureaucrat  c("John", 1); c.getUp();}
    catch (std::exception &e) {std::cout << RED"ERROR: " << e.what() << std::endl;}
	return (0);
}
