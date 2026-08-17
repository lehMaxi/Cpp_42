/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 15:52:25 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/14 17:13:07 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <climits>

typedef	std::string	str;
class Form;

class Bureaucrat
{
	public:
		Bureaucrat(str name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		Bureaucrat& operator=(Bureaucrat const &rSym);
		
		void	setName(str name);
		void	setGrade(int grade);

		str	getName() const;
		int	getGrade() const;

		void	promote();
		void	demote();
		void	signForm(Form papers);

		class GradeToHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
		class GradeToLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

	private:
		str	_name;
		int	_grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const &rSym);

#endif
