/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:36:19 by uterese           #+#    #+#             */
/*   Updated: 2021/10/18 02:45:31 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define GRN "\001\e[0;32m\002"

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << GRN"Address of the string: [" << &str << "]\n";
	std::cout << GRN"Address of the stringPTR: [" << stringPTR << "]\n";
	std::cout << GRN"Address of the stringREF: [" << &stringREF << "]\n";
	std::cout << GRN"Display string using pointer: [" << *stringPTR << "]\n";
	std::cout << GRN"Display string using reference: [" << stringREF << "]\n";

	return 0;
}