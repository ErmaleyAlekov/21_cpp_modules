/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:47:25 by uterese           #+#    #+#             */
/*   Updated: 2021/12/09 11:43:46 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>
#include <climits>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"
#define ARR "\U000125BC"
class Span
{
private:
	std::vector<int> vec;
	unsigned int maxSize;
	unsigned int diff(int a, int b);
public:
	Span();
	Span(unsigned int maxSize);
	Span(Span const &obj);
	Span& operator= (Span const &obj);
	~Span();
	void addNumber(int nb);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	class MaxSizeException : public std::exception
	{
		const char* what( void ) const throw();
	};
	class ImpossibleSpanException : public std::exception
	{
		const char* what( void ) const throw();
	};
};
#endif