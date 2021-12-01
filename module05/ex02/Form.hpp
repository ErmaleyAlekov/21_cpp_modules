/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:45:56 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 03:48:26 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <stdexcept>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"
class Bureaucrat;
class Form
{
    protected:
        std::string const name;
        bool              Signed;
        uint const        gr_signed;
        uint const        gr_exec;
    public:
        Form();
        Form(Form const &obj);
        Form(std::string Name, uint gr_sign, uint gr_exec);
        ~Form();
        Form &operator=(Form const &obj);
        std::string const getName() const;
        bool getAnswer() const;
        uint checkGr(uint gr);
        uint getGrSign() const;
        uint getGrExec() const;
        void execute(Bureaucrat const &executor) const;
        virtual void Action() const = 0;
        void getSigned(Bureaucrat const &obj);
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
std::ostream &operator<<(std::ostream &o, Form const &obj);
#endif