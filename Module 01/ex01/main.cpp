/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:56:00 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/23 19:44:00 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int		N = 8;
	Zombie	*Horde = zombieHorde(N, "Soldier");
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete[] Horde;
	return (0);
}