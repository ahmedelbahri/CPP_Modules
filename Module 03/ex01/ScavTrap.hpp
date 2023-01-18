/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:32:52 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/17 21:15:36 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
				ScavTrap(void);
				ScavTrap(std::string name);
				ScavTrap(const ScavTrap &scavtrap);
	ScavTrap	&operator = (const ScavTrap &scavtrap);
	void		attack(const std::string &target);
	void		guardGate(void);
				~ScavTrap(void);
};

#endif
