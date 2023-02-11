/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:15:25 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/31 17:27:15 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack <T>
{
public:
	typedef typename std::stack <T>::container_type::iterator	iterator;
				MutantStack(void)
	{
		return;
	}
				MutantStack(const MutantStack &mutentstack)
	{
		(*this) = mutentstack;
	}
	MutantStack	&operator = (const MutantStack &mutentstack)
	{
		this->c = mutentstack.c;
		return (*this);
	}
	iterator	begin(void)
	{
		return (this->c.begin());
	}
	iterator	end(void)
	{
		return (this->c.end());
	}
};

#endif
