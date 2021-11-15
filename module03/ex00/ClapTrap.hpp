/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:26:59 by uterese           #+#    #+#             */
/*   Updated: 2021/11/14 16:06:52 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"

class ClapTrap
{
    private:
        std::string name;
        uint xp;
        uint energy;
        uint atata;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
