/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:59:24 by uterese           #+#    #+#             */
/*   Updated: 2021/10/18 14:30:54 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"

class Weapon
{
	private:
		std::string			_type;
	public:
		Weapon(const std::string type);
		const std::string	&getType(void);
		void				setType(const std::string newType);
};

#endif
