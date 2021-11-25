/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:17:01 by uterese           #+#    #+#             */
/*   Updated: 2021/11/25 12:30:43 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "ICharacter.hpp"
# include <iostream>
class Cure : virtual public AMateria
{
    public:
        Cure();
        Cure(Cure const &obj);
        virtual ~Cure();
        Cure &operator=(Cure const &obj);
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif