/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 13:54:04 by mlehmann          #+#    #+#             */
/*   Updated: 2026/06/30 14:19:27 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;

	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	else
	{
		while(i < argc)
		{
			while(argv[i][j])
			{
				std::cout << (char) std::toupper(argv[i][j]);
				j++;
			}
			std::cout << std::endl;
			j = 0;
			i++;
		}
	}
	return 0;
}
