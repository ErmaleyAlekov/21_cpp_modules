/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:28:37 by uterese           #+#    #+#             */
/*   Updated: 2021/11/14 16:24:10 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Alex");
    ClapTrap b("Will");
    ScavTrap c("Sam");

    a.attack("Will");
    b.takeDamage(0);
    b.attack("Alex");
    a.takeDamage(0);
    a.beRepaired(0);
    b.beRepaired(0);
    c.attack("Alex");
    a.takeDamage(5);
    a.attack("Sam");
    c.takeDamage(0);
    c.beRepaired(0);
    c.guardGate();
    return(0);
}