/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:37:56 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/12 02:34:48 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef __WEAPON__H__
#define __WEAPON__H__
class Weapon{
	private:
		std::string _type;
	
	public:
		Weapon(std::string real_name);
		~Weapon();
		
	void			setType( std::string real_name);
	std::string	&getType() ;
};

#endif