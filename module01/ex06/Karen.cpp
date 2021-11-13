/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:55:19 by uterese           #+#    #+#             */
/*   Updated: 2021/10/20 13:42:15 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	lvl[0] = "DEBUG";
	lvl[1] = "ERROR";
	lvl[2] = "WARNING";
	lvl[3] = "INFO";
	lvl[4] = "EXIT";
}

void    Karen::info ()
{
    std::cout << GRN"[INFO]" << std::endl;
	std::cout << GRN"I cannot believe adding extrabacon cost more money." << std::endl;
    std::cout <<  GRN"You don’t put enough! If you did I would not have to askfor it!" << WHT << std::endl;
}

void    Karen::debug ()
{
    std::cout << GRN"[DEBUG]" << std::endl;
	std::cout << GRN"I love to get extra bacon for my" << std::endl;
    std::cout << GRN"7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << WHT << std::endl;
}

void    Karen::warning ()
{
    std::cout << GRN"[WARNING]" << std::endl;
	std::cout << GRN"I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << GRN"I’ve beencoming here for years and you just started working here last month." << WHT << std::endl;
}

void    Karen::error()
{
    std::cout << GRN"[ERROR]" << std::endl;
	std::cout << GRN"This is unacceptable, I want to speak to the manager now."<< WHT << std::endl;
}

void    Karen::exit()
{
    
}

void Karen::complain(std::string level)
{
    void (Karen::*lvls[5])() = {&Karen::debug, &Karen::error, &Karen::warning, &Karen::info, &Karen::exit};
    int lvl = find_command(level);

    switch (lvl)
	{
		case 0:
			(this->*lvls[0])();
			break ;
		case 1:
			(this->*lvls[0])();
			(this->*lvls[1])();
			break ;
		case 2:
			(this->*lvls[0])();
			(this->*lvls[1])();
			(this->*lvls[2])();
			break ;
		case 3:
			(this->*lvls[0])();
			(this->*lvls[1])();
			(this->*lvls[2])();
			(this->*lvls[3])();
			break;
		case 4:
			(this->*lvls[4])();
			break ;
	}
}