/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:58:23 by uterese           #+#    #+#             */
/*   Updated: 2021/10/18 14:10:38 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string Name;
		Weapon		*_weapon;
	public:
		HumanB(const std::string name);
		int		attack(int health);
		void	setWeapon(Weapon &weapon);
};

#endif
