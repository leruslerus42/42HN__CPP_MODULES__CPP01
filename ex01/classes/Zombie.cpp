/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 07:35:08 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/10 08:28:36 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie(){
	static int i = 0;
	i++;
	std::cout << Zombie::getName() << i << " destroyed" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

std::string	Zombie::getName() const
{
	return (this->name);
}

void	Zombie::announce()
{
	static int i = 0;
	i++;
	std::cout << Zombie::getName() << i << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


