/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:21:30 by mrojouan          #+#    #+#             */
/*   Updated: 2026/07/07 12:07:03 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
}

void Dog::makeSound(void) const
{
	std::cout << "WOUAF !" << std::endl; 
}

Dog::~Dog(void)
{
	std::cout << "Dog deconstructor called" << std::endl;
}
