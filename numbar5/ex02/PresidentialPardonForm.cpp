/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:30:28 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/17 13:35:11 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(str target)
{
	_target = target;
	std::cout << "pardon someone criminaly aclaimed" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
	*this = src;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	& PresidentialPardonForm::operator=(PresidentialPardonForm const &rSym)
{
	if (*this != rSym)
	{
		_target = rSym._target;
		_name = rSym._name;
		_signed = rSym._signed;
		_toSign = rSym._toSign;
		_toExecute = rSym._toExecute;
	}
	return *this
}

void	PresidentialPardonForm::call()
{

}

void	PresidentialPardonForm::pardon(str target)
{
}
