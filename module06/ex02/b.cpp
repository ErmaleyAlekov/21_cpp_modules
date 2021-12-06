/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:46:12 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 11:00:07 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b.hpp"
B::B() :name("default") {}
B::B(B const &obj) {name = obj.name;}
B& B::operator= (B const &obj) {name = obj.name; return (*this);}
B::~B() {}