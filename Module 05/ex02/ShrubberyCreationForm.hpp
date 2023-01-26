/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:55:56 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 18:33:38 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
	std::string 			target;
public:
							ShrubberyCreationForm(void);
							ShrubberyCreationForm(std::string target);
							ShrubberyCreationForm(const ShrubberyCreationForm &Shrub);
	ShrubberyCreationForm	&operator = (const ShrubberyCreationForm &bureaucrat);
	void					execute(const Bureaucrat &bureaucrat) const;
							~ShrubberyCreationForm(void);
};

#endif
