/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 02:23:17 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/28 11:28:01 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ABC.hpp"

Base::~Base(void)
{
	return;
}

Base	*generate(void)
{
	int		r = time(NULL) % 3;
	Base	*base;
	switch (r)
	{
		case (0):
			base = new A();
			std::cout << "A type generated" << std::endl;
			break;
		case (1):
			base = new B();
			std::cout << "B type generated" << std::endl;
			break;
		case (2):
			base = new C();
			std::cout << "C type generated" << std::endl;
			break;
		default:
			std::cout << "Nothing generated" << std::endl;
			return (NULL);
	}
	return (base);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "p type is A." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "p type is B." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "p type is C." << std::endl;
	else
		std::cout << "Idnetification failed." << std::endl;
}

void	identify(Base &p)
{
	A a;
	B b;
	C c;
	try
	{
		a = dynamic_cast<A &>(p);
		std::cout << "p type is A." << std::endl;
	}
	catch(const std::exception &e){}
	try
	{
		b = dynamic_cast<B &>(p);
		std::cout << "p type is B." << std::endl;
	}
	catch(const std::exception &e){}
	try
	{
		c = dynamic_cast<C &>(p);
		std::cout << "p type is C." << std::endl;
	}
	catch(const std::exception &e){}
	
}