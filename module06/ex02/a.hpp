/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:45:41 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 10:54:34 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP
#include <iostream>
#include "base.hpp"
class A : public Base
{
    private:
	    std::string name;
    public:
	    A();
	    A(A const &obj);
	    A& operator= (A const &obj);
	    ~A();
};
#endif