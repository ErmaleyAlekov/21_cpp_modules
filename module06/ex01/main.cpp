/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:09:48 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 17:20:43 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data user1 = {.user = "Alex", .pass = "123", .access = 100};

    std::cout <<GRN<< user1.user <<" "<< user1.pass<<" "<< user1.access << std::endl;
    uintptr_t ptr = serialize(&user1);
    Data *user2 = deserialize(ptr);
    std::cout << GRN"Pointer: ";
    std::cout << user2->user <<" "<< user2->pass<<" "<< user2->access << std::endl;
}