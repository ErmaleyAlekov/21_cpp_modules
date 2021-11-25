/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:25:41 by uterese           #+#    #+#             */
/*   Updated: 2021/11/23 11:46:59 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Cat a;
    Dog b;
    // int id = 1;
    a.getBrain()->saveIdea("Good idea");
    a.getBrain()->saveIdea("Bad idea");
    b.getBrain()->saveIdea("Good idea");
    b.getBrain()->saveIdea("Bad idea");

    std::cout << GRN << "This cat " << a.getBrain()->getIdea(1) << std::endl;
    std::cout << GRN << "This cat " << a.getBrain()->getIdea(2) << std::endl;
    std::cout << GRN << "This dog " << b.getBrain()->getIdea(1) << std::endl;
    std::cout << GRN << "This dog " << b.getBrain()->getIdea(2) << std::endl;

    // while (id < 105)
    // {
    //     a.getBrain()->saveIdea("Good idea");
        
    //     std::cout << GRN << "This cat " << a.getBrain()->getIdea(id) << GRN" |id= "<< id << std::endl;
    //     id++;
    // }
    delete j; delete i;
    return (0);
} 