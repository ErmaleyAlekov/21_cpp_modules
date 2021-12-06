/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:51:32 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 17:23:14 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename A, typename B> void iter(A a[], int size, B fn)
{
	for (int i = 0; i < size; i++)
		fn(a[i]);
}

template<typename A> A write_this(A c)
{
    std::cout << GRN << c << " ";
    return (c);
}

int main()
{
    int i[] = {1, 2, 3, 4, 5};
    double f[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string string[] = {"Hi", "my", "name", "is", "Alex"};
    iter(i, 5, write_this<int>);
    std::cout << std::endl;
    iter(f, 5, write_this<double>);
    std::cout << std::endl;
    iter(string, 5, write_this<std::string>);
    std::cout << std::endl;
    return (0);
}