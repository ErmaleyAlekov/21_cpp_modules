/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:25:04 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 08:38:51 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "Wrong.hpp"

class WrongCat : public Wrong
{
    private:
    
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat const & obj);
        WrongCat & operator= (WrongCat const & obj);
};
#endif
