/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:03:05 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/26 14:49:43 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	templates[0].formName = "shrubbery creation";
	templates[0].action = &Intern::shrubbery;
	templates[1].formName = "robotomy request";
	templates[1].action = &Intern::robotomy;
	templates[2].formName = "presidential pardon";
	templates[2].action = &Intern::president;

//	templates = {{"shrubbery creation", &Intern::shrubbery}, {"robotomy request", &Intern::robotomy}, {"presidential pardon", &Intern::president}};
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern &	Intern::operator=(Intern const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 3; i++)
			templates[i] = src.templates[i];
	}
	return *this;
}

AForm *		Intern::makeForm(str form, str target) const
{
	AForm * coffee = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (form == templates[i].formName)
		{
			coffee = (const_cast<Intern *>(this)->*templates[i].action)(target);
			break;
		}
	}
	if (!coffee)
		std::cout << "A tiny intern is not able to create a form to " << form << std::endl;
	else
		std::cout << "An intern created a form called " << coffee->getName() <<std::endl;
	return coffee;
}

AForm *		Intern::shrubbery(str target)
{
	return new ShrubberyCreationForm(target);
}

AForm *		Intern::robotomy(str target)
{
	return new RobotomyRequestForm(target);
}

AForm *		Intern::president(str target)
{
	return new PresidentialPardonForm(target);
}
