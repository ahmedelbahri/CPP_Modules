/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:18:23 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/05 16:34:51 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int					number;
	static const int	fraction = 8;
public:
						Fixed(void);
						Fixed(const Fixed &fixed);
						~Fixed(void);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	Fixed				&operator = (const Fixed &other);
};

#endif
