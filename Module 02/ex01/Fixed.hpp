/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:24:44 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/13 00:17:59 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					number;
	static const int	fraction = 8;
public:
						Fixed(void);
						Fixed(const int nbr);
						Fixed(const float nbr);
						Fixed(const Fixed &fixed);
	void				setRawBits(const int raw);
	int					getRawBits(void) const;
	float				toFloat(void) const;
	int 				toInt(void) const;
	Fixed				&operator = (const Fixed &other);
						~Fixed(void);
};

std::ostream	&operator << (std::ostream &cout, Fixed const &fixed);
int				ft_power(int nb, int power);

#endif
