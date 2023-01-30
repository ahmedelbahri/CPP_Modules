/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:56:24 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/30 20:09:33 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	int			length = 5;
	Array<int>	array_int(length);
	try
	{
		for (int i = 0; i < 6; i++)
			array_int[i] = i, std::cout << "ints content: " << array_int[i] << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << ": index out of range." << std::endl;
	}

	Array<char>	array_char(length);
	try
	{
		for (int i = 0; i < length; i++)
			array_char[i] = i + 97, std::cout << "chars content: " << array_char[i] << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << ": index out of range." << std::endl;
	}

	Array<std::string>	array_string(length);
	try
	{
		for (int i = 0; i < length; i++)
		{
			array_string[i] = "this is string ";
			std::cout << "strings content: " << array_string[i] << i << std::endl;
		}
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << ": index out of range." << std::endl;
	}
	return (0);
}
