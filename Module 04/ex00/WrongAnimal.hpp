/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:53:16 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/20 12:36:55 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
				WrongAnimal(void);
				WrongAnimal(const std::string type);
				WrongAnimal(const WrongAnimal &wronganimal);
	WrongAnimal	&operator = (const WrongAnimal &wronganimal);
	std::string	getType(void) const;
	void		makeSound(void) const;
	virtual		~WrongAnimal(void);
};

#endif
