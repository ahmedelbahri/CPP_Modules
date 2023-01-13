/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:41:47 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/26 21:52:01 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*weaponB;
	std::string	name;
public:
				HumanB(std::string name);
				~HumanB(void);
	void		attack(void);
	void		setWeapon(Weapon &weapon);
};

#endif
