/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:35:23 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/27 16:53:48 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl	harl_inctance;
		harl_inctance.complain(av[1]);
	}
	else
		std::cerr << "Error:\n wrong args" << std::endl;
	return (0);
}
