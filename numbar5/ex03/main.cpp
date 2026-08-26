/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:32:59 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/22 11:46:59 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat god = Bureaucrat("GOD", 2);
	Bureaucrat notGod = Bureaucrat("Lethargy", 150);
	ShrubberyCreationForm bush = ShrubberyCreationForm("My");
	RobotomyRequestForm swirr = RobotomyRequestForm("Arthur Dent");
	PresidentialPardonForm doNotTouch = PresidentialPardonForm("Ford Prefect");

	god.signForm(bush);
	notGod.executeForm(bush);
	god.executeForm(bush);
	notGod.signForm(swirr);
	god.signForm(swirr);
	god.signForm(doNotTouch);
	god.executeForm(swirr);
	god.executeForm(doNotTouch);

	return 0;
}
