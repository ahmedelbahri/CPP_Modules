/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:48:33 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/11/05 17:47:51 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>

class Contact
{
	private:
		std::string		number;
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		darkest_secret;
	public:
		Contact(void);
		~Contact(void);
		void	add(std::string number,
					std::string first_name,
					std::string last_name,
					std::string nickname,
					std::string darkest_secret);
		std::string	get_number(void);
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
		std::string	get_darkest_secret(void);
};

#endif