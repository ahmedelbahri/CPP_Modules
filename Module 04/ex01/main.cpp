/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:09:30 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/20 16:47:53 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	{
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		std::cout << i->getType() << std::endl;
		std::cout << j->getType() << std::endl;

		delete j; //should not create a leak
		delete i;
	}
	{
		Animal	*arr[10];

		for (int index = 0; index < 10; index++)
		{
			std::cout << "index " << index << std::endl;
			if (index < 5)
				arr[index] = new Cat();
			else
				arr[index] = new Dog();
			arr[index]->makeSound();
		}
		for (int index = 0; index < 10; index++)
		{
			std::cout << "index " << index << std::endl;
			delete arr[index];
		}
	}
	{
		Cat cat;
		Cat caat;

		cat = caat;
	}
	return (0);
}
