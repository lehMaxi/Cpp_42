/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:13:21 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/14 19:15:16 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Bureaucrat::Bureaucrat(str name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeToLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeToHighException();
	else
		this->_grade = grade;
	std::cout << "[C] " << name << " now in office, workin as grade " << grade << " bureaucrat." << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	std::cout << "[CC] " << this->_name << " now in office, workin as grade " << this->_grade << " bureaucrat." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "[D] " << this->_name << " is now out of office." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rSym)
{
	if (this != &rSym)
	{
		this->_name = rSym.getName();
		this->_grade = rSym.getGrade();
	}
	std::cout << "[CR] " << this->_name << " now in office, workin as grade " << this->_grade << " bureaucrat." << std::endl;
	return *this;
}

void	Bureaucrat::setName(str name)
{
	this->_name = name;
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeToLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeToHighException();
	else
		this->_grade = grade;
}

str		Bureaucrat::getName() const
{
	return this->_name;
}

int		Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::promote()
{
	if (this->_grade < 2)
		throw Bureaucrat::GradeToHighException();
	else
		this->_grade--;
}

void	Bureaucrat::demote()
{
	if (this->_grade > 149)
		throw Bureaucrat::GradeToLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form &papers)
{
	try
	{
		papers.beSigned(*this);
	}
	catch (std::exception & e)
	{
		std::cout << _name << " is forbidden to sign " << papers.getName() << " due to their lack of status, at least a grade of " << papers.getToSign() << " would be needed." << std::endl;
		return;
	}
	std::cout << _name << " signed " << papers.getName() << std::endl;
}

const char *	Bureaucrat::GradeToHighException::what() const throw()
{
	return ("This Bureaucrat can not be of a grade higher than 1, that would be a violation of article a42-7-d, which would be considered unlawful apotheosis!");
}

const char *	Bureaucrat::GradeToLowException::what() const throw()
{
	return ("This Bureaucrat can not be of a grade lower than 150, that would be a violation of article b42-4-y, which would be considered accidential burrying alive!");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const &rSym)
{
	o << rSym.getName() << " bureaucrat, grade: " << rSym.getGrade();
	return o;
}

