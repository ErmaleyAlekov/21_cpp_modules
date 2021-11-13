/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:00:48 by uterese           #+#    #+#             */
/*   Updated: 2021/11/10 19:43:55 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    // std::cout << GRN"Default constructor called from point class" << std::endl;
}

Point::Point(float const x1, float const y1) : x(x1), y(y1)
{
    xp = x.toFloat();
    yp = y.toFloat();
}

Point::Point(Point const &obj) : xp(obj.xp), yp(obj.yp)
{
    // std::cout << GRN"Copy constructor called from point class" << std::endl;
}

Point::~Point()
{
    // std::cout << RED"Destructor called from point class" << std::endl;
}

Point & Point::operator=(Point const & obj)
{
    // std::cout << GRN"Assignation operator called from point class" << std::endl;
    xp = obj.xp;
    yp = obj.yp;
    return(*this);
}