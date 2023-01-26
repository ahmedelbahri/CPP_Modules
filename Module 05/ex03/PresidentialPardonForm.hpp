/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:56:46 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 19:47:34 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string 			target;
public:
							PresidentialPardonForm(void);
							PresidentialPardonForm(std::string target);
							PresidentialPardonForm(const PresidentialPardonForm &president);
	PresidentialPardonForm	&operator = (const PresidentialPardonForm &president);
	void					execute(const Bureaucrat &bureaucrat) const;
							~PresidentialPardonForm(void);
};

#endif
