/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 20:05:16 by marvin            #+#    #+#             */
/*   Updated: 2025/08/23 20:05:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replaceStrings(std::string newFileContent, std::string s1, std::string s2)
{
	std::string resultContent;
	int indexChar = 0;
	std::string::size_type foundIndex = 0;

	while (indexChar < (int)newFileContent.size()) 
	{
		foundIndex = newFileContent.find(s1, indexChar);
		if (foundIndex == std::string::npos)
		{
			resultContent += newFileContent.substr(indexChar);
			break;
		}
		resultContent += newFileContent.substr(indexChar, (foundIndex - indexChar));
		resultContent += s2;
		indexChar = foundIndex + s1.size();
	}
	return (resultContent);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "arguments are not the following: <filename> <string1> <string2>" << std::endl;
		return(1);
	}
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if (s1.empty() || s2.empty())
	{
		std::cout << "Please don't use empty strings" << std::endl;
		return (1);
	}
	std::ifstream srcFile(argv[1]);
	if (!srcFile.is_open()) 
	{
		std::cerr << "Error: Can't open the file: " << argv[1] << ". Please ensure the file exists and check its permissions." << std::endl;
		return (1);
	}
	char	c;
	std::string newFileContent;
	while (srcFile.get(c)) 
		newFileContent += c;
	srcFile.close();
	if (newFileContent.empty())
	{
		std::cerr << "Error: The file " << argv[1] << " is empty." << std::endl;
		return (1);
    }
	std::string newFileName = std::string(argv[1]) + ".replace";
	std::ofstream newFile(newFileName.c_str());
	if (!newFile.is_open()) 
	{
		std::cerr << "can't open the file: " << argv[1] << std::endl;
		return (1);
	}
	newFile << replaceStrings(newFileContent, s1, s2);
	newFile.close();
}