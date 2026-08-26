/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 13:34:03 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/26 15:14:16 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class AForm
{
	public:

		AForm(str name, int toSign, int toExecute);
		AForm(AForm const &src);
		virtual ~AForm();

		AForm & operator=(AForm  const &rSym);

		void			beSigned(Bureaucrat &signer);
		void			execute(Bureaucrat const &executor);
		virtual void	call() = 0;

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
		
	protected:
		str		_target;
		str 	_name;
		bool	_signed;
		int		_toSign;
		int		_toExecute;
};

std::ostream &	operator<<(std::ostream & o, AForm const &rSym);

#endif
