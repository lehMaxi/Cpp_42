/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 15:13:56 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/18 13:06:22 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(str name, int toSign, int toExecute) : _name(name)
{
	if (toSign > 150 || toExecute > 150)
		throw AForm::GradeToLowException();
	else if (toSign < 1 || toExecute < 1)
		throw AForm::GradeToHighException();
	else
	{
		_toSign = toSign;
		_toExecute = toExecute;
	}
	_signed = false;
	std::cout << "[C] A new form is created it will be used to: ";
}

AForm::AForm(AForm const &src)
{
	*this = src;
}

AForm::~AForm()
{
}

AForm & AForm::operator=(AForm  const &rSym)
{
	if (this != &rSym)
	{
		_name = rSym.getName();
		_signed = rSym.getSigned();
		_toSign = rSym.getToSign();
		_toExecute = rSym.getToExecute();
	}
	return *this;
}

void	AForm::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() <= _toSign)
		 _signed = true;
	else
		throw AForm::GradeToLowException();
}

void	AForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() <= _toExecute && _signed == true)
		call();
	else
		throw AForm::GradeToLowException();
}

void	AForm::setName(str name)
{
	_name = name;
}

void	AForm::setSigned(bool sign)
{
	_signed = sign;
}

void	AForm::setToSign(int grade)
{
	if (grade > 150)
		throw AForm::GradeToLowException();
	else if (grade < 1)
		throw AForm::GradeToHighException();
	else
	_toSign = grade;
}

void	AForm::setToExecute(int grade)
{
	if (grade > 150)
		throw AForm::GradeToLowException();
	else if (grade < 1)
		throw AForm::GradeToHighException();
	else
	_toExecute = grade;
}

str		AForm::getName() const
{
	return _name;
}

bool	AForm::getSigned() const
{
	return _signed;
}

int		AForm::getToSign() const
{
	return _toSign;
}

int		AForm::getToExecute() const
{
	return _toExecute;
}

const char *	AForm::GradeToHighException::what() const throw()
{
	return ("This Form can not require a grade higher than 1, that would be a violation of article a42-17-g, which would be considered impropper imobilisation!");
}

const char *	AForm::GradeToLowException::what() const throw()
{
	return ("This Form can not require a grade lower than 150, that would be a violation of article a42-14-j, which would be considered involuntary debilitating defecation!");
}

std::ostream & operator<<(std::ostream & o, AForm const &rSym)
{
	if (rSym.getSigned() == true)
		o << "The " << rSym.getName() << " requires grade " << rSym.getToSign() << " to get signed and grade " << rSym.getToExecute() << " to execute and is currently signed.";
	else
		o << "The " << rSym.getName() << " requires grade " << rSym.getToSign() << " to get signed and grade " << rSym.getToExecute() << " to execute and is currently unsigned.";
	return o;
}
