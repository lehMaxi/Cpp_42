/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 12:51:42 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/22 11:10:10 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_H
#define ROBOTOMY_H

#include <random>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(str target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();

		RobotomyRequestForm & operator=(RobotomyRequestForm const &rSym);

		void	call();
		void	robotomize(str place);
};

#endif
