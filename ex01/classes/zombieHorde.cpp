/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 07:35:24 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/10 08:29:43 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	int i = 0;
	
	Zombie* horde = new Zombie[N];
	while (N--)
	{
		horde[i].setName(name);
		horde[i].announce();
		i++;
	}
	return (&horde[0]);

	
}

/*It must allocate N Zombie objects in a single allocation.
Then, it has to initialize the zombies, giving each one of them the name passed as parameter. 
The function returns a pointer to the first zombie.*/