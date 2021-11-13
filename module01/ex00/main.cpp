/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 00:46:33 by uterese           #+#    #+#             */
/*   Updated: 2021/10/22 11:30:49 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int arg, char **argv)
{
	int i = 0;
	if (arg < 2)
		while (i++ < 5)
			delete newZombie("Zombie");
	else
	{
		int j = std::atoi(argv[1]);
		if (j == 0)
			j = 5;
		while (i++ < j)
			 delete newZombie("Zombie");
	}
	return (0);
}