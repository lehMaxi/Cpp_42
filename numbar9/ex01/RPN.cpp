/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:09:55 by mlehmann          #+#    #+#             */
/*   Updated: 2026/09/03 14:09:58 by mlehmann         ###   ########.fr       */
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

	while (input[i] != '\0')
	{
		if (input[i] == ' ')
			i++;
		if (isdigit(input[i]))
		{
			_stack.push(input[i] - '0');
		}
		else if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*')
	}
}
