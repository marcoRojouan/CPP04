/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:18:34 by mrojouan          #+#    #+#             */
/*   Updated: 2026/10/07 14:12:58 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
}

void Cat::makeSound(void) const
{
	std::cout << "MEOWW !" << std::endl; 
}

Cat::~Cat(void)
{
	std::cout << "Cat deconstructor called" << std::endl;
}
