/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:37:54 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/12 07:46:29 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

#ifndef __HUMANB__H__
#define __HUMANB__H__

class HumanB {
	private:
		std::string	_name;
		Weapon *_weapon;	//i think this obj should be public, otherwise dunnon how 2 acces his attributes.

		
	public:
		HumanB(std::string name);
		~HumanB();
	
	void		setWeapon(Weapon &weapon);
	void		attack();
};

#endif