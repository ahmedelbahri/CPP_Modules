/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:50:32 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/28 02:15:35 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data		data;
	data.blackHole = 100;
	data.level = 10;
	std::cout << "blackHole before conversion:\n " << data.blackHole << std::endl;
	std::cout << "level before conversion:\n " << data.level << std::endl;
	uintptr_t	newType = serialize(&data);
	Data		*newData = deserialize(newType);
	std::cout << "blackHole after conversion:\n " << newData->blackHole << std::endl;
	std::cout << "level after conversion:\n " << newData->level << std::endl;
	return (0);
}