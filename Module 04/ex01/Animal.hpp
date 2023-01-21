/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:22:31 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/20 12:21:58 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
	std::string		type;
public:
					Animal(void);
					Animal(const std::string type);
					Animal(const Animal &animal);
	Animal			&operator = (const Animal &animal);
	std::string		getType(void) const;
	virtual	void	makeSound(void) const;
	virtual			~Animal(void);
};

#endif
