/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:51:43 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/19 21:11:33 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat::Default constructor called." << std::endl;
	this->type = "Cat"; 
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
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat::Cat sound." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat::Destructor called." << std::endl;
	return;
}
