/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:39:42 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 15:55:06 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern  intern;
	Bureaucrat john("John", 20);
	Form *forms[4];

	for (int i = 0; i < 4; i++) {forms[i] = 0;}
	try
	{
		forms[0] = intern.makeForm("robotomy request", "Bob");
		forms[1] = intern.makeForm("shrubbery creation", "Will");
		forms[2] = intern.makeForm("presidential pardon", "Alex");
		for (int i = 0; i < 4; i++)
		{if (forms[i] != 0)
			{john.signForm(*forms[i]);john.executeForm(*forms[i]);}}
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << std::endl;}
	for (int i = 0; i < 4; i++)
	{if (forms[i] != 0)
			delete forms[i];}
	return (0);
}
