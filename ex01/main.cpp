/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 07:35:20 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/10 08:30:32 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./includes/Zombie.hpp"

/*
Time to create a horde of Zombies!
Implement the following function in the appropriate file:
    Zombie*    zombieHorde( int N, std::string name );

Implement your own tests to ensure your zombieHorde() function works as expected. Try to call announce() for each one of the zombies.
Don’t forget to delete all the zombies and check for memory leaks.
*/

Zombie*	zombieHorde( int N, std::string name);

int main()
{
	int N = 5;
	Zombie *z = zombieHorde(N, "Zombie Alpha ");

	delete [] z;
	return (0);
}