/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:57:01 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 08:41:50 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    private:
        /* data */
    public:
        Dog(/* args */);
        Dog(Dog const & obj);
        ~Dog();
        Dog & operator= (Dog const & obj);
        void makeSound() const;
};

#endif