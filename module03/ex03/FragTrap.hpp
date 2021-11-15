/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:47:09 by uterese           #+#    #+#             */
/*   Updated: 2021/11/14 21:56:50 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    /* data */
public:
    FragTrap();
    FragTrap(std::string name1);
    void highFivesGuys(void);
    ~FragTrap();
};
