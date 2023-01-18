/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:41:37 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/17 21:33:28 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called." << std::endl;
	this->name = "";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	return;
}

FragTrap::FragTrap(std::string &name)
{
	std::cout << "FragTrap Constructor called." << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	return;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	std::cout << "FragTrap Copy constructor called." << std::endl;
	(*this) = fragtrap;
	return;
}

FragTrap	&FragTrap::operator = (const FragTrap &fragtrap)
{
	std::cout << "FragTrap Copy operator called." << std::endl;
	this->name = fragtrap.name;
	this->hit_points = fragtrap.hit_points;
	this->energy_points = fragtrap.energy_points;
	this->attack_damage = fragtrap.attack_damage;
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
		return;
	}
	std::cout << "attack: No suffisent points." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hit_points > 0 && this->energy_points > 0)
		std::cout << "FragTrap " << this->name << " high fives guys." << std::endl;
}

FragTrap::~FragTrap(void)
{
	if (this->hit_points > 0 && this->energy_points > 0)
		std::cout << "FragTrap Destructor called." << std::endl;
	return;
}