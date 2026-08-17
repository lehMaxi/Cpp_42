/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 15:13:56 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/14 19:15:54 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(str name, int toSign, int toExecute) : _name(name)
{
	if (toSign > 150 || toExecute > 150)
		throw Form::GradeToLowException();
	else if (toSign < 1 || toExecute < 1)
		throw Form::GradeToHighException();
	else
	{
		_toSign = toSign;
		_toExecute = toExecute;
	}
	_signed = false;
}

Form::Form(Form const &src)
{
	*this = src;
}

Form::~Form()
{
}

Form & Form::operator=(Form  const &rSym)
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

void	Form::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() <= _toSign)
		 _signed = true;
	else
		throw Form::GradeToLowException();
}

void	Form::setName(str name)
{
	_name = name;
}

void	Form::setSigned(bool sign)
{
	_signed = sign;
}

void	Form::setToSign(int grade)
{
	if (grade > 150)
		throw Form::GradeToLowException();
	else if (grade < 1)
		throw Form::GradeToHighException();
	else
	_toSign = grade;
}

void	Form::setToExecute(int grade)
{
	if (grade > 150)
		throw Form::GradeToLowException();
	else if (grade < 1)
		throw Form::GradeToHighException();
	else
	_toExecute = grade;
}

str		Form::getName() const
{
	return _name;
}

bool	Form::getSigned() const
{
	return _signed;
}

int		Form::getToSign() const
{
	return _toSign;
}

int		Form::getToExecute() const
{
	return _toExecute;
}

const char *	Form::GradeToHighException::what() const throw()
{
	return ("This Form can not require a grade higher than 1, that would be a violation of article a42-17-g, which would be considered impropper imobilisation!");
}

const char *	Form::GradeToLowException::what() const throw()
{
	return ("This Form can not require a grade lower than 150, that would be a violation of article a42-14-j, which would be considered involuntary debilitating defecation!");
}

std::ostream & operator<<(std::ostream & o, Form const &rSym)
{
	if (rSym.getSigned() == true)
		o << "The form " << rSym.getName() << " requires grade " << rSym.getToSign() << " to get signed and grade " << rSym.getToExecute() << " to execute and is currently signed.";
	else
		o << "The form " << rSym.getName() << " requires grade " << rSym.getToSign() << " to get signed and grade " << rSym.getToExecute() << " to execute and is currently unsigned.";
	return o;
}
