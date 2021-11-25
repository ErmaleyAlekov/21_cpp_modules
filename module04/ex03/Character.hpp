/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:00:14 by uterese           #+#    #+#             */
/*   Updated: 2021/11/25 13:11:36 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
# include <iostream>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"
class Character : virtual public ICharacter
{
    private:
        AMateria *mat[4];
        std::string Name;
    public:
        Character();
        Character(std::string const name);
        Character (Character const &obj);
        virtual ~Character();

        Character &operator=(Character const &obj);
        virtual std::string const & getName() const;
        virtual void equip(AMateria *m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter &target);   
};
#endif