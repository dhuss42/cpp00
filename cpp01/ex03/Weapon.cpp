/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:27:06 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/18 15:31:10 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string& Weapon::getType(void) const
{
	return (type);
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

Weapon::~Weapon()
{
}