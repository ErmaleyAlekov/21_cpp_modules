/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:43:48 by uterese           #+#    #+#             */
/*   Updated: 2021/12/09 14:26:40 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T, typename TCon> bool easyfind(TCon con, T find)
{
    int i = 0;
    while (con)
    {
        if (!con[i])
            return (false);
        if (con[i] == find)
            return (true);
        i++;
    }
    return (false);
}

int main()
{
    // int i[] = {10, 2, 3, 4, 5};
    // char b[] = {'a', 'b', 'c', 'd', 'e'};
    // bool a = easyfind(i, 10);
    // bool b1 = easyfind(b, 'z');
    // bool c = easyfind(b, 'c');
    // if (a == true) std::cout << "True\n";
    // if (b1 == true) std::cout << "True\n";
    // if (c == true) std::cout << "True\n";
    // if (a == false) std::cout << "False\n";
    // if (b1 == false) std::cout << "False\n";
    // if (c == false) std::cout << "False\n";
	std::vector<int> a;
	for (int i = 1; i < 10; i++)
		a.push_back(i);
    int find1 = 3;
    int find2 = 50;
 
    std::vector<int>::const_iterator result1 = easyFind(a, find1);
    std::vector<int>::const_iterator result2 = easyFind(a, find2);
 
    (result1 != a.end())
        ? std::cout << GRN"v contains " << find1 << '\n'
        : std::cout << RED"v does not contain " << find1 << '\n';
 
    (result2 != a.end())
        ? std::cout << GRN"v contains " << find2 << '\n'
        : std::cout << RED"v does not contain " << find2 << '\n';
	return (0);
}

// https://en.cppreference.com/w/cpp/algorithm/find