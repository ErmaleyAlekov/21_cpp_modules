/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:13:00 by uterese           #+#    #+#             */
/*   Updated: 2021/12/09 13:29:22 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>
#include <iterator>
#include <list>
#define GRN "\001\e[0;32m\002"
template <typename T>
class MutantStack : public std::stack<T>
{
    private:
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack() {}
        MutantStack(MutantStack const &obj) : std::stack<T>(obj) {}
        MutantStack &operator=(MutantStack const &obj)
        {if (this != &obj) std::stack<T>::operator=(obj); return (*this);}
        ~MutantStack() {}
        iterator begin() {return (this->c.begin());}
        iterator end() {return (this->c.end());}
};
#endif