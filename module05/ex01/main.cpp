/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:39:42 by uterese           #+#    #+#             */
/*   Updated: 2021/11/30 16:06:30 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Form		forma("First Form", 1, 1);
	Form		formb("Second Form", 10, 10);
    std::cout << forma << std::endl;
	std::cout << formb << std::endl;
	Bureaucrat	a("Alex", 5);
	std::cout << GRN << a.getName() << " is trying to sign " << forma.getName() << "..." << std::endl;
	a.signForm(forma);
	std::cout << GRN << a.getName() << " is trying to sign " << formb.getName() << "..." << std::endl;
	a.signForm(formb);
    std::cout << forma << std::endl;
	std::cout << formb << std::endl;
	return (0);
}
