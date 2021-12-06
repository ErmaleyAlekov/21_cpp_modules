/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:45:06 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 10:57:35 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "a.hpp"
A::A() :name("default") {}
A::A(A const &obj) {name = obj.name;}
A& A::operator= (A const &obj) {name = obj.name; return (*this);}
A::~A() {}