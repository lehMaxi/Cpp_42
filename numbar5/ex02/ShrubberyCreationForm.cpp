/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:10:54 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/17 14:40:35 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(str target)
{
	_name = "ShrubberyCreationForm";
	_toSign = 145;
	_toExecute = 137;
	_signed = false;
	_target = target;
	std::cout << "create a shrubbery" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	*this = src;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rSym)
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

void	ShrubberyCreationForm::call()
{
	createShrubbery(_target);
}

void	ShrubberyCreationForm::createShrubbery(str target)
{
	std::cout << target << std::endl;
}
