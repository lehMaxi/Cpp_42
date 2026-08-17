/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 14:45:54 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/17 14:45:57 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cstdlib>

class Converter
{
    public:
        static void convert(const std::string &input);

    private:
        Converter();
        Converter(const Converter &other);
        ~Converter();

        Converter &operator=(const Converter &other);
};

#endif
