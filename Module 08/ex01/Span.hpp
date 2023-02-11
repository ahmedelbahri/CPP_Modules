/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:08:49 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/31 15:01:43 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <exception>
#include <vector>
#define V std::vector <int>

class Span
{
private:
	V				vec;
	unsigned int	N;
public:
						Span(void);
						Span(unsigned int N);
						Span(const Span &span);
	Span				&operator = (const Span &span);
	void				addNumber(unsigned int element);
	void				addNumber(V::iterator iterBegin, V::iterator iterEnd);
	unsigned int		shortestSpan(void);
	unsigned int		longestSpan(void);
						~Span(void);

	class SpanException : public std::exception
	{
	public:
		const char *what(void) const throw ();
	};
	

	class RangeException : public std::exception
	{
	public:
		const char *what(void) const throw ();
	};
	
};

#endif
