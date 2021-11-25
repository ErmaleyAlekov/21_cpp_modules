/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:40:53 by uterese           #+#    #+#             */
/*   Updated: 2021/11/22 17:58:49 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    private:
    
    public:
        Cat();
        ~Cat();
        Cat(Cat const & obj);
        Cat & operator= (Cat const & obj);
		void makeSound() const;
};

#endif