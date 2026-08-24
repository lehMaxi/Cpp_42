/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 14:49:16 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/17 14:49:19 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templater.hpp"

template<typename T>
void  iter(T *adress, int length, (*function)(T& var))
{
  int  i = 0;
  while (i < length)
  {
    function(adress[i]);
    i++;
  }
}

template<typename T>
void  printValue(T value)
{
  std::cout << value;
}

int  main()
{
  char  array[] = {'a', 'b', 'c', 'd'};

  iter(array, 4, printValue<char>);
}
