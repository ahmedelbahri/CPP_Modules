/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:24:46 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/17 20:06:32 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default constructor called." << std::endl;
	this->name = "";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	return;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructor called." << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "ClapTrap Copy constructor called." << std::endl;
	*this = claptrap;
	return;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &claptrap)
{
	std::cout << "ClapTrap Copy operator called." << std::endl;
	this->name = claptrap.name;
	this->hit_points = claptrap.hit_points;
	this->energy_points = claptrap.energy_points;
	this->attack_damage = claptrap.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
		return;
	}
	std::cout << "ClapTrap attack: No suffisent points." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " took " << amount << " worth of damage." << std::endl;
		if ((unsigned int)this->hit_points >= amount)
			this->hit_points-=amount;
		else
			this->hit_points = 0;
		return;
	}
	std::cout << "ClapTrap takeDamage: No suffisent points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " took " << amount << " worth of ammunition." << std::endl;
		this->hit_points+=amount;
		this->energy_points--;
		return;
	}
	std::cout << "ClapTrap beRepaired: No suffisent points." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called." << std::endl;
	return;
}