/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:28:37 by uterese           #+#    #+#             */
/*   Updated: 2021/11/15 12:12:44 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap e("Ned");

    e.whoAmI();
    e.attack("Sam");
    e.beRepaired(10);
    e.guardGate();
    e.highFivesGuys();
    e.takeDamage(10);
    return(0);
}