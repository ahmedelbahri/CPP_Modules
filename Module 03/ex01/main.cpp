/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:38:53 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/18 17:09:55 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	std::string	name = "bot_1";
	ScavTrap	scavtrap(name);
	scavtrap.attack(name);
	scavtrap.beRepaired(10);
	scavtrap.takeDamage(10);
	scavtrap.guardGate();
	return (0);
}
