/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:41:44 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/07 10:04:45 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_awesome_phonebook.hpp"

int	PhoneBook::prompt(std::string str, Contact *new_contact, t_info info)
{
	std::string input;

	std::cout << str;
	std::getline(std::cin, input);
	if (std::cin.eof() || std::cin.fail())
	{
		std::cout << "\nInput stream closed. Exiting program.\n";
		exit(EXIT_SUCCESS);
	}
	else if (input == "")
	{
		std::cout << "Error: No information entered. Returning to main menu.\n";
		return (-1);
	}
	if (info == FIRSTNAME)
		new_contact->set_first_name(input);
	else if (info == LASTNAME)
		new_contact->set_last_name(input);
	else if (info == NICKNAME)
		new_contact->set_nickname(input);
	else if (info == PHONENBR)
	{
		new_contact->set_phone_nbr(input);
		if (!is_phonenbr(input))
		{
			std::cout << "Error: not a valid phone number. Returning to main menu.\n";
			return (-1);
		}
	}
	else if (info == SECRET)
		new_contact->set_secret(input);
	return (0);
}

void	PhoneBook::add()
{
	Contact		new_contact;

	if (prompt("Enter first name: ", &new_contact, FIRSTNAME) == -1)
		return ;
	if (prompt("Enter last name: ", &new_contact, LASTNAME) == -1)
		return ;
	if (prompt("Enter nickname: ", &new_contact, NICKNAME) == -1)
		return ;
	if (prompt("Enter phone number: ", &new_contact, PHONENBR) == -1)
		return ;
	if (prompt("Enter darkest secret: ", &new_contact, SECRET) == -1)
		return ;
	contacts[contact_count % 8] = new_contact;
	contact_count++;
}

Contact	PhoneBook::getContact(int index)
{
	return (contacts[index]);
}

void	PhoneBook::print_contacts(PhoneBook phonebook)
{
	Contact contact;

	for (int i = 0; i < 8; i++)
	{
		contact = phonebook.getContact(i);
		if (contact.get_first_name().empty())
			continue;
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << truncate(contact.get_first_name(), 10) << "|";
		std::cout << std::setw(10) << std::right << truncate(contact.get_last_name(), 10) << "|";
		std::cout << std::setw(10) << std::right << truncate(contact.get_nickname(), 10) << "|";
		std::cout << "\n";
	}
}

void	PhoneBook::retrive_contact(PhoneBook phonebook, int index)
{
	Contact	contact;

	if (index >= 0 && index <= 7)
	{
		contact = phonebook.getContact(index);
		if (!contact.get_first_name().empty())
		{
			std::cout << "First name:     " << contact.get_first_name() << std::endl;
			std::cout << "Last name:      " << contact.get_last_name() << std::endl;
			std::cout << "Nickname:       " << contact.get_nickname() << std::endl;
			std::cout << "Phone number:   " << contact.get_phone_nbr() << std::endl;
			std::cout << "Darkest secret: " << contact.get_secret() << std::endl;
		}
		else
			std::cout << "Error: contact has not been created for that index. Returning to main menu.\n";
	}
	else
		std::cout << "Error: Not valid index. Returning to main menu.\n";
}

void	PhoneBook::search(PhoneBook phonebook)
{
	std::string	input;
	int			index;

	print_contacts(phonebook);
	std::cout << "Enter a valid index: ";
	std::getline(std::cin, input);
	if (std::cin.eof() || std::cin.fail())
	{
		std::cout << "\nInput stream closed. Exiting program.\n";
		exit(EXIT_SUCCESS);
	}
	if (input == "")
	{
		std::cout << "Error: No information entered. Returning to main menu.\n";
		return ;
	}
	if (!is_numeric(input))
	{
		std::cout << "Error: Not a number. Returning to main menu.\n";
		return ;
	}
	index = std::stoi(input);
	retrive_contact(phonebook, index);
}
