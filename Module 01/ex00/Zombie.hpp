/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:24:36 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/23 19:42:42 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class	Zombie
{
private:
	std::string	name;
public:
				Zombie(std::string name);
				~Zombie(void);
	void		announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
