/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:19:24 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 19:46:40 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Bureaucrat"), grade(1)
{
	return;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name), grade(bureaucrat.grade)
{
	return;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &bureaucrat)
{
	this->grade = bureaucrat.grade;
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw ()
{
	return ("The grade is too high.");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw ()
{
	return ("The grade is too low.");
}

int	Bureaucrat::get_grade(void) const
{
	return (this->grade);
}

const std::string	Bureaucrat::get_name(void) const
{
	return (this->name);
}

void	Bureaucrat::increment(void)
{
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decrement(void)
{
	if (grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->grade++;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.get_name() << "." << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << this->name << "couldn’t sign " << form.get_name() << " because " << e.what() << "." << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.get_name() << "." << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

/*-----------------------------------------------------------------------------*/

std::ostream	&operator << (std::ostream &Cout, const Bureaucrat &bureaucrat)
{
	Cout << bureaucrat.get_name() << ", bureaucrat grade " << bureaucrat.get_grade() << ".";
	return (Cout);
}
