/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:00:28 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 14:28:36 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>
#define GRN "\001\e[0;32m\002"
struct Data 
{
    std::string user;
    std::string pass;
    int        access;
};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif