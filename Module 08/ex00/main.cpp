/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 23:07:43 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/31 11:33:02 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector <int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	try
	{
		int element = 5;
		element = easyfind(vec, element);
		std::cout << "element " << element << " found." << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << ": Couldn't find element." << std::endl;
	}
	return (0);
}