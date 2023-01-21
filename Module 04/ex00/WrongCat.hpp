/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:53:20 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/19 21:10:57 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
				WrongCat(void);
				WrongCat(const WrongCat &wrongcat);
	WrongCat	&operator = (const WrongCat &wrongcat);
	void		makeSound(void) const;
				~WrongCat(void);
};

#endif
