/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:05:36 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/16 15:15:42 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <iosrtream>
#include <iomantip>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <cstdlib>

typedef	std::string	str;

template <typename T>
std::string	tos(T nb)
{
	std::ostringstream	newString;
	newString << nb;
	return newString.str();
}

class	BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(std::ifstream & file, char ** av);
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();

		BitcoinExchange &	operator=(BitcoinExchange const &src);
	
		void	print() const;
	
	private:
		std::map<str, float>	_map;
}
