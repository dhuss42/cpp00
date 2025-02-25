/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:40:43 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/18 13:02:25 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie* heapZombie = newZombie("Heap ");
	heapZombie->announce();
	delete heapZombie;

	randomChump("Stack ");

	return (0);
}