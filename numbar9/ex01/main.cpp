/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:10:07 by mlehmann          #+#    #+#             */
/*   Updated: 2026/10/02 14:26:50 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Use by giving a reverse polish therm, eg: \" 3 5 + \"" << std::endl;
		return 1;
	}
	else
	{
		try
		{
			RPN instance(av[1]);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		return 0;
	}
}
