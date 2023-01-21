/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:56:09 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/20 18:00:39 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog::Default constructor called." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog::Copy constructor called." << std::endl;
	(*this) = dog;
	return;
}

Dog	&Dog::operator = (const Dog &dog)
{
	std::cout << "Dog::Copy operator called." << std::endl;
	this->type = dog.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*dog.brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog::Dog sound." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog::Destroctor called." << std::endl;
	delete this->brain;
	return;
}
