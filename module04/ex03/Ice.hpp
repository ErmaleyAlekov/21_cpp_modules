/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 08:58:18 by uterese           #+#    #+#             */
/*   Updated: 2021/11/25 12:30:38 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "ICharacter.hpp"
# include <iostream>
class Ice : virtual public AMateria
{
    public:
        Ice();
        Ice(Ice const &obj);
        virtual ~Ice();
        Ice &operator=(Ice const &obj);
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
#endif