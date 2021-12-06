/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:46:27 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 10:59:08 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP
#include <iostream>
#include "base.hpp"
class B : public Base
{
    private:
	    std::string name;
    public:
	    B();
	    B(B const &obj);
	    B& operator= (B const &obj);
	    ~B();
};
#endif