/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:12:01 by uterese           #+#    #+#             */
/*   Updated: 2021/11/25 10:37:51 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : id(0)
{
    std::cout << GRN"Default constructor called from Brain class" << std::endl;
}

Brain::Brain(Brain const & obj)
{
    std::cout << GRN"Copy constructor called from Brain class" << std::endl;
    *this = obj;
}

Brain::~Brain()
{
    std::cout << RED"Destructor called from Brain class" << std::endl;
}

Brain & Brain::operator=(Brain const & obj)
{
    if (this == &obj)
        return (*this);
    for (int i = 0; i < obj.id; i++)
    {
        ideas[i] = obj.ideas[i];
        id++;
    }
    return (*this);
}

bool Brain::saveIdea(std::string idea)
{
    if (id == 99)
    {
        std::cout << RED"Cannot save idea!" << std::endl;
        return false;
    }
    ideas[++id] = idea;
    return true;
}

std::string Brain::getIdea(int i)
{
    if (i > id)
        return (RED" haven`t this idea!");
    return ("have a " + ideas[i]);
}