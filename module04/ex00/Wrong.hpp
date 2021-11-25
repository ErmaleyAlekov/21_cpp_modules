/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:18:14 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 08:46:10 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONG_HPP
#define WRONG_HPP
#include <iostream>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"

class Wrong
{
    protected:
        std::string type;
    public:
        Wrong();
        Wrong(Wrong const & obj);
        virtual ~Wrong();
        std::string getType() const;
        void makeSound() const;
        Wrong & operator=(Wrong const & obj);
};
#endif
