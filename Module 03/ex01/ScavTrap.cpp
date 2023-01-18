/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:32:20 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/17 21:32:20 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor called." << std::endl;
	this->name = "";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Constructor called." << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	return;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scavtrap)
{
	std::cout << "Assignation operator called." << std::endl;
	this->name = scavtrap.name;
	this->hit_points = scavtrap.hit_points;
	this->energy_points = scavtrap.energy_points;
	this->attack_damage = scavtrap.attack_damage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
		return;
	}
	std::cout << "attack: No suffisent points." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->hit_points > 0 && this->energy_points > 0)
		std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called." << std::endl;
	return;
}
