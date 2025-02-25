/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome_phonebook.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:33:23 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/07 10:13:15 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_AWESOME_PHONEBOOK_HPP
# define MY_AWESOME_PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

bool	is_numeric(std::string str);
bool	is_phonenbr(std::string str);
std::string	truncate(const std::string str, size_t width);

#endif