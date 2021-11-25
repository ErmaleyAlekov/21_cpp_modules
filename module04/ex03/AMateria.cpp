/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:09:28 by uterese           #+#    #+#             */
/*   Updated: 2021/11/25 13:44:19 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & obj)
{
    type = obj;
}

AMateria::~AMateria()
{
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}

std::string const & AMateria::getType() const
{
    return (type);
}