/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:19:04 by uterese           #+#    #+#             */
/*   Updated: 2021/11/13 12:12:30 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
  float first = (a.xp - point.xp) * (b.yp - a.yp) - (b.xp - a.xp) * (a.yp - point.yp);
  float second = (b.xp - point.xp) * (c.yp - b.yp) - (c.xp - b.xp) * (b.yp - point.yp);
  float third = (c.xp - point.yp) * (a.yp - c.yp) - (a.xp - c.xp) * (c.yp - point.yp);
  double str1 = sqrt((b.xp - a.xp) * (b.xp - a.xp) + (b.yp - a.yp) * (b.yp - a.yp));
  double str2 = sqrt((c.xp - b.xp) * (c.xp - b.xp) + (c.yp - b.yp) * (c.yp - b.yp));
  double str3 = sqrt((c.xp - a.xp) * (c.xp - a.xp) + (c.yp - a.yp) * (c.yp - a.yp));
  double cosa =(str1 * str1 + str3 * str3 - str2 * str2) / (2 * str1 * str3);
  double cosb =(str2 * str2 + str3 * str3 - str1 * str1) / (2 * str2 * str3);
  double cosc =(str1 * str1 + str2 * str2 - str3 * str3) / (2 * str1 * str2);
  double angle1 = acos(cosa) * 180/ M_PI;
  double angle2 = acos(cosb) * 180/ M_PI;
  double angle3 = acos(cosc) * 180/ M_PI;
  double sum = angle3 + angle2 + angle1;
  if (sum < 180 || sum > 181 || angle2 == 180 || angle3 == 180 || angle1 == 180 \
      || ((a.xp == b.xp && a.xp == c.xp) && (a.yp == b.yp && a.yp == c.yp)) \
      || !angle1 || !angle2 || !angle3)
  {
    std::cout << RED"It`s not triangle!" << std::endl;
    return (false);
  }
  if ((first >= 0 && second >= 0 && third >= 0) || (first <= 0 && second <= 0 && third <= 0))
    return (true);
  else
    return (false);
}