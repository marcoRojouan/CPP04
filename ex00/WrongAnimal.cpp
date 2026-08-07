/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:54:39 by mrojouan          #+#    #+#             */
/*   Updated: 2026/07/07 12:00:52 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	type = "WrongAnimal";
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Pouette" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal deconstructor called" << std::endl;
}