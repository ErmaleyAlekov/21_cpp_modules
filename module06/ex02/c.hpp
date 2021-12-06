/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:47:10 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 11:01:02 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP
#include <iostream>
#include "base.hpp"
class C : public Base
{
    private:
	    std::string name;
    public:
	    C();
	    C(C const &obj);
	    C& operator= (C const &obj);
	    ~C();
};
#endif