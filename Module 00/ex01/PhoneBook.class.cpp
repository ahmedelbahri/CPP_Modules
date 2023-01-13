/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:03:28 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/21 20:55:49 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	this->n_of_contacts = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

std::string	ft_in(std::string msg, int i)
{
	std::string	input;

	std::cout << msg;
	while (1)
	{
		if (!getline(std::cin, input))
		{
			std::cout << "\n\033[0;31mEOF triggered.\e[0m\n";
			exit(0);
		}
		else if (input.empty() && i == 1)
			std::cout << "\033[0;33mCan't leave an empty field!!\e[0m\n" << msg << ' ';
		else
			break;
	}
	return (input);
}

void	PhoneBook::add(void)
{
	if (this->index == 8)
		this->index = 0;	
	this->contacts[this->index].add(ft_in("Fill in the number: ", 1),
									ft_in("Fill in the first name: ", 1),
									ft_in("Fill in the last name: ", 1),
									ft_in("Fill in the nickname: ", 1),
									ft_in("Fill in the darkest secret: ", 1));
	this->index++;
	if (this->n_of_contacts < 8)
		this->n_of_contacts++;
	return;
}

void	printf_space(std::string msg)
{
	if (msg.size() < 10)
		for (int i = 0;i < 10 - (int)msg.size();i++)
			std::cout << ' ';
	if (msg.size() <= 10)
		std::cout << msg;
	else
	{
		for (int i = 0;i < 9 && msg[i] != '\0';i++)
			std::cout << msg[i];
		std::cout << '.';
	}
}

void	PhoneBook::search(void)
{
	int			i = 0;
	std::string	find;

	while (i < 8 && contacts[i].get_number().empty() == 0)
	{
		std::cout << "        " << i + 1 << '|';
		printf_space(contacts[i].get_first_name());
		std::cout << '|';
		printf_space(contacts[i].get_last_name());
		std::cout  << '|';
		printf_space(contacts[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
	while (1)
	{
		find = ft_in("\033[0;34mSEARCH~$ \e[0m", 0);
		if (find.empty());
		else if (find.compare("EXIT") == 0)
			break;
		else if (atoi(find.c_str()) > this->n_of_contacts || atoi(find.c_str()) <= 0)
			std::cout << "Error:\n No available contact with the given index.\n";
		else
		{
			std::cout << "Number: " << contacts[atoi(find.c_str()) - 1].get_number() << std::endl;
			std::cout << "First name: " << contacts[atoi(find.c_str()) - 1].get_first_name() << std::endl;
			std::cout << "Last name: " << contacts[atoi(find.c_str()) - 1].get_last_name() << std::endl;
			std::cout << "Nickname: " << contacts[atoi(find.c_str()) - 1].get_nickname() << std::endl;
			std::cout << "Darkest secret: " << contacts[atoi(find.c_str()) - 1].get_darkest_secret() << std::endl;
		}
		find.clear();
	}
}
