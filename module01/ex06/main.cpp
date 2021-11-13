/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:55:15 by uterese           #+#    #+#             */
/*   Updated: 2021/10/19 14:43:24 by uterese          ###   ########.fr       */
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

int main(int arg, char **argv)
{
	std::string input;
	Karen karen;

	if (arg == 1)
	{
		while (!(input == "EXIT"))
		{
			std::cout << GRN"Use [DEBUG] [ERROR] [WARNING] [INFO] [EXIT] command."<< WHT << std::endl;
			std::getline(std::cin, input);
			if (!std::cin)
				exit(1);
			karen.complain(input);
		}
	}
	else
	{
		std::string input = argv[1];
		karen.complain(input);
	}
	return (0);   
}