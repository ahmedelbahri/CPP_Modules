/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:51:11 by ahel-bah          #+#    #+#             */
/*   Updated: 2023/01/28 01:59:04 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <cstdint>
#include <iostream>

typedef struct	s_data
{
	int			blackHole;
	double		level;
}				Data;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif
