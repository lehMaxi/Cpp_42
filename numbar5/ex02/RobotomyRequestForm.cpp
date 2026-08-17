/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:32:10 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/17 13:34:11 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(str target)
{
	_target = target;
	std::cout << "robotomize the people" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
	*this = src;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	& RobotomyRequestForm::operator=(RobotomyRequestForm const &rSym)
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

void	RobotomyRequestForm::call()
{

}

void	RobotomyRequestForm::robotomize(str target)
{
}
