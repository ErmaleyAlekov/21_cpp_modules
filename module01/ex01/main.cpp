/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 00:46:33 by uterese           #+#    #+#             */
/*   Updated: 2021/10/22 11:22:20 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int arg, char **argv)
{
	Zombie *horde;
	int i = 0;

	if (arg < 2)
	{
		horde = zombieHorde(5, "Zombie");
		while (i < 5)
		{
			horde[i].announce();
			i++;
		}
		delete[] horde;
	}
	else
	{
		int j = std::atoi(argv[1]);
		if (j == 0)
			j = 5;
		horde = zombieHorde(j, "Zombie");
		while (i < j)
		{
			horde[i].announce();
			i++;
		}
		delete[] horde;
	}
	return (0);
}