/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:47:15 by dhuss             #+#    #+#             */
/*   Updated: 2025/02/18 15:04:49 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "The memory adress of the string variable:" << &string << std::endl;
	std::cout << "The memory adress held by stringPTR:" << stringPTR << std::endl;
	std::cout << "The memory adress held by stringREF" << &stringREF << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}

// A reference is an alias (another name) for an existing variable.
// A reference cannot be reassigned after initialization
// A reference cannot be null