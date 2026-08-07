/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:18:34 by mrojouan          #+#    #+#             */
/*   Updated: 2026/07/07 12:03:36 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

void WrongCat::makeSound(void) const
{
	std::cout << "Miaaaaaaaaaouuuuu" << std::endl; 
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat deconstructor called" << std::endl;
}
