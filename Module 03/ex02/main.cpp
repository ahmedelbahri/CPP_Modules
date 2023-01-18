/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:38:53 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/17 21:27:44 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	std::string	name = "bot_1";
	FragTrap	fragtrap(name);
	fragtrap.attack(name);
	fragtrap.beRepaired(10);
	fragtrap.takeDamage(10);
	fragtrap.highFivesGuys();
	return (0);
}
