/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 23:07:57 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/31 12:09:41 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <exception>
#include <vector>

template <typename T>
int	easyfind(T t, int i)
{
	typename T::iterator	iter = std::find(t.begin(), t.end(), i);
	if (iter == t.end())
		throw (std::exception());
	return (*iter);
}

#endif
