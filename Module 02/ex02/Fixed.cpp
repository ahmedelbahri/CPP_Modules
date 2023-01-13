/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:18:22 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/13 18:35:04 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
//////////////////////////////Constructors//////////////////////////////////////

Fixed::Fixed(void)
{
	this->number = 0;
	return;
}

Fixed::Fixed(const int nbr)
{
	this->number = nbr << fraction;
	return;
}

Fixed::Fixed(const float nbr)
{
	this->number = (int)roundf(nbr * ft_power(2, this->fraction));
	return;
}

Fixed::Fixed(const Fixed &fixed)
{
	(*this) = fixed;
	return;
}

//////////////////////////////Destructors///////////////////////////////////////

Fixed::~Fixed(void)
{
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
	return (this->number);
}

void	Fixed::setRawBits(const int raw)
{ 
	this->number = raw;
}

///////////////////////////////overload/////////////////////////////////////////

//------------------------------insertion-------------------------------------//

std::ostream	&operator << (std::ostream &cout, Fixed const &fixed)
{
	cout << fixed.toFloat();
	return (cout);
}

//-----------------------------comparison-------------------------------------//

Fixed	&Fixed::operator = (const Fixed &other)
{
	this->number = other.getRawBits();
	return (*this);
}

bool	Fixed::operator < (const Fixed &fixed) const
{
	if (this->number < fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator > (const Fixed &fixed) const
{
	if (this->number > fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator >= (const Fixed &fixed) const
{
	if (this->number >= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator <= (const Fixed &fixed) const
{
	if (this->number <= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator == (const Fixed &fixed) const
{
	if (this->number == fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator != (const Fixed &fixed) const
{
	if (this->number != fixed.getRawBits())
		return (true);
	else
		return (false);
}

//------------------------------arethmatic------------------------------------//

Fixed	Fixed::operator + (const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator - (const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator * (const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator / (const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

//--------------------------------increment-----------------------------------//

Fixed	&Fixed::operator ++ (void)
{
	this->number++;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed tmp = (*this);
	this->number++;
	return (tmp);
}

Fixed	&Fixed::operator -- (void)
{
	this->number--;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed &tmp = (*this);
	this->number--;
	return (tmp);
}

//--------------------------------member functions----------------------------//

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	else
		return (b);
}

//---------------------------------other--------------------------------------//

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
