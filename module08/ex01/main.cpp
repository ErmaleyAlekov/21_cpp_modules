/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:35:18 by uterese           #+#    #+#             */
/*   Updated: 2021/12/09 12:20:25 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

typedef std::vector<int>::iterator Iter;

static void empty() 
{
	std::cout << GRN"Test empty ▼\n";
	Span sp = Span(0);
	try 
    {
		std::cout << sp.shortestSpan()<<"✅" << std::endl;
		std::cout << sp.longestSpan()<<"✅" << std::endl;
	} catch (std::exception& e) 
    {std::cout << e.what() << std::endl;}
	std::cout << GRN"_______________" << std::endl;
}

static void oneNumber()
{
	std::cout << GRN"One number ▼\n";
	Span sp = Span(1);
	sp.addNumber(5);
	try 
    {
		std::cout << sp.shortestSpan()<<"✅" << std::endl;
		std::cout << sp.longestSpan()<<"✅" << std::endl;
	} catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
	std::cout << GRN"_______________" << std::endl;
}

static void addMoreThanMax() 
{
	std::cout << GRN"Add more than max ▼" << std::endl;

	Span sp = Span(1);

	sp.addNumber(5);

	try {sp.addNumber(2);} 
    catch (std::exception& e) { std::cout << e.what() << std::endl; }
	std::cout << GRN"_______________" << std::endl;
}

static void positive() 
{
	std::cout << GRN"Test positive ▼\n";
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan()<<"✅" << std::endl;
	std::cout << sp.longestSpan() <<"✅" << std::endl;
	std::cout << GRN"_______________" << std::endl;
}

static void negative() 
{
    std::cout << GRN"Negative ▼\n";
	Span sp = Span(5);
	sp.addNumber(-5);
	sp.addNumber(-3);
	sp.addNumber(-17);
	sp.addNumber(-9);
	sp.addNumber(-11);
	std::cout << sp.shortestSpan() <<"✅"<< std::endl;
	std::cout << sp.longestSpan() <<"✅"<< std::endl;
	std::cout << GRN"_______________" << std::endl;
}

static void intMinMax() 
{
	std::cout << GRN"Int min, max ▼\n";
	Span sp = Span(5);

	sp.addNumber(INT_MAX);
	sp.addNumber(INT_MIN);
	std::cout << sp.shortestSpan() << "✅" << std::endl;
	std::cout << sp.longestSpan() << "✅" << std::endl;
	sp.addNumber(0);
	sp.addNumber(-1);
	sp.addNumber(1);
	std::cout << sp.shortestSpan()<< "✅" << std::endl;
	std::cout << sp.longestSpan() << "✅" << std::endl;
	std::cout << GRN"_______________" << std::endl;
}

static void duplicates() 
{
	std::cout << GRN"Duplicates ▼" << std::endl;
	Span sp = Span(5);
	sp.addNumber(3);
	sp.addNumber(3);
	std::cout << sp.shortestSpan()<<"✅" << std::endl;
	std::cout << sp.longestSpan()<< "✅" << std::endl;
	sp.addNumber(5);
	sp.addNumber(17);
	sp.addNumber(11);
	std::cout << sp.shortestSpan()<<"✅" << std::endl;
	std::cout << sp.longestSpan()<<"✅" << std::endl;
	std::cout << GRN"_______________" << std::endl;
}

static void range() 
{
	std::cout << GRN"Range ▼" << std::endl;
	srand(time(0));

	Span sp = Span(20000);
	std::vector<int> range(20000);
	for (Iter it = range.begin(); it != range.end(); it++) 
    {*it = rand() % 20000 - 10000;}
	sp.addNumber(range.begin(), range.end());
	std::cout << sp.shortestSpan()<<"✅" << std::endl;
	std::cout << sp.longestSpan()<< "✅" << std::endl;
	std::cout << GRN"_______________" << std::endl;
}

static void addMore() 
{
    std::cout << GRN"Range add more ▼" << std::endl;
	srand(time(0));
	Span sp = Span(10000);
	std::vector<int> range(20000);
	for (Iter it = range.begin(); it != range.end(); it++) 
    {*it = rand() % 20000 - 10000;}
	try {sp.addNumber(range.begin(), range.end());} 
    catch (std::exception& e) {std::cout << e.what() << std::endl;}
	std::cout << GRN"_______________" << std::endl;
}

int main() 
{
	empty();
	oneNumber();
	addMoreThanMax();
	positive();
	negative();
	intMinMax();
	duplicates();
	range();
	addMore();
	return 0;
}