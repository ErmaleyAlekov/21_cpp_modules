/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:20:56 by uterese           #+#    #+#             */
/*   Updated: 2021/11/25 13:44:27 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        virtual ~AMateria();
        std::string const & getType() const;
        virtual AMateria *clone() const = 0;
        virtual void use(class ICharacter &target);
};
#endif