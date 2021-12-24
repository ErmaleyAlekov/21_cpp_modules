/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:13:25 by uterese           #+#    #+#             */
/*   Updated: 2021/12/09 13:31:11 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp" 

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout<< GRN << mstack.top() << std::endl;
    mstack.pop();
    std::cout << GRN << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout<< GRN << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    std::cout << std::endl;
    std::list<int>		lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);
	std::list<int>::iterator	lst_it = lst.begin();
	std::list<int>::iterator	lst_ite = lst.end();
	++lst_it;
	--lst_it;
	while (lst_it != lst_ite)
	{
		std::cout << GRN << *lst_it << std::endl;
		++lst_it;
	}
    return (0);
}