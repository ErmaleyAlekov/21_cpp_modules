/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:29:46 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 12:00:12 by uterese          ###   ########.fr       */
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
        virtual std::string getType() const = 0;
        virtual void makeSound() const = 0;
        Animal &operator=(Animal const & obj);
};

#endif
