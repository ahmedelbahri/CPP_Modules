/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:12:37 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/21 20:28:47 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::add(std::string number,
					 std::string first_name,
					 std::string last_name,
					 std::string nickname,
					 std::string darkest_secret)
{
	this->number.assign(number);
	this->first_name.assign(first_name);
	this->last_name.assign(last_name);
	this->nickname.assign(nickname);
	this->darkest_secret.assign(darkest_secret);
	return;
}

std::string	Contact::get_number(void)
{
	return (this->number);
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}
