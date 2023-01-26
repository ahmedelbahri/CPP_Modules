/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:54:32 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 17:15:33 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : name("AForm"), grade_to_sign(1), sign(false), grade_to_exec(1)
{
	return;
}

AForm::AForm(const std::string name, const int grade_to_sign, const int grade_to_exec) : name(name), grade_to_sign(grade_to_sign), sign(false), grade_to_exec(grade_to_exec)
{
	if (this->grade_to_exec < 1 || this->grade_to_sign < 1)
		throw (GradeTooHighException());
	if (this->grade_to_exec > 150 || this->grade_to_sign > 150)
		throw (GradeTooLowException());
	return;
}

AForm::AForm(const AForm &Aform) : name(Aform.name), grade_to_sign(Aform.grade_to_sign), sign(Aform.sign), grade_to_exec(Aform.grade_to_exec)
{
	return;
}

AForm	&AForm::operator = (const AForm &Aform)
{
	this->sign = Aform.sign;
	return (*this);
}

const std::string	AForm::get_name(void) const
{
	return (this->name);
}

int	AForm::get_grade_to_sign(void) const
{
	return (this->grade_to_sign);
}

bool	AForm::get_sign(void) const
{
	return (this->sign);
}

int	AForm::get_grade_to_exec(void) const
{
	return (this->grade_to_exec);
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.get_grade() <= this->grade_to_sign)
		this->sign = true;
	else
		throw (GradeTooLowException());
}

const char *AForm::GradeTooHighException::what(void) const throw ()
{
	return ("The grade is too high.");
}

const char *AForm::GradeTooLowException::what(void) const throw ()
{
	return ("The grade is too low.");
}

const char *AForm::UnsignedFormException::what(void) const throw ()
{
	return ("The Form is not signed.");
}

AForm::~AForm(void)
{
	return;
}

/*-----------------------------------------------------------------------------*/

std::ostream	&operator << (std::ostream &Cout, const AForm &Aform)
{
	Cout << Aform.get_name() << ", Aform gradeToExec " << Aform.get_grade_to_exec() << ", Aform gradeToSign " << Aform.get_grade_to_sign() << ".";
	return (Cout);
}
