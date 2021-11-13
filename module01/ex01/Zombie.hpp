/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 00:46:00 by uterese           #+#    #+#             */
/*   Updated: 2021/10/18 02:15:42 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define GRN "\001\e[0;32m\002"
#define RED "\001\e[0;31m\002"

class Zombie
{
	private:
		std::string zname;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		Zombie &operator=(std::string name);
		void announce();
};

Zombie *zombieHorde(int N, std::string name);

#endif
