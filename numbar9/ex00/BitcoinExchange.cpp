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
}
