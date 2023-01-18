/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:24:51 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/18 17:09:42 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	name;
	int			hit_points;
	int			energy_points;
	int			attack_damage;
public:
				ClapTrap(void);
				ClapTrap(std::string name);
				ClapTrap(const ClapTrap &claptrap);
	ClapTrap	&operator = (const ClapTrap &claptrap);
	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
				~ClapTrap(void);
};

#endif
