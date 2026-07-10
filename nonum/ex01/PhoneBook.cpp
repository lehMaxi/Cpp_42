/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:39:27 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/10 15:18:00 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): currentContact(0), contactCount(0)
{ 
	std::cout << "New Book opened!" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Book closed!" << std::endl;
}

void	PhoneBook::addContact()
{
	str	input[5];

	if (this->currentContact > 7)
		this->currentContact = 0;
	if (this->contactCount > 8)
		std::cout << "Book full, overwriting" << getFirstName(this->bookContent[this->currentContact]) << std::endl;
	std::cout << "Input first name please:" << std::endl;
	getline(cin, input[0]);
	std::cout << "Input last name please:" << std::endl;
	getline(cin, input[1]);
	std::cout << "Input nick name please:" << std::endl;
	getline(cin, input[2]);
	std::cout << "Input phone number please:" << std::endl;
	getline(cin, input[3]);
	std::cout << "Input their darkes secret if you dare:" << std::endl;
	getline(cin, input[4]);
	this->bookContent[this->currentContact].setContact(input[0], input[1], input[2], input[3],input[4]);
	this->currentContact++;
	this->contactCount++;
}

void	PhoneBook::searchContacts()
{
	int	index;
	int contacts = this->contactCount;
	str	data[4];

	std::cout << "|searching input:...                     |" << std::endl;
	std::cout << "|----following contacts are available----|" << std::endl;
	std::cout << "|--index--|first name|last name|nick name|" << std::endl;
	if (contacts > 7)
		contacts = 8;
	while (index < contacts)
	{
		data[0] = to_string(index);
		data[1] = getFirstName(this->bookContent[index]);
		data[2] = getLastName(this->bookContent[index]);
		data[3] = getNickName(this->bookContent[index]);
		for(i = 1; i < 4; ++i)
		{
			if (data[i].length > 0)
				data[i] = data[i].substr(0, 9) + ".";
		}
		for (j = 1; j < 4; ++j)
			std::cout << setw

		index++;
	}
}
