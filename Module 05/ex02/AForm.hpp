/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:54:43 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 18:09:25 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAFORM_HPP
#define AAFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	const int			grade_to_sign;
	bool				sign;
	const int			grade_to_exec;
public:
						AForm(void);
						AForm(const std::string name, const int grade_to_sign, const int grade_to_exec);
						AForm(const AForm &Aform);
	AForm				&operator = (const AForm &Aform);
	const std::string	get_name(void) const;
	int					get_grade_to_sign(void) const;
	bool				get_sign(void) const;
			int			get_grade_to_exec(void) const;
	void				beSigned(Bureaucrat &bureaucrat);
	virtual void		execute(const Bureaucrat &bureaucrat) const = 0;
	virtual				~AForm(void);

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

	class UnsignedFormException : public std::exception
	{
	public:
		const char *what() const throw ();
	};
	
};

std::ostream	&operator << (std::ostream &cout, const AForm &Aform);

#endif
