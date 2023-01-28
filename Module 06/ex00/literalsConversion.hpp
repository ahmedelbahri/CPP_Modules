/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   literalsConversion.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:12:56 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/28 01:29:33 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERALSCONVERSION_HPP
#define LITERALSCONVERSION_HPP
#include <iostream>
#include <climits>
#include <cfloat>
#include <cmath>

//literalsConversion.cpp
int		isPseudo(std::string literal);
int		literalsConversion(std::string literal);
//literals.cpp
void	charLiteral(std::string literal, bool (&check)[5]);
void	intLiteral(std::string literal, bool (&check)[5]);
void	floatLiteral(std::string literal, bool (&check)[5]);
void	doubleLiteral(std::string literal, bool (&check)[5]);

#endif
