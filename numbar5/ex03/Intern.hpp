/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:02:38 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/26 14:35:27 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Bureaucrat;
class	AForm;
class	Intern;

struct Orders
{
	str		formName;
	AForm *	((Intern::*action)(str target));
};

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern &	operator=(Intern const &src);

		AForm *		makeForm(str form, str target) const;

	private:
		AForm *		shrubbery(str target);
		AForm *		robotomy(str target);
		AForm *		president(str target);
		Orders		templates[3];
};

#endif
