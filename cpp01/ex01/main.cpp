/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:32:09 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/18 14:28:02 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	n;
	Zombie	*horde;

	n = 5;
	horde = zombieHorde(n, "Horde ");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
