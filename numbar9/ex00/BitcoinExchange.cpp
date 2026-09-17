/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:05:54 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/03 14:05:58 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchage() {}

BitcoinExchange::BitcoinExchage()
{
	std::ifstream	data;
	int				i = 0;

	data.open("data.csv", std::ifstream::in);
	_parseData(data);
	_inputSize = _getInputSize(file) - 1;
	_input = new int[_inputSize];
	while (i <  _inputSize)
	{
		_input[i] = 0;
		i++;
	}
	file.open(av[1], std::ifstream::in);
	_parseInput(file);
	file.open(av[1], std::ifstream::in);
	_output(file);
}

BitcoinExchange::BitcoinExchage() 
{
	_map = src._map;
	_inputSize = src._inputSize;
	_input = src._input;
}

BitcoinExchange::~BitcoinExchage()
{
	delete [] _input;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const &src)
{
	if (this != &src)
	{
		_map = src._map;
		_inputSize = src._inputSize;
		_input = src._input;
	}
	return *this;
}

void	BitcoinExchange::print() const
{
	std::map<str, float>::const_iterator	mapIt = _map.begin();
	std::map<str, float>::const_iterator	mapStop = _map.end();

	while (mapIt != mapStop)
	{
		std::cout << "| Date: " << mapIt->first << " | Worth: " << std::setprecition(2) << mapIt->second << " |" << std::endl;
		mapIt++;
	}
}
int
