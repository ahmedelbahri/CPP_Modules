/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:24:41 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/13 13:28:28 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//////////////////////////////Constructors//////////////////////////////////////

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
	return;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->number = nbr << fraction;
	return;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = (int)roundf(nbr * ft_power(2, this->fraction));
	return;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "copy constructor called" << std::endl;
	(*this) = fixed;
	return;
}

//////////////////////////////Destructors///////////////////////////////////////

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

//////////////////////////////Methods///////////////////////////////////////////

float	Fixed::toFloat(void) const
{
	return ((float)this->number / ft_power(2, this->fraction));
}

int	Fixed::toInt(void) const
{
	return (this->number >> this->fraction);
}

int	Fixed::getRawBits(void) const
{ 
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}

void	Fixed::setRawBits(const int raw)
{ 
	this->number = raw;
}

///////////////////////////////overload/////////////////////////////////////////

Fixed	&Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->number = other.number;
	return (*this);
}

//////////////////////////////Functions/////////////////////////////////////////

std::ostream	&operator << (std::ostream &cout, Fixed const &fixed)
{
	cout << fixed.toFloat();
	return (cout);
}

int	ft_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0 || nb == 0)
		return (0);
	for (int i = 0; i < power; i++)
		res *= nb;
	return (res);
}
