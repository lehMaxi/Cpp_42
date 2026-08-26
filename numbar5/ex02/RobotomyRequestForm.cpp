/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:32:10 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/26 15:20:32 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(str target): AForm("RobotomyRequestForm", 72, 45)
{
	_target = target;
	std::cout << "robotomize the people" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): AForm(src)
{
	_target = src._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	& RobotomyRequestForm::operator=(RobotomyRequestForm const &rSym)
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

void	RobotomyRequestForm::call()
{
	robotomize(_target);
}

void	RobotomyRequestForm::robotomize(str target)
{
	std::cout << "whirr... ...whirr whirr..." << std::endl;
	std::cout << "whirr whirr... ...screeeeeEEEEEE" << std::endl;
	srand(time(NULL));
	int chance = rand() % 2;
	if (chance)
	{
		std::cout << "The robotomy was unsuccessful..." << std::endl;
		std::cout << "Maybe try it again?" << std::endl;
		std::cout << "whirr?" << std::endl;
	}
	else
	{
		std::cout << target << "has been robotomized successfully" << std::endl;
	}
}
