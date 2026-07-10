/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 12:25:24 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/10 13:52:06 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std:cout << "New Contact" << std::endl;
}

Contact::~Contact()
{
	std:cout << "Contact gone" << std::endl;
}

Contact::setContact(str first, str last, str nick, str phone, str dark)
{
	this->firstName = first;
	this->lastName = last;
	this->nickName = nick;
	this->phoneNumber = phone;
	this->darkestSecret = dark;
}

str	Contact::getFirstName() const
{
	return (this->firstName);
}

str	Contact::getLastName() const
{
	return (this->lastName);
}

str	Contact::getNickName() const
{
	return (this->nickName);
}

str	Contact::getPhoneName() const
{
	return (this->phoneNumber);
}

str	Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}
