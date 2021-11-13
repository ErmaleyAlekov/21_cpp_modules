/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:55:15 by uterese           #+#    #+#             */
/*   Updated: 2021/10/19 11:50:43 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int     find_command(std::string input)
{   
    Karen point;
    int i = 0;
	while (i < 5)
	{
		if (point.lvl[i] == input)
			return (i);
        i++;
	}
	std::cout << RED"[Probably complaining about insignificant problems]" << std::endl;
    return (4);
}

int		main()
{
	Karen karen;
	karen.complain("WARNING");
	karen.complain("INFO");
	karen.complain("ERROR");
	karen.complain("DEBUG");
	return (0);   
}