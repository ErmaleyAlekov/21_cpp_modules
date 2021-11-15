/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:28:37 by uterese           #+#    #+#             */
/*   Updated: 2021/11/14 11:43:38 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Alex");
    ClapTrap b("Will");

    a.attack("Will");
    b.takeDamage(0);
    b.attack("Alex");
    a.takeDamage(0);
    a.beRepaired(0);
    b.beRepaired(0);
    return(0);
}