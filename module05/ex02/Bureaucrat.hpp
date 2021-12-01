/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:36:25 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 03:49:08 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"
class Form;
class Bureaucrat
{
    private:
		std::string	const	name;
		uint				grade;
    public:
		Bureaucrat();
        Bureaucrat(std::string Name, uint gr);
		Bureaucrat(Bureaucrat const &obj);
		~Bureaucrat();
        Bureaucrat &operator=(Bureaucrat const &obj);
        std::string	const getName() const;
		uint getGrade() const;
        void	   executeForm(Form const &form);
		void	   getUp();
		void	   getDown();
        void	   signForm(Form &obj) const;
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
		{
			public:
                virtual const char *what() const throw();
		};
};
std::ostream &operator<<(std::ostream &o, Bureaucrat &obj);
#endif