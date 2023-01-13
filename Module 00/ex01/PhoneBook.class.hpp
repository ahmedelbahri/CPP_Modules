/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:52:55 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/21 16:54:26 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include "Contact.class.hpp"

class PhoneBook
{
	private:
		Contact		contacts[8];
		int			index;
		int			n_of_contacts;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void);
};

#endif
