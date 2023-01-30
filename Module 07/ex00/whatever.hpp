/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:38:41 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/30 17:46:53 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	c = a;
	a = b;
	b = c;
}

template <typename T>
T	min(T &a, T &b)
{
	if (a >= b)
		return (b);
	return (a);
}

template <typename T>
T	max(T &a, T &b)
{
	if (a <= b)
		return (b);
	return (a);
}

#endif
