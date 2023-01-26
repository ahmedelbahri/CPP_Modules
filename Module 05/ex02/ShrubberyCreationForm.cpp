/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:55:59 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/25 20:08:28 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	target = "";
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &Shrub) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = Shrub.target;
	return;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &Shrub)
{
	this->target = Shrub.target;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->get_sign())
		throw (UnsignedFormException());
	if (bureaucrat.get_grade() > get_grade_to_exec())
		throw (GradeTooLowException());
	std::ofstream out_file(target + "_shrubbery");
	if (!out_file.is_open())
	{
		std::cerr << "Error:\n couldn't create file." << std::endl;
		return;
	}
	out_file << "The Wise Tree:\n\n\
              _{\\ _{\\{\\/}/}/}__\n\
             {/{/\\}{/{/\\}(\\}{/\\} _\n\
            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n\
         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n\
        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n\
       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n\
      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n\
      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n\
     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n\
      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n\
       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n\
      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n\
       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n\
         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n\
          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n\
            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n\
             {/{\\{\\{\\/}/}{\\{\\\\}/}\n\
              {){/ {\\/}{\\/} \\}\\}\n\
              (_)  \\.-'.-/\n\
          __...--- |'-.-'| --...__\n\
   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n\
 -\"    ' .  . '    |.'-._| '  . .  '   jro\n\
 .  '-  '    .--'  | '-.'|    .  '  . '\n\
          ' ..     |'-_.-|\n\
  .  '  .       _.-|-._ -|-._  .  '  .\n\
              .'   |'- .-|   '.\n\
  ..-'   ' .  '.   `-._.-�   .'  '  - .\n\
   .-' '        '-._______.-'     '  .\n\
        .      ~,\n\
    .       .   /\\   .    ' '-.\n\
    ___________/  \\____________\n\
   /  Why is it, when you want \\\n\
  |  something, it is so damn   |\n\
  |    much work to get it?     |\n\
   \\___________________________/" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}
