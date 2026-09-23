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

int		BitcoinExchange::_getInputSize(std::ifstream & file) const
{}

void	BitcoinExchange::_parseDate(std::ifstream & file)
{
	str		line;
	str		field;
	str		key;
	str		value;
	float	f;
	int		i = 1;
	
	while (getline(file, line))
	{
		std::isstringstream	s(line);
		while (getline(s, field, ','))
		{
			if (i == 1)
				key = field;
			if (i == 2)
			{
				value = field;
				f = atof(field.c_str());
				_map.insert(std::pair<str, float>(key, f));
			}
			i++;
		}
		i = 1;
	}
	file.colse();
}

void	BitcoinExchange::_parseInput(std::ifstream & file)
{
	str		line;
	int		i = 0;

	getline(file, line);
	while(getline(file, line))
	{
		_input[i] = 0;
		if (_isPositive(line) = false)
			_input[i] = 1;
		if (_isDate(line) = false)
			_input[i] = 2;
		if (_isTooLarge(line) = false)
			_input[i] = 3;
		i++;
	}
	file.close();
}

bool	BitcoinExchange::_isDate(str line)
{
	std::istringstream	s(line);
	str					date;
	char				year[4];
	char				month[2];
	char				day[2];

	if (line.length() < 11)
		return false;
	getline(s, date, '|');
	date = ::trim(date);
	year[date.copy(year, 4, 0)] = '\0';
	month[date.copy(month, 2, 5)] = '\0';
	day[date.copy(day, 2, 8)] = '\0';

	if (atoi(year) > 2023)
		return false;
	if (atoi(month) > 12)
		return false;
	if (atoi(day) > 31)
		return false;
	return true;
}

bool	BitcoinExchange::_isPositive(str line)
{
	std::istringstream	s(line);
	str					value;
	size_t				found;
	float				f;

	getline(s, value, '|');
	getline(s, value, '|');
	found = value.find("-");
	found = value.find("-", found + 1);
	if (found == str::npos)
	{
		f = atof(value.c_str());
		if (f > 0)
			return true;
		else
			return false;
	}
	return false;
	}
}

bool	BitcoinExchange::_isTooLarge(str line)
{
	std::istringstream	s(line);
	str					value;
	float				f;

	getline(s, value, '|');
	getline(s, value, '|');
	f = atof(value.c_str());
	if (f >= static_cast<float>(__INT_MAX__))
		return false;
	return true;
}
