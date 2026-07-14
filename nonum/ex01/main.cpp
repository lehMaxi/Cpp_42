/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:14:09 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/14 14:54:29 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.hpp"

int	main()
{
	PhoneBook	PhoneBook;
	str			add = "ADD";
	str			search = "SEARCH";
	str			exit = "EXIT";
	str			command;

	std::cout << "Hello, let me be an open book to you!\n Type: ADD, SEARCH or EXIT" << std::endl;
	while (1)
	{
		std::getline(std::cin, command);
		if (!command.compare(add))
			PhoneBook.add_contact();
		else if (!command.compare(search))
			PhoneBook.search_contact();
		else if (!command.compare(exit))
		{
			
		}
	}
	sleep(1);
	return 0;
}
