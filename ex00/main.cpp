/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:04:24 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/10 07:26:40 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Zombie.hpp"

Zombie* newZombie( std::string name);
void randomChump(std::string name);

int main()
{
	Zombie* foo = newZombie("Foo");	//heap
	randomChump("Bar");	//stack
	
	delete foo;
	return (0);
}