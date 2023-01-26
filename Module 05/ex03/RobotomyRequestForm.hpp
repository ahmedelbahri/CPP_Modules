/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:56:11 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 19:47:49 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string			target;
public:
						RobotomyRequestForm(void);
						RobotomyRequestForm(const RobotomyRequestForm &robo);
						RobotomyRequestForm(std::string target);
	RobotomyRequestForm	&operator = (const RobotomyRequestForm &robo);
	void				execute(const Bureaucrat &bureaucrat) const;
						~RobotomyRequestForm(void);
};

#endif
