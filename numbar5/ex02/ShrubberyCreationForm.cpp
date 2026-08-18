/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:10:54 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/18 13:52:01 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(str target): AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
	std::cout << "create a shrubbery" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): AForm(src)
{
	_target = src._target;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rSym)
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

void	ShrubberyCreationForm::call()
{
	createShrubbery(_target);
}

void	ShrubberyCreationForm::createShrubbery(str target)
{
	str				outfile = target + "_shrubbery";
	std::ofstream 	output;
	output.open(outfile.c_str);
	output << "     ~~    ~~" << std::endl;
	output << "   { ~ }  { ~}" << std::endl;
	output << "  { ~   }{ ~ }" << std::endl;
	output << "   {   \\ / }" << std::endl;
	output << "    ~~~~||~~" << std::endl;
	output << "        ||" << std::endl;
	output << "       //\\" << std::endl;
	output << "      / ||\\" << std::endl;
}
