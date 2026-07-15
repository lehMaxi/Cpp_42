/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:14:09 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/15 12:54:42 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	PhoneBook;
	str			add = "ADD";
	str			search = "SEARCH";
	str			exit = "EXIT";
	str			command;

	std::cout << "Hello, let me be an open book to you!" << std::endl;
	while (1)
	{
		std::cout << "Type: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, command);
		if (!command.compare(add))
			PhoneBook.addContact();
		else if (!command.compare(search))
			PhoneBook.searchContacts();
		else if (!command.compare(exit))
		{
			std::cout << "Bye bye beautiful!" << std::endl;
			break;
		}
		system("clear");
	}
	sleep(1);
	return 0;
}
