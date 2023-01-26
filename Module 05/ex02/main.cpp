/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:51:13 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 18:35:12 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	try
	{
		Bureaucrat				bureaucrat("bureaucrat", 1);
		ShrubberyCreationForm	Shrub("home");
		RobotomyRequestForm		robo("factory");
		PresidentialPardonForm	president("office");

		bureaucrat.signAForm(Shrub);
		bureaucrat.signAForm(robo);
		bureaucrat.signAForm(president);

		bureaucrat.executeForm(Shrub);
		bureaucrat.executeForm(robo);
		bureaucrat.executeForm(robo);
		bureaucrat.executeForm(president);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}