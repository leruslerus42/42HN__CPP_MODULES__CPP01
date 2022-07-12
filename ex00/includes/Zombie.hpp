/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:05:32 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/10 07:21:48 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {

private:
	std::string name;
	
public:
	Zombie();
	~Zombie();

	void		setName(std::string name);
	std::string	getName() const;
	void		announce();
	
	Zombie*		newZombie(std::string);
	void		randomChump(std::string name);
};