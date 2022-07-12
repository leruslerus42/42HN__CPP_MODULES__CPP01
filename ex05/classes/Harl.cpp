/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:26:22 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/12 07:16:35 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

	Harl::Harl(){
}

	Harl::~Harl(){
}

int Harl::levelCalculator(std::string level){
	if (level == "debug")
		return (0);
	else if (level == "info")
		return (1);
	else if (level == "warning")
		return (2);
	else if (level == "error")
		return (3);
	return (0);
}

void	Harl::complain(std::string level){
	typedef void(Harl ::*func)();
	int i = 0;
	Harl Harl_clone;

	func complaints[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int currentLevel = Harl::levelCalculator(level);

	while (i < 4)
	{
		if (i == currentLevel)
			(Harl_clone.*complaints[currentLevel])();
		i++;
	}
}

void	Harl::debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
