/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:15:13 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/31 17:28:49 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "--< MutantStack using intigers. >--" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "MutantStack top:\n -> " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "MutantStack size:\n -> " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "--< MutantStack using strings. >--" << std::endl;
		MutantStack<std::string> mstack;
		mstack.push(std::string("this is a string 1"));
		mstack.push(std::string("this is a string 2"));
		std::cout << "MutantStack top:\n -> " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "MutantStack size:\n -> " << mstack.size() << std::endl;
		mstack.push(std::string("this is a string 3"));
		mstack.push(std::string("this is a string 4"));
		mstack.push(std::string("this is a string 5"));
		//[...]
		mstack.push(std::string("this is a string 6"));
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<std::string> s(mstack);
	}
	return (0);
}