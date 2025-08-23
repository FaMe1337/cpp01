/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:00:47 by marvin            #+#    #+#             */
/*   Updated: 2025/08/23 16:00:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "memory address of the string variable: " << &str << "\n"
    << "memory address held by stringPTR: " << stringPTR << "\n"
    << "memory address held by stringREF: " <<  &stringREF << std::endl;

    std::cout << "value of the string: " << str << "\n"
    << "value pointed to by stringPTR: " << *stringPTR << "\n"
    << "value pointed to by stringREF: " << stringREF << std::endl; 
}