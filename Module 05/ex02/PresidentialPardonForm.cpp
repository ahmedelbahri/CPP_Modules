/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:56:50 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 18:10:09 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
	target = "";
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &president) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = president.target;
	return;
}

PresidentialPardonForm	&PresidentialPardonForm::operator = (const PresidentialPardonForm &president)
{
	this->target = president.target;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->get_sign())
		throw (UnsignedFormException());
	if (bureaucrat.get_grade() > get_grade_to_exec())
		throw (GradeTooLowException());
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}
