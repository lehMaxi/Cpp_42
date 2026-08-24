/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 14:48:55 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/17 14:48:59 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templater.hpp"

template<typename T>
void  swap(T &a, T &b)
{
  T temp;

  temp = a;
  a = b;
  b = temp;
}

template<typename T>
T  min(T a, T b)
{
  return (b <= a) ? b : a;
}

template<typename T>
T  max(T a, T b)
{
  return (b >= a) ? b : a;
}

int  main(void)
{
  int  a = 2;
  int  b = 3;

  std::cout << "a = " << a << ", b= " << b << std::endl;
  ::swap(a, b);
  std::cout << "a = " << a << ", b= " << b << std::endl;
  std::cout << "a b min = " << ::min(a, b) << std::endl;
  std::cout << "a b max = " << ::max(a, b) << std::endl;

  str  c = "random stuff";
  str  d = "random stufff";

  std::cout << "c = " << c << ", d= " << d << std::endl;
  ::swap(c, d);
  std::cout << "c = " << c << ", d= " << d << std::endl;
  std::cout << "c d min = " << ::min(c, d) << std::endl;
  std::cout << "c d max = " << ::max(c, d) << std::endl;
  return 0;
}
