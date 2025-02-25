/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:22:15 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/18 15:38:45 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *weapon;
		std::string	name;
	public:
	HumanB(std::string	name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon& weapon);
};

#endif