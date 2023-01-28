/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   literals.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:20:55 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/28 01:33:37 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "literalsConversion.hpp"

void	charLiteral(std::string literal, bool (&check)[5])
{
	long double	num = strtod(literal.c_str(), NULL);
	if (check[0] == true)
		std::cout << "'" << literal << "'" << std::endl;
	else if (check[4] == true || !isascii(num))
		std::cout << "impossible" << std::endl;
	else if (isprint(num))
		std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	intLiteral(std::string literal, bool (&check)[5])
{
	long double	num = strtod(literal.c_str(), NULL);
	if (check[0] == true)
		std::cout << static_cast<int>(literal[0]) << std::endl;
	else if (check[4] == true)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
}

int	literalPresission(std::string literal)
{
	int	i;
	for (i = 0; literal[i] && literal[i] != '.'; i++);
	if (i <= 15)
		std::cout << std::fixed;
	else
		std::cout << std::scientific;
	for (i = 0; literal[i] && literal[i] != '.'; i++);
	if (i < static_cast<int>(literal.length()))
		return ((literal.substr(i, literal.length())).length() - 1);
	else
		return (1);
}

void	floatLiteral(std::string literal, bool (&check)[5])
{
	long double	num = strtod(literal.c_str(), NULL);
	std::cout.precision(literalPresission(literal));
	if (check[0] == true)
		std::cout << literal[0] << ".0f" << std::endl;
	else if (check[4] == true)
	{
		std::cout << literal;
		if (isPseudo(literal) == 2)
			std::cout << "f";
		std::cout << std::endl;
	}
	else
		std::cout << num << "f" << std::endl;
}

void	doubleLiteral(std::string literal, bool (&check)[5])
{
	long double	num = strtod(literal.c_str(), NULL);
	std::cout.precision(literalPresission(literal));
	if (check[0] == true)
		std::cout << literal[0] << ".0" << std::endl;
	else if (check[4] == true)
		std::cout << literal << std::endl;
	else
		std::cout << num << std::endl;
}
