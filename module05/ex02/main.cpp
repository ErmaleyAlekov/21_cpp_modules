/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:39:42 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 15:50:00 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	alex("Alex", 150);
	ShrubberyCreationForm a("test");
	alex.signForm(a);
	alex.executeForm(a);
	a.Action();
	a.execute(alex);
	Bureaucrat john("John", 1);
	john.signForm(a);
	a.execute(john);
	RobotomyRequestForm rob("Alex");
	alex.signForm(rob);
	alex.executeForm(rob);
	john.executeForm(rob);
	john.signForm(rob);
	john.executeForm(rob);
	PresidentialPardonForm b;
	john.signForm(b);
	john.executeForm(b);
	PresidentialPardonForm c("Alex");
	john.signForm(c);
	john.executeForm(c);
	// rob.Action();
	// rob.Action();
	// rob.Action();
	// rob.Action();
	return (0);
}
