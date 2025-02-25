/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:45:11 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/18 14:28:09 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde = new	Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name + std::to_string(i) + " ");
	}
	return (horde);
}
