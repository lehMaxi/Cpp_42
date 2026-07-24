/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:34:20 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/24 14:34:20 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): ownName(name)
{
    std::cout << "...something stirs beneath the ground..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << ownName << " stumbled, fell and got destroyed 'humanely'." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << ownName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
