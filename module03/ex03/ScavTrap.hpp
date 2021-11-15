/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:45:39 by uterese           #+#    #+#             */
/*   Updated: 2021/11/14 21:57:05 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private:
        /* data */
    public:
        ScavTrap();
        ScavTrap(std::string name1);
        ~ScavTrap();
        void guardGate();
};
