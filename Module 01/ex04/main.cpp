/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 10:29:56 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/24 20:45:01 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replace_word(char **av, std::string content)
{
	int			j;
	int			k;
	int			i = 0;
	std::string	res;
	while (content[i])
	{
		j = 0;
		k = i;
		while (strlen(av[2]) > 0 && content[k] == av[2][j])
			j++, k++;
		if (j == (int)strlen(av[2]) && j > 0)
		{
			res.append(av[3]);
			i = k - 1;
		}
		else
			res.append(content.substr(i, 1));
		i++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream	in_file(av[1]);
		if (!in_file.is_open())
		{
			std::cerr << "Error:\n No such file." << std::endl;
			return (1);
		}
		std::string		content;
		std::string		res;
		getline(in_file, content, '\0');
		in_file.close();
		res = replace_word(av, content);
		std::string		file_name(av[1]);
		file_name.append(".replace");
		std::ofstream	out_file(file_name);
		if (!out_file.is_open())
		{
			std::cerr << "Error:\n couldn't create file." << std::endl;
			return (1);
		}
		out_file << res;
		out_file.close();
	}
	else
	{
		std::cerr << "Error:\n Wrong arguments." << std::endl;
		return (1);
	}
	return (0);
}
