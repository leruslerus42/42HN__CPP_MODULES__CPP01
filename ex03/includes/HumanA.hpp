/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:37:52 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/12 12:37:34 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

#ifndef __HUMANA__H__
#define __HUMANA__H__

class HumanA {
	private:
		std::string	_name;
		Weapon &_weapon;
		
	public:
		HumanA(std::string	real_name, Weapon &weapon);
		~HumanA();

		void attack();
};

#endif