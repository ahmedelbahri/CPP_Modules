/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:19:21 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 18:05:14 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
						Bureaucrat(void);
						Bureaucrat(std::string name, int grade);
						Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat			&operator = (const Bureaucrat &bureaucrat);
	int					get_grade(void) const;
	const std::string	get_name(void) const;
	void				increment(void);
	void				decrement(void);
	void				signAForm(AForm &Aform);
	void				executeForm(const AForm &form);
						~Bureaucrat(void);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what(void) const throw ();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw ();
	};

};

std::ostream	&operator << (std::ostream &cout, const Bureaucrat &bureaucrat);

#endif
