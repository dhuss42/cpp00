/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:18:42 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/18 15:43:38 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

// no default constructor because a reference cannot be null but needs to be initialised

class HumanA
{
	private:
		Weapon& weapon;
		std::string	name;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack();
};

#endif