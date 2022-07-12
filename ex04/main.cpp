/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:21:43 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/12 13:10:48 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
		return (0);

	std::string	input = argv[1];
	std::string	wordSrc = argv[2];
	std::string	wordDest = argv[3];
	std::string	line;
	size_t		pos;
	size_t		len = wordSrc.length();
	std::ifstream inputFile(input);

	std::ofstream outputFile("test.txt.replace");
	int i = 0;
	if(inputFile.is_open())
	{
		while (getline(inputFile, line))
		{
			pos = line.find(wordSrc);//check till end line, this check just first word.
			if (pos != std::string::npos)
			{
				while (pos != std::string::npos)
				{
					line.erase(pos, len);
					line.insert(pos, wordDest);
					pos = line.find(wordSrc);
				}
			}
			outputFile << line << std::endl;
		}
	}
	inputFile.close();
	outputFile.close();
	return (0);
}
