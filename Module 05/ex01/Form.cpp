/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:33:00 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/24 22:30:40 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("Form"), grade_to_sign(1), sign(false), grade_to_exec(1)
{
	return;
}

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_exec) : name(name), grade_to_sign(grade_to_sign), sign(false), grade_to_exec(grade_to_exec)
{
	if (this->grade_to_exec < 1 || this->grade_to_sign < 1)
		throw (GradeTooHighException());
	if (this->grade_to_exec > 150 || this->grade_to_sign > 150)
		throw (GradeTooLowException());
	return;
}

Form::Form(const Form &form) : name(form.name), grade_to_sign(form.grade_to_sign), sign(form.sign), grade_to_exec(form.grade_to_exec)
{
	return;
}

Form	&Form::operator = (const Form &form)
{
	this->sign = form.sign;
	return (*this);
}

const std::string	Form::get_name(void) const
{
	return (this->name);
}

int	Form::get_grade_to_sign(void) const
{
	return (this->grade_to_sign);
}

bool	Form::get_sign(void) const
{
	return (this->sign);
}

int	Form::get_grade_to_exec(void) const
{
	return (this->grade_to_exec);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.get_grade() <= this->grade_to_sign)
		this->sign = true;
	else
		throw (GradeTooLowException());
}

const char *Form::GradeTooHighException::what(void) const throw ()
{
	return ("The grade is too high.");
}

const char *Form::GradeTooLowException::what(void) const throw ()
{
	return ("The grade is too low.");
}

Form::~Form(void)
{
	return;
}

/*-----------------------------------------------------------------------------*/

std::ostream	&operator << (std::ostream &Cout, const Form &form)
{
	Cout << form.get_name() << ", form gradeToExec " << form.get_grade_to_exec() << ", form gradeToSign " << form.get_grade_to_sign() << ".";
	return (Cout);
}
