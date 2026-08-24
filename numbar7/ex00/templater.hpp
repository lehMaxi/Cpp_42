/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templater.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 14:48:48 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/17 14:48:49 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include <string>

typedef  std::string str;

template<typename T>
void swap(T &a, T &b);

template<typename T>
T min( T a, T b);

template<typename T>
T max( T a, T b);

#endif
