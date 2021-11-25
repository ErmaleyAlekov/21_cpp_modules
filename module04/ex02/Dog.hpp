/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:57:01 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 12:02:06 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *mozg;
    public:
        Dog();
        Dog(Dog const & obj);
        ~Dog();
        Dog & operator= (Dog const & obj);
        void makeSound() const;
        Brain *getBrain() const;
        std::string getType() const;
};

#endif