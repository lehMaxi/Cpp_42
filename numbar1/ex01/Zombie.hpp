/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:37:03 by mlehmann          #+#    #+#             */
/*   Updated: 2026/07/24 15:06:33 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
    public:
		Zombie();
        Zombie(std::string name);
        ~Zombie();

		void	setName(std::string name);
        void    announce (void);

    private:
        std::string ownName;
};

#endif
