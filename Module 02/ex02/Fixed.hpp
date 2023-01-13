/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:18:29 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/13 14:02:04 by ahel-bah         ###   ########.fr       */
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
	bool				operator < (const Fixed &fixed) const;
	bool				operator > (const Fixed &fixed) const;
	bool				operator >= (const Fixed &fixed) const;
	bool				operator <= (const Fixed &fixed) const;
	bool				operator == (const Fixed &fixed) const;
	bool				operator != (const Fixed &fixed) const;
	Fixed				operator + (const Fixed &fixed) const;
	Fixed				operator * (const Fixed &fixed) const;
	Fixed				operator - (const Fixed &fixed) const;
	Fixed				operator / (const Fixed &fixed) const;
	Fixed				&operator = (const Fixed &other);
	Fixed				&operator ++ (void);
	Fixed				operator ++ (int);
	Fixed				&operator -- (void);
	Fixed				operator -- (int);
	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
						~Fixed(void);
};

std::ostream	&operator << (std::ostream &cout, Fixed const &fixed);
int				ft_power(int nb, int power);

#endif
