/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:41:09 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/12 02:34:45 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string real_name){
	this->_type = real_name;
}

Weapon::~Weapon(){
}

void		Weapon::setType(std::string real_name){
	this->_type = real_name;
}

std::string &Weapon::getType() {
	return (this->_type);
}