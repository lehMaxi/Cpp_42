/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 12:23:02 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/22 09:58:55 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NI_H
#define NI_H

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(str target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rSym);

		void	call();
		void	createShrubbery(str place);
};

#endif
