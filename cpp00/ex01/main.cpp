/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:42:05 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/07 10:55:41 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_awesome_phonebook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string cmd;

	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, cmd);
		if (std::cin.eof() || std::cin.fail())
		{
			std::cout << "\nInput stream closed. Exiting program.\n";
			break ;
		}
		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search(phonebook);
		else if (cmd == "EXIT")
			exit(EXIT_SUCCESS);
		else if (cmd == "")
			std::cout << "";
		else
			std::cout << "Error: Invalid command\n";
	}
	return (0);
}
