/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:51:43 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/20 15:58:07 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat::Default constructor called." << std::endl;
	this->type = "Cat"; 
	this->brain = new Brain();
	return;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat::Copy constructor called." << std::endl;
	(*this) = cat;
	return;
}

Cat	&Cat::operator = (const Cat &cat)
{
	std::cout << "Cat::Copy operator called." << std::endl;
	this->type = cat.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat::Cat sound." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat::Destructor called." << std::endl;
	delete this->brain;
	return;
}
