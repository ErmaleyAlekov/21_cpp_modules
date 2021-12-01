/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 03:05:59 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 03:31:07 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
class Intern
{
	public:
		Intern();
		Intern(Intern const &obj);
		~Intern();
		Intern		&operator=(Intern const &obj);
		Form * makeForm(std::string const & form_name, std::string const & target);
		class FormNotFoundException: public std::exception
        {
		    public:
			    const char * what() const throw();
        };
};
#endif