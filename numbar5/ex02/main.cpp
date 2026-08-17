/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:32:59 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/17 14:35:31 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat god = Bureaucrat("GOD", 2);
	Bureaucrat notGod = Bureaucrat("Lethargy", 150);
	ShrubberyCreationForm bush = SchrubberyCreationForm("Bushy");

	std::cout << bush << std::endl;
	god.signForm(bush);
	bush.execute(&god);

	return 0;
}
