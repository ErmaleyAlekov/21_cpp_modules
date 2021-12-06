/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:46:58 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 11:52:03 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c.hpp"
C::C() :name("default") {}
C::C(C const &obj) {name = obj.name;}
C& C::operator= (C const &obj) {name = obj.name; return (*this);}
C::~C() {}
Base::~Base() {}