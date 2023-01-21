/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:41:49 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/19 18:28:34 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain::Default constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = std::string("Idea") + std::to_string(i);
	return;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain::Copy constructor called." << std::endl;
	(*this) = brain;
	return;
}

Brain	&Brain::operator = (const Brain &brain)
{
	std::cout << "Brain::Copy operator called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain::Destructor called." << std::endl;
	return;
}
