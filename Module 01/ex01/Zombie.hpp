/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:56:12 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/23 19:42:16 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class  Zombie
{
private:
	std::string	name;
public:
				Zombie(void);
				~Zombie(void);
	void		announce(void);
	void		give_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
