/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:13:50 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 12:34:51 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"
template<typename T> void swap( T& a, T& b );
template<typename T> T min( T a, T b);
template<typename T> T max( T a, T b);
#endif