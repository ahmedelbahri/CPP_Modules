/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:08:42 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/31 15:04:49 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	this->N = 0;
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(const Span &span)
{
	(*this) = span;
}

Span	&Span::operator = (const Span &span)
{
	this->N = span.N;
	this->vec = span.vec;
	return (*this);
}

void	Span::addNumber(unsigned int element)
{
	if (this->vec.size() < this->N)
		this->vec.push_back(element);
	else
		throw (Span::RangeException());
}

void	Span::addNumber(V::iterator iterBegin, V::iterator iterEnd)
{
	for (; iterBegin != iterEnd; iterBegin++)
		addNumber(*iterBegin);
}

unsigned int	Span::shortestSpan(void)
{
	if (this->vec.size() <= 1)
		throw (Span::SpanException());
	std::sort(vec.begin(), vec.end());
	V::iterator	iter = vec.begin();
	V::iterator	iter1 = iter + 1;
	int res = *iter1 - *iter;
	for (; iter1 != vec.end(); iter1++, iter++)
		if (*iter1 - *iter < res)
			res = *iter1 - *iter;
	return (res);
}

unsigned int	Span::longestSpan(void)
{
	if (this->vec.size() <= 1)
		throw (Span::SpanException());
	std::sort(vec.begin(), vec.end());
	return (*(vec.end() - 1) - *(vec.begin()));
}

const char *Span::SpanException::what(void) const throw ()
{
	return ("Error:\n Unable to find a span.");
}

const char *Span::RangeException::what(void) const throw ()
{
	return ("Error:\n Maximum range exeeded.");
}

Span::~Span(void)
{
	return;
}
