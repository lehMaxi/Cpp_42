/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:32:59 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/14 19:14:34 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main()
{
	Bureaucrat god = Bureaucrat("GOD", 2);
	Bureaucrat notGod = Bureaucrat("Lethargy", 150);
	Form	oneForm = Form("Prayer", 150, 150);
	Form	twoForm = Form("Redemtion", 100, 120);
	Form	threeForm = Form("Vindicate", 50, 100);
	Form	fourForm = Form("Rapture", 1, 1);
	std::cout << god << std::endl;
	god.signForm(fourForm);
	std::cout << fourForm << std::endl;
	std::cout << threeForm << std::endl;
	std::cout << twoForm << std::endl;
	std::cout << oneForm << std::endl;
	notGod.signForm(twoForm);
	notGod.signForm(oneForm);
	std::cout << twoForm << std::endl;
	std::cout << oneForm << std::endl;

	try
	{
		god.promote();
	}
	catch (std::exception & e)
	{
		std::cout << god << " could not get promoted :(" << std::endl; 
	}
	std::cout << god << std::endl;
	std::cout << notGod << std::endl;
	try
	{
		notGod.demote();
	}
	catch (std::exception & e)
	{
		std::cout << notGod << " could not get demoted :(" << std::endl; 
	}
	std::cout << god << std::endl;
	std::cout << notGod << std::endl;
	return 0;
}
