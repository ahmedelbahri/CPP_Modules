/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 02:17:33 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/28 12:01:16 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ABC.hpp"

int	main(void)
{
	Base *base = generate();
	std::cout << "Pointer identification result: ";
	identify(base);
	std::cout << "Reference identification result: ";
	identify(*base);
	delete base;
	return (0);
}