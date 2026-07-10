/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 13:11:58 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/03 12:27:48 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "libraries.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContacts();

	private:
		int			currentContact;
		int			contactCount;
		Contact		bookContent[8];
};
