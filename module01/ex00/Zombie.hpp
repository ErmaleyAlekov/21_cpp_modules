/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 00:46:00 by uterese           #+#    #+#             */
/*   Updated: 2021/10/22 11:15:54 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <random>

#define GRN "\001\e[0;32m\002"
#define RED "\001\e[0;31m\002"

class Zombie
{
	private:
		std::string zname;

	public:
		Zombie(std::string name);
		~Zombie();
		void announce();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
