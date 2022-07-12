/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:37:50 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/12 12:42:03 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

	HumanB::HumanB(std::string name) {
		this->_name = name;
		this->_weapon = NULL;
}

	HumanB::~HumanB(){
}

 void		HumanB::setWeapon(Weapon &weapon){
 	this->_weapon = &weapon;
 }

void	HumanB::attack(){
	if (this->_weapon != NULL)
	{
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	}
	
}