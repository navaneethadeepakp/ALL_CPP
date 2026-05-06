/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:18:06 by naperisw          #+#    #+#             */
/*   Updated: 2026/05/06 12:26:03 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string command;

	std::cout << "Welcome to the 80s PhoneBook" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" <<std::endl;

	while (true)
	{
		std::cout << "PhoneBook>";
		if (!std::getline(std::cin, command))
			break;
		if (command == "ADD")
			std::cout << "[This is where we will ask for info and save the contact!]" << std::endl;
		else if (command == "SEARCH")
			std::cout << "[This is where we will print the formatted table!]" << std::endl;
		else if (command == "EXIT")
		{
			std::cout << "Shutting down PhoneBook. Goodbye!" << std::endl;
			break;
		}
	}
	return 0;
}