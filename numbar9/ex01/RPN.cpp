/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:09:55 by mlehmann          #+#    #+#             */
/*   Updated: 2026/10/02 14:35:36 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(char *input)
{
	int	first;
	int	second;
	int	result;
	int	i = 0;

	checkinput(input);
	while (input[i] != '\0')
	{
		if (input[i] == ' ')
			i++;
		if (isdigit(input[i]))
		{
			_stack.push(input[i] - '0');
		}
		else if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*')
		{
			second = _stack.top();
			_stack.pop();
			first = _stack.top();
			_stack.pop();
			switch(input[i])
			{
				case '+':
					result = first + second;
					break;
				case '-':
					result = first - second;
					break;
				case '*':
					result = first * second;
					break;
				case '/':
					result = first / second;
					break;
				default:
					break;
			}
			_stack.push(result);
		}
		i++;
	}
	std::cout << result << std::endl;
}

RPN::RPN(RPN const &src)
{
	_stack = src._stack;
}

RPN::~RPN()
{}

RPN &	RPN::operator=(RPN const &src)
{
	if (this != &src)
	{
		_stack = src._stack;
	}
	return *this;
}

void	RPN::checkinput(char *input)
{
	int number = 0;
	int	sign = 0;
	int	i = 0;

	while (input[i])
	{
		if (isdigit(input[i]))
			number++;
		else if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*')
			sign++;
		i++;
	}
	if (number != sign + 1)
		throw std::runtime_error("there needs to be a enough numbers for the actions and enough actions for the numbers");
	return;
}
