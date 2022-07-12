/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:21:43 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/11 22:07:09 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>

int main()
{
	std::string s1 = "Lorem Ipsum";
	std::string s2;
	std::string s ;
	std::cin >> s2; //take s2 as input

	std::ifstream file;
	file.open("prova.txt");
	
	if (file.is_open())
	{
		while (getline (file, s))
		{
			if (s.find(s1, 0) != std::string::npos)
			{
				std::cout << "PRESENT!" << std::endl;
			}
			
		}
	}
	file.close();
	
	//file << "Check";
	file.close();
	return (0);
}