/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:53:18 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/19 21:11:02 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat::Default constructor called." << std::endl;
	this->type = "WrongCat"; 
	return;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
	std::cout << "WrongCat::Copy constructor called." << std::endl;
	(*this) = wrongcat;
	return;
}

WrongCat	&WrongCat::operator = (const WrongCat &wrongcat)
{
	std::cout << "WrongCat::Copy operator called." << std::endl;
	this->type = wrongcat.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat::WrongCat sound." << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat::Destructor called." << std::endl;
	return;
}
