/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 08:56:17 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 10:44:15 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"
#include <iostream>
class Brain
{
    protected:
        std::string ideas[100];
        int id;
    public:
        Brain();
        Brain(Brain const & obj);
        ~Brain();
        Brain &operator=(Brain const & obj);
        bool saveIdea(std::string idea);
        std::string getIdea(int id);
};


#endif