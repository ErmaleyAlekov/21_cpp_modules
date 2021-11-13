/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:51:12 by uterese           #+#    #+#             */
/*   Updated: 2021/11/12 22:55:46 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point(void);
        Point(float const x1, float const y1);
        Point(Point const & obj);
        ~Point(void);
        Point &	operator=(Point const & obj);
        float xp;
        float yp;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);