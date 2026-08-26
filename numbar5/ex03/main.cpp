/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:32:59 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/26 15:09:49 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat god = Bureaucrat("GOD", 2);
	Intern notGod = Intern();
	AForm *bush = notGod.makeForm("shrubbery creation", "My");
	AForm *swirr = notGod.makeForm("robotomy request", "Arthur Dent");
	AForm *doNotTouch = notGod.makeForm("presidential pardon", "Ford Prefect");

	god.signForm(bush);
	god.executeForm(bush);
	god.signForm(swirr);
	god.signForm(doNotTouch);
	god.executeForm(swirr);
	god.executeForm(doNotTouch);

	delete(bush);
	delete(swirr);
	delete(doNotTouch);
	return 0;
}
