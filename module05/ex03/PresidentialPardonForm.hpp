/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 00:46:58 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 03:28:05 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : virtual public Form
{
	private:
		std::string	target;
	public:
        PresidentialPardonForm();
		PresidentialPardonForm(std::string Target);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &obj);
		void Action() const;
		std::string	getTarget() const;
		static Form	* printingForm(std::string const & target);
};
#endif