/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:11:10 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/10 07:09:28 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/*
It creates a zombie, name it, 
and return it so you can use it outside of the function scope.
*/

Zombie* newZombie( std::string name )
{
	Zombie* zombie = new Zombie;

	zombie->setName(name);
	return (zombie);
}
