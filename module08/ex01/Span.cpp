/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:12:50 by uterese           #+#    #+#             */
/*   Updated: 2021/12/09 12:05:39 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): maxSize(0) {}
Span::Span(unsigned int max) : maxSize(max) {}
Span::Span(Span const &obj) : maxSize(obj.maxSize) {vec = obj.vec;}
Span& Span::operator= (Span const &obj)
{ maxSize = obj.maxSize; vec = obj.vec; return (*this);}
Span::~Span() {}
void Span::addNumber(int nb)
{
	if (vec.size() == maxSize)
		throw MaxSizeException();
	else
		vec.push_back(nb);
}
void Span::addNumber( std::vector<int>::iterator begin,
		std::vector<int>::iterator end)
{
	if (vec.size() + std::distance(begin, end) > maxSize)
		throw MaxSizeException();
	else
		vec.insert(vec.end(), begin, end);
}

unsigned int Span::shortestSpan()
{
	int Short;
	int current;

	if (vec.size() <= 1)
	{
		throw ImpossibleSpanException();
		return (0);
	}
	std::sort(vec.begin(), vec.end());
	Short = diff(vec[0], vec[1]);
	for (unsigned int i = 0; i < vec.size() - 1; i++)
	{
		current = diff(vec[i], vec[i + 1]);
		if (current < Short)
			Short = current;
	}
	return (Short);
}

unsigned int Span::longestSpan()
{
	if (vec.size() <= 1)
		throw ImpossibleSpanException();
	else
		return diff(*std::max_element(vec.begin(), vec.end())
				, *std::min_element(vec.begin(), vec.end()));
}

unsigned int Span::diff(int min, int max)
{
    if (max >= min)
        return (max - min);
    return (min - max);
}

const char* Span::MaxSizeException::what( void ) const throw()
{return (RED"Max size reached!❌");}

const char* Span::ImpossibleSpanException::what( void ) const throw()
{return (RED"Impossible Span!❌");}