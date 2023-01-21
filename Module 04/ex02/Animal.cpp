/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:22:11 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/20 18:02:14 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal::Default constructor called." << std::endl;
	this->type = "";
	return;
}

Animal::Animal(const std::string type)
{
	std::cout << "Animal::Constructor called." << std::endl;
	this->type = type;
	return;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal::Copy constructor called." << std::endl;
	(*this) = animal;
	return;
}

Animal	&Animal::operator = (const Animal &animal)
{
	std::cout << "Animal::Copy operator called." << std::endl;
	this->type = animal.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	std::cout << "Animal::getType called." << std::endl;
	return (this->type);
}

Animal::~Animal(void)
{
	std::cout << "Animal::Destructor called." << std::endl;
	return;
}
