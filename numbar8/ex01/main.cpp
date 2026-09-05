/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:53:58 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/03 13:54:26 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span	array(100);

	try
	{
		array.addMultiple(99);
	}
	catch(const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << array.longestSpan() << std::endl;
	std::cout << array.shortestSpan() << std::endl;

	return 0;
}
