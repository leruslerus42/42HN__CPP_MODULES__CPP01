/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:38:08 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/12 07:50:04 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/HumanA.hpp"
#include "./includes/HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		//Testcase 1
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	
	{
		Weapon club = Weapon("crude spiked club");

		//Testcase 2
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	
	return (0);
}