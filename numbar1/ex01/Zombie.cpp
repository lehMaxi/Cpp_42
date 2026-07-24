/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:34:20 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/24 15:08:22 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "...something stirs beneath the ground..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << ownName << " stumbled, fell and got destroyed 'humanely'." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->ownName = name;
}

void Zombie::announce(void)
{
    std::cout << ownName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
