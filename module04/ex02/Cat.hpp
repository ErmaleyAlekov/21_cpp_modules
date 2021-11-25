/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:40:53 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 12:01:58 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain *mozg;
    public:
        Cat();
        ~Cat();
        Cat(Cat const & obj);
        Cat & operator= (Cat const & obj);
		void makeSound() const;
        Brain *getBrain() const;
        std::string getType() const;
};

#endif