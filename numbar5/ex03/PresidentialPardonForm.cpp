/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:30:28 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/22 11:53:16 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(str target): AForm("PresidentialPardonForm", 25, 5)
{
	_target = target;
	std::cout << "pardon someone criminaly aclaimed" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): AForm(src)
{
	_target = src._target;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	& PresidentialPardonForm::operator=(PresidentialPardonForm const &rSym)
{
	if (this != &rSym)
	{
		_target = rSym._target;
		_name = rSym._name;
		_signed = rSym._signed;
		_toSign = rSym._toSign;
		_toExecute = rSym._toExecute;
	}
	return *this;
}

void	PresidentialPardonForm::call()
{
	pardon(_target);
}

void	PresidentialPardonForm::pardon(str target)
{
	std::cout << "The delinquent known as" << target << "has been pardoned by Zaphod Beeblebrox. Seize any further sanctions!" << std::endl;
}
