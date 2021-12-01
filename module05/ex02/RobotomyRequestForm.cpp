/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:48:55 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 15:34:37 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
int i = 2;
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) \
        , target("Default") {}
RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RobotomyRequestForm", 72, 45) \
        , target(Target) {}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) \
     : Form(obj.getName(), obj.getGrSign(), obj.getGrExec())
{target = obj.getTarget(); Signed = obj.getAnswer();}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{Signed = obj.getAnswer(); target = obj.getTarget(); return (*this);}
std::string	RobotomyRequestForm::getTarget() const {return (target);}
void RobotomyRequestForm::Action() const
{
    if (i % 2 == 0)
    {std::cout << GRN << getTarget() \
        << " has been robotomized successfully in 50% of the time!\n"; i++; return ;}
    else
    {std::cout << RED << getTarget() \
        << " hasn`t been robotomized!\n"; i++; return;}
}