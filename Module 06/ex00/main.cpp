/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:54:10 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/27 17:57:57 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "literalsConversion.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Error:\n Invalid argument." << std::endl;
	else if (literalsConversion(av[1]))
		std::cerr << "Invalid type" << std::endl;
	return (0);
}