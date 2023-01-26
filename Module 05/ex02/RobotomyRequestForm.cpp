/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:56:20 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 18:13:52 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
	target = "";
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robo) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = robo.target;
	return;
}

RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &robo)
{
	this->target = robo.target;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->get_sign())
		throw (UnsignedFormException());
	if (bureaucrat.get_grade() > get_grade_to_exec())
		throw (GradeTooLowException());
	static int a;
	std::cout << "drilling noises..." << std::endl;
	if (a)
	{
		std::cout << this->target << " has been robotomized successfully." << std::endl;
		a = 0;
	}
	else
	{
		std::cout << this->target << " the robotomy failed." << std::endl;
		a = 1;
	}
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}
