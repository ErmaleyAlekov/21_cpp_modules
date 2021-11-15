/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:47:09 by uterese           #+#    #+#             */
/*   Updated: 2021/11/14 17:16:57 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap();
    FragTrap(std::string name1);
    void highFivesGuys(void);
    ~FragTrap();
};
