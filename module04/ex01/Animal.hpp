/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:29:46 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 10:33:37 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(Animal const &obj);
        std::string getType() const;
        virtual void makeSound() const;
        Animal &operator=(Animal const & obj);
};

#endif
