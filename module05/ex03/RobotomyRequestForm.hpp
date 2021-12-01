/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:39:01 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 03:28:43 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : virtual public Form
{
	private:
		std::string	target;
	public:
        RobotomyRequestForm();
		RobotomyRequestForm(std::string Target);
		RobotomyRequestForm(RobotomyRequestForm const &obj);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &obj);
		void Action() const;
		std::string	getTarget() const;
		static Form	* printingForm(std::string const & target);
};
#endif