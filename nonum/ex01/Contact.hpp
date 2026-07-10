/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 10:44:23 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/03 13:39:38 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include "libraries.hpp"

class	Contact
{
	public:
		Contact();
		~Contact();
		setContact
		(
			str	first,
			str	last,
			str	nick,
			str	phone,
			str	dark
		);
		str	getFirstName() const;
		str	getLastName() const;
		str	getNickName() const;
		str	getPhoneNumber() const;
		str	getDarkestSecret() const;

	private:
		str	firstName;
		str	lastName;
		str	nickName;
		str	phoneNumber;
		str	darkestSecret;
};

#endif
