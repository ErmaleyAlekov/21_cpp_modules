/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:19:35 by uterese           #+#    #+#             */
/*   Updated: 2021/11/25 13:10:30 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
class MateriaSource : virtual public IMateriaSource
{
    private:
	    AMateria *mat[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &obj);
        MateriaSource &operator=(MateriaSource const &obj);
        virtual ~MateriaSource();

        virtual void learnMateria(AMateria *m);
        virtual AMateria* createMateria(std::string const & type);
};
#endif