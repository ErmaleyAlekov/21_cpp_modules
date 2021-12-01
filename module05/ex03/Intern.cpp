/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 03:10:53 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 03:26:32 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{}

Intern::Intern(Intern const & other)
{
	*this = other;
}

Intern::~Intern(void)
{}

Intern & Intern::operator = (Intern const & other)
{
	if (this == &other)
		return *this;
	return *this;
}
Form * Intern::makeForm(std::string const & form_name, std::string const & target)
{
	Form *(*printing_form[3])(std::string const & t) = {
		&PresidentialPardonForm::printingForm,
		&ShrubberyCreationForm::printingForm,
		&RobotomyRequestForm::printingForm
	};
	std::string types_form[3] = {
		"presidential pardon",
		"shrubbery creation",
		"robotomy request"
	};
	for (int i = 0; i < 3; i++)
	{
		if (!form_name.compare(types_form[i]))
		{
			std::cout << "The intern creates " << form_name << "." << std::endl;
			return printing_form[i](target);
		}
	}
	throw (FormNotFoundException());
}
const char * Intern::FormNotFoundException::what() const throw()
{
	return ("the form was not found");
}