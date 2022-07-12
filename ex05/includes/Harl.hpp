/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:26:15 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/12 07:09:07 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef __HARL__H__
#define __HARL__H__

class Harl {
	private:

		void	debug();
		void	info();
		void	warning();
		void	error();

	public:
		Harl();
		~Harl();

	void	complain(std::string level);
	int		levelCalculator(std::string level);
};

#endif //!__HARL__H__