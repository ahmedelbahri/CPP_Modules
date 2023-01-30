/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:56:37 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/30 19:11:12 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	unsigned int	length;
	T				*array;
public:
					Array(void);
					Array(unsigned int n);
					Array(const Array &array);
	Array			&operator = (const Array &array);
	T				&operator [] (unsigned int i);
	unsigned int	size(void) const;
					~Array(void);
};

template <typename T>
Array<T>::Array(void)
{
	this->length = 0;
	this->array = new T[0];
	return;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->length = n;
	this->array = new T[n];
	return;
}

template <typename T>
Array<T>::Array(const Array &array)
{
	(*this) = array;
	return;
}

template <typename T>
Array<T>	&Array<T>::operator = (const Array &array)
{
	this->length = array.size();
	if (this->array)
		delete[] this->array;
	this->array = new T[this->length];
	for (int i = 0; i < this->length; i++)
		this->array[i] = array[i];
	return (*this);
}

template <typename T>
T	&Array<T>::operator [] (unsigned int n)
{
	if (n < this->length)
		return (this->array[n]);
	else
		throw (std::exception());
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->length);
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] this->array;
	return;
}

#endif
