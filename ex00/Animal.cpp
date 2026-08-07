/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:54:39 by mrojouan          #+#    #+#             */
/*   Updated: 2026/07/10 14:51:24 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called" << std::endl;
	type = "Animal";
}

std::string Animal::getType(void) const
{
	return (type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal !" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal deconstructor called" << std::endl;
}