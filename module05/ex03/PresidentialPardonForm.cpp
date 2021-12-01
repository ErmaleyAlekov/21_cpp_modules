/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 00:35:05 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 03:27:33 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) \
        , target("Target") {}
PresidentialPardonForm::PresidentialPardonForm(std::string Target) : Form("PresidentialPardonForm", 25, 5) \
        , target(Target) {}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) \
         : Form(obj.getName(), obj.getGrSign(), obj.getGrExec())
{target = obj.getTarget(); Signed = obj.getAnswer();}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{Signed = obj.getAnswer(); target = obj.getTarget(); return (*this);}
std::string	PresidentialPardonForm::getTarget() const
{return (target);}
void PresidentialPardonForm::Action() const
{
	std::cout << GRN << getTarget() << " has been pardoned by Zaphod Beeblebrox !\n";
}
Form *	PresidentialPardonForm::printingForm(std::string const & target)
{
	return new PresidentialPardonForm(target);
}
