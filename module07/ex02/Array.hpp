/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 23:19:42 by uterese           #+#    #+#             */
/*   Updated: 2021/12/06 13:41:17 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
    private:
	    T* a;
	    unsigned int size;
    public:
	    Array() : a(new T[0]), size(0) {}
	    Array(int size) : a(new T[size]), size(size) {}
	    Array(const Array &obj): a(new T[obj.size]) \
            , size(obj.size)
	    {
		    for (unsigned int i = 0; i < size; i++)
			    a[i] = obj.a[i];
	    }
	    Array<T>& operator= (const Array<T> &obj)
	    {
		    delete[] a;
		    a = new T[obj.size];
		    size = obj.size;
		    for (unsigned int i = 0; i < size; i++)
			    a[i] = obj.a[i];
	    }

	    T& operator[] ( unsigned int pos )
	    {
		    if (pos >= size)
			    throw std::exception();
		    else
			    return (a[pos]);
	    }
        const T& operator[] (unsigned int pos) const
	    {
		    if (pos >= size)
			    throw std::exception();
		    else
			    return (a[pos]);
        }
	    ~Array()
	    {
		    delete[] a;
	    }
};
#endif