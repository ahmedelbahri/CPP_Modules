/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:08:09 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/12/27 15:50:18 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl_inctance;
	harl_inctance.complain("DEBUG");
	harl_inctance.complain("INFO");
	harl_inctance.complain("WARNING");
	harl_inctance.complain("ERROR");
	return (0);
}
