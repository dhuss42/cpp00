/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:14:53 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/07 10:05:37 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_awesome_phonebook.hpp"

bool	is_numeric(std::string str)
{
	size_t	i;

	i = 0;
	while (i < str.size())
	{
		if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	is_phonenbr(std::string str)
{
	size_t	i;

	i = 0;
	while (i < str.size())
	{
		if(!std::isdigit(str[i]) && str[0] != '+' && str[i] != ' ')
			return (false);
		i++;
	}
	return (true);
}

std::string truncate(const std::string str, size_t width)
{
	if (str.length() > width)
	{
		return (str.substr(0, width -1) + ".");
	}
	return (str);
}
