/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:11:40 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 03:52:06 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
    // std::cout << GRN"Default constructor called from Bureaucrat class" << std::endl;
}

Bureaucrat::Bureaucrat(std::string Name, uint gr) : name(Name)
{
    // std::cout << GRN"Constructor called from Bureaucrat class" << std::endl;
	if (gr < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (gr > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = gr;
    std::cout << GRN"Bureaucrat " << name << " is created with grade " \
            << grade <<"!\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
    // std::cout << GRN"Copy constructor called from Bureaucrat class" << std::endl;
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << RED"Destructor called from Bureaucrat class" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	grade = obj.grade;
	return (*this);
}

std::string	Bureaucrat::getName()
{
	return (name);
}

uint Bureaucrat::getGrade()
{
	return (grade);
}

void Bureaucrat::getUp()
{
	if (getGrade() == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade--;
        std::cout << GRN"This bureaucrat " << name << ", will up the grade!\n";
}

void Bureaucrat::getDown()
{
	if (getGrade() == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade++;
        std::cout << RED"This bureaucrat " << name << ", will down the grade!\n";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &obj)
{
	std::cout << GRN << obj.getName() << ", Bureaucrat grade = " << obj.getGrade();
	return (o);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}