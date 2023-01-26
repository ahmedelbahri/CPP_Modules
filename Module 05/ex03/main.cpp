/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:51:13 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 19:54:09 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main (void)
{
	{
		Intern	someRandomIntern;
		Form	*rrf;
		rrf = someRandomIntern.makeForm("shrobbery creation", "klaikel");
	}
	{
		Intern	someRandomIntern;
		Form	*rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	{
		Intern	someRandomIntern;
		Form	*rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "abdelbar");
	}
	{
		Intern	someRandomIntern;
		Form	*rrf;
		rrf = someRandomIntern.makeForm("testing...", "test");
	}
	return (0);
}