/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:26:22 by uterese           #+#    #+#             */
/*   Updated: 2021/10/12 12:44:50 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

int main(int arg, char **argv)
{
    int i = 1;

    if (arg < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    while (i < arg)
    {
        std::string str = argv[i];
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
        std::cout << str + " ";
        i++;
    }
    std::cout << std::endl;
    return (0);
}