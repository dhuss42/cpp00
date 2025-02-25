/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:40:33 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/18 14:19:43 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << name << "is constructed" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << "is deconstructed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(const std::string& name)
{
	this->name = name;
}
