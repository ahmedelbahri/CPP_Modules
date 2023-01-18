/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:41:41 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/17 21:31:52 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
				FragTrap(void);
				FragTrap(std::string &name);
				FragTrap(const FragTrap &fragtrap);
	FragTrap	&operator = (const FragTrap &fragtrap);
	void		attack(const std::string &target);
	void		highFivesGuys(void);
				~FragTrap(void);
};

#endif
