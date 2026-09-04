/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:54:33 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/03 13:54:37 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include<climits>
#include<ctime>
#include<cstdlib>
#include<algorithm>
#include<unistd.h>

typedef	std::string str;

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span & operator=(Span const &src);

		void	addNumber(int n);
		void	bigAdd(int n);
		int		shortestSpan();
		int		longestSpan() const;

		class MaxNumbersException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};
		class NoNumbersException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};
		class OneNumbersException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};
	private:
		std::vector<int>	_array;
		unsigned int		_maxSize;
		unsigned int		_size;

		std::vector<int>	_sort() const
};

#endif
