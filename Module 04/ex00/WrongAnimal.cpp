/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:53:12 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/19 13:08:09 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal::Default constructor called." << std::endl;
	this->type = "";
	return;
}

WrongAnimal::WrongAnimal(const std::string type)
{
	std::cout << "WrongAnimal::Constructor called." << std::endl;
	this->type = type;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	std::cout << "WrongAnimal::Copy constructor called." << std::endl;
	(*this) = wronganimal;
	return;
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &wronganimal)
{
	std::cout << "WrongAnimal::Copy operator called." << std::endl;
	this->type = wronganimal.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal::WrongAnimal sound." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	std::cout << "WrongAnimal::getType called." << std::endl;
	return (this->type);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal::Destructor called." << std::endl;
	return;
}
