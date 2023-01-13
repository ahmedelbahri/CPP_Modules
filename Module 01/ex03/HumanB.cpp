/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:41:40 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/26 21:51:54 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weaponB = NULL;
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weaponB = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weaponB->gettype() << std::endl;
}
