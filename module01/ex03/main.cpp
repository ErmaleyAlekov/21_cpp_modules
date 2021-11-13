/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:58:41 by uterese           #+#    #+#             */
/*   Updated: 2021/10/18 16:53:27 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	int Ahealth = 100;
	int Bhealth = 100;
	while (Ahealth > 0 && Bhealth > 0)
	{
		{ 
			Weapon club = Weapon("crude spiked club");
			HumanA bob("Bob", club);
			Bhealth = bob.attack(Bhealth);
			club.setType("some other type of club");
			Bhealth = bob.attack(Bhealth);
		}
		if (Bhealth <= 0)
			break ;
		std::cout << GRN"[Jim has a " << Bhealth << " health points]\n";
		{	
			Weapon club = Weapon("crude spiked club");
			HumanB jim("Jim");
			jim.setWeapon(club);
			Ahealth = jim.attack(Ahealth);
			club.setType("some other type of club");
			Ahealth = jim.attack(Ahealth);
		}
		if (Ahealth <= 0)
			break ;
		std::cout << GRN"[Bob has a " << Ahealth << " health points]\n";
	}
	if (Ahealth > Bhealth)
		std::cout << GRN "[BOB WIN]\n";
	else
		std::cout << GRN "[JIM WIN]\n";
	return 0;
}