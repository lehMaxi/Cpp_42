/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:32:59 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/14 12:59:47 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat god = Bureaucrat("GOD", 2);
	Bureaucrat notGod = Bureaucrat("Lethargy", 150);
	std::cout << god << std::endl;
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
