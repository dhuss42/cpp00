/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:40:30 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/18 13:09:14 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// fast allocation / deallocation
// does not exist outside of the function
void randomChump( std:: string name )
{
	Zombie zombie(name);
	zombie.announce();
}
