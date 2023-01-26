/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:39:15 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 22:59:40 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return;
}

Intern::Intern(const Intern &intern)
{
	(*this) = intern;
	return;
}

Intern	&Intern::operator = (const Intern &intern)
{
	(void)intern;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target) const
{
	std::string	forms[] = {"shrobbery creation", "robotomy request", "presidential pardon"};
	int			i;
	for (i = 0;forms[i] != name; i++)
		if (i >= 3)
		{
			std::cerr << "Invalid form name." << std::endl;
			return (NULL);
		}
	Form		*form;
	switch (i)
	{
		case (0):
			form = new ShrubberyCreationForm(target);
		case (1):
			form = new RobotomyRequestForm(target);
		case (2):
			form = new PresidentialPardonForm(target);
	}
	std::cout << "Intern created." << std::endl;
	return (form);
}

Intern::~Intern(void)
{
	return;
}
