/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:38:36 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/30 17:53:53 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	fun(const int &i)
{
	std::cout << "array contains: " << i << std::endl;
}

void	fun(const char &i)
{
	std::cout << "array contains: " << i << std::endl;
}

void	fun(const std::string &i)
{
	std::cout << "array contains: " << i << std::endl;
}

int main(void)
{
	int			len = 5;
	int			arr_int[] = {0, 1, 2, 3, 4};
	iter(arr_int, len, fun);
	std::cout << "---------------" << std::endl;
	char		arr_char[] = {'a', 'b', 'c', 'd', 'e'};
	iter(arr_char, len, fun);
	std::cout << "---------------" << std::endl;
	std::string	arr_str[] = {"aaa", "bbb", "ccc", "ddd", "eee"};
	iter(arr_str, len, fun);
	return (0);
}