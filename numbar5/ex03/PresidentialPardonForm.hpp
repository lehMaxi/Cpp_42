/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlehmann <mlehmann@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:05:56 by mlehmann          #+#    #+#             */
/*   Updated: 2026/08/22 11:07:41 by mlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARDON_H
#define PARDON_H

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(str target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();

		PresidentialPardonForm & operator=(PresidentialPardonForm const &rSym);

		void	call();
		void	pardon(str place);
};

#endif
