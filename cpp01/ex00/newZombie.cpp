/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:43:31 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/18 13:09:23 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// manual allocated / deallocated
// exists outside of function

Zombie* newZombie( std::string name)
{
	return (new Zombie(name));
}
