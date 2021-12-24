/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:31:39 by uterese           #+#    #+#             */
/*   Updated: 2021/12/09 10:48:47 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"
template <typename T, typename TCon>
typename TCon::const_iterator easyFind(const TCon &con, T find)
{return std::find(con.begin(), con.end(), find);}
#endif
