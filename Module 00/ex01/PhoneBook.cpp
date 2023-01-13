/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:45:52 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/11/05 19:06:11 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	str;

	std::cout << "Type a Command:" << std::endl;
	std::cout << "    'ADD' save a new contact." << std::endl;
	std::cout << "    'SEARSH' display a specific contact." << std::endl;
	std::cout << "    'EXIT'  quits and the contacts." << std::endl;
	while (1)
	{
		std::cout << "\033[0;32m" << "PhoneBook~$ " << "\e[0m";
		if (!getline(std::cin, str))
		{
			std::cout << "\n\033[0;31mEOF triggered.\e[0m\n";
			exit(0);
		}
		else if (str.compare("EXIT") == 0)
			exit(0);
		else if (str.compare("ADD") == 0)
			phonebook.add();
		else if (str.compare("SEARCH") == 0)
			phonebook.search();
		str.clear();
	}
	return (0);
}
