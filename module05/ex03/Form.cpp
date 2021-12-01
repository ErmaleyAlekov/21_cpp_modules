/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:07:29 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 15:52:46 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Form::Form() : name("default"), gr_signed(150), gr_exec(150)
{
    // std::cout << GRN"Default constructor called from Form class\n";
    Signed = false;
}
Form::Form(std::string Name, uint gr_sign, uint gr_exe) : name(Name) \
        , gr_signed(checkGr(gr_sign)), gr_exec(checkGr(gr_exe))
{
    // std::cout << GRN"Constructor called from Form class\n";
    Signed = false;
}
uint Form::checkGr(uint gr)
{
    if (gr < 1)
		throw Form::GradeTooHighException();
	else if (gr > 150)
		throw Form::GradeTooLowException();
	else
		return (gr);
}
void Form::getSigned(Bureaucrat const &obj)
{
    if (obj.getGrade() > gr_signed)
        throw Form::GradeTooLowException();
    else
        Signed = true;
}
std::ostream &operator<<(std::ostream &o, Form const &obj)
{
    if (obj.getAnswer() == false)
    {
	    std::cout << RED << obj.getName() << " is an unsigned!";
        return (o);
    }
    if (obj.getAnswer() == true)
    {
        std::cout << GRN << obj.getName() << " is signed!";
	    return (o);
    }
    return (o);
}
void Form::execute(Bureaucrat const &executor) const
{
	if (getGrExec() < executor.getGrade())
		std::cout << RED << executor.getName() \
             << " cannot execute this form because grade to low!\n";
	else if (getAnswer() == false)
		std::cout << RED "Form is not signed and cannot be executed!\n";
	else
		Action();
}
Form::Form(Form const &obj): name(obj.name), gr_signed(obj.gr_signed), \
        gr_exec(obj.gr_exec) {}
Form::~Form(){}
Form &Form::operator=(Form const &obj) {if (this == &obj) return (*this); \
     *this = obj; return (*this);}
std::string const Form::getName() const {return (name);}
bool Form::getAnswer() const {return (Signed);}
uint Form::getGrSign() const {return (gr_signed);}
uint Form::getGrExec() const {return (gr_exec);}
const char *Form::GradeTooLowException::what() const throw()
{return ("grade too low!");}
const char *Form::GradeTooHighException::what() const throw()
{return ("grade too high!");}
