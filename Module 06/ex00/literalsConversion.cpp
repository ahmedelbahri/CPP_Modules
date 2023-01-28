/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   literalsConversion.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:12:58 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/28 13:25:27 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "literalsConversion.hpp"

int	isPseudo(std::string literal)
{
	if (!literal.compare("-inff") || !literal.compare("+inff") || !literal.compare("nanf"))
		return (1);
	if (!literal.compare("-inf") || !literal.compare("+inf") || !literal.compare("nan"))
		return (2);
	return (0);
}

void	checkLiteral(std::string literal, bool (&check)[5])
{
	if (isPseudo(literal))
		check[4] = true;
	else if (literal.length() == 1 && (!isdigit(literal[0])) && isprint(literal[0]))
		check[0] = true;
	else
	{
		int	i = 0;
		if (literal[i] == '+' || literal[i] == '-')
			i++;
		for (; literal[i] && (isdigit(literal[i])); i++);
		if (literal.length() > 0 && i == static_cast<int>(literal.length()))
			check[1] = true;
		else if (literal[i] == '.' && literal[++i])
		{
			for (; literal[i] && (isdigit(literal[i])); i++);
			if (i == static_cast<int>(literal.length()))
				check[3] = true;
			else if (literal[i++] == 'f' && i == static_cast<int>(literal.length()))
				check[2] = true;
		}
	}
}

int	checkOverflow(std::string literal, int check)
{
	if (check == 0
		|| ((check == 1 && literal.length() < 12
			&& atol(literal.c_str()) <= INT_MAX
				&& atol(literal.c_str()) >= INT_MIN)
		|| (check == 2 && ((strtold(literal.c_str(), NULL) <= FLT_MAX
			&& strtold(literal.c_str(), NULL) >= (FLT_MAX * (-1)))
				|| strtold(literal.c_str(), NULL) == 0))
		|| (check == 3 && ((strtold(literal.c_str(), NULL) <= DBL_MAX
			&& strtold(literal.c_str(), NULL) >= (DBL_MAX * (-1)))
				|| strtold(literal.c_str(), NULL) == 0))))
		return (1);
	std::cout << "the input overflows" << std::endl;
	return (0);
}

int	literalsConversion(std::string literal)
{
	int		i;
	bool	check[5] = {false};
	checkLiteral(literal, check);
	for (i = 0; i < 5 && check[i] == false; i++);
	if (i == 5)
		return (1);
	std::cout << "char: ", charLiteral(literal, check);
	std::cout << "int: ";
	if (checkOverflow(literal, 1))
		intLiteral(literal, check);
	std::cout << "float: ";
	if (checkOverflow(literal, 2))
		floatLiteral(literal, check);
	std::cout << "double: ";
	if (checkOverflow(literal, 3))
		doubleLiteral(literal, check);
	return (0);
}
