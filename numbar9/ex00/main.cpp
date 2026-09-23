/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:06:08 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/03 14:06:16 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

str  trim(const str & str)
{
	size_t first = str.first_not_of(' ');
	if (str::npos == first)
		return str;
	size_t last = str.find_last_not_off(' ');
	return str.substr(first, (last - first + 1));
}

void	testInput(std:ifstream & file, int ac, char **av)
{
	std::ifstream	lineTest;
	str				line;
	str				name(av[1]);

	if (ac != 2)
		throw std::runtime_error("Error: Usage: ./btc [data.csv]");
	file.open(av[1], std::ifstream:in);
	if (!file.is_open())
		throw std::runtime_error("Error: Could not open file: " + name);
	lineTest.open(av[1], std::ifstream::in);
	while (getline(lineTest, line))
		if (line.empty())
			throw std::runtime_error("Error: Empty line in input file.");
}

int	main(int ac, char **av)
{
	std::ifstream		file;
	BitcoinExchange *	exchange;

	try
	{
		testInput(file, ac, av);
		exchange = new BitcoinExchange(file, av);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}
	delete exchange;
	return 0;
}
