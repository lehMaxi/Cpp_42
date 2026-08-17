/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 13:34:03 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/14 18:42:41 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Form
{
	public:

		Form(str name, int toSign, int toExecute);
		Form(Form const &src);
		~Form();

		Form & operator=(Form  const &rSym);

		void	beSigned(Bureaucrat &signer);

		void	setName(str name);
		void	setSigned(bool sign);
		void	setToSign(int grade);
		void	setToExecute(int grade);

		str		getName() const;
		bool	getSigned() const;
		int		getToSign() const;
		int		getToExecute() const;

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
		str 	_name;
		bool	_signed;
		int		_toSign;
		int		_toExecute;
};

std::ostream &	operator<<(std::ostream & o, Form const &rSym);

#endif
