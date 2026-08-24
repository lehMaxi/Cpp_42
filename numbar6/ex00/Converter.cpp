/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 14:45:26 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/17 14:45:41 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

static void isCharPrint(std::string param)
{
  std::cout << "char: " << param[0] << std::endl;
  std::cout << "int: " << static_cast<int>(param[0]) << std::endl;
  std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(param[0]) << "f" << std::endl;
  std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(param[0]) << std::endl;
}

static void isIntPrint(std::string param)
{
  int n = atoi(param.c_str());
  
  if ( n < 32 || n > 126)
    std::cout << "char: " << "not possible to display" << std::endl;
  else
    std::cout << "char: " << static_cast<char>(n) << std::endl;
  std::cout << "int: " << n << std::endl;
  std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
  std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
}

static void isFloatPrint(std::string param)
{
  float n = atof(param.c_str());
  
  if ( n < 32 || n > 126)
    std::cout << "char: " << "not possible to display" << std::endl;
  else
    std::cout << "char: " << static_cast<char>(n) << std::endl;
  std::cout << "int: " << static_cast<int>(n) << std::endl;
  std::cout << "float: " << std::fixed << std::setprecision(2) << n << "f" << std::endl;
  std::cout << "double: " << std::fixed << std::setprecision(2) << static_cast<double>(n) << std::endl;
}

static void isDoublePrint(std::string param)
{
  double n = atof(param.c_str());
  
  if ( n < 32 || n > 126)
    std::cout << "char: " << "not possible to display" << std::endl;
  else
    std::cout << "char: " << static_cast<char>(n) << std::endl;
  std::cout << "int: " << static_cast<int>(n) << std::endl;
  std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(n) << "f" << std::endl;
  std::cout << "double: " << std::fixed << std::setprecision(2) << n << std::endl;
}
