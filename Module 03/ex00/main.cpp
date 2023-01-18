/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:24:31 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/16 17:22:26 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string	name = "clap";
	std::string	name_1 = "clap_1";
	ClapTrap	clap;
	ClapTrap	clap_1(name_1);
	clap = name;
	clap.attack(name_1);
	clap_1.takeDamage(0);
	clap_1.attack(name);
	clap.takeDamage(0);
	clap.beRepaired(0);
	clap_1.beRepaired(0);
	return (0);
}
