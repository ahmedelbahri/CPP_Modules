/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:41:23 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/23 19:57:06 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):weaponA(weapon)
{
	this->name = name;
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weaponA.gettype() << std::endl;
}
