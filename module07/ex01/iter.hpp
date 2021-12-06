/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:45:29 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 13:14:11 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"
template<typename A> A write_this(A c); 
template<typename A, typename B> void iter(A a[], int size, B fn);
#endif