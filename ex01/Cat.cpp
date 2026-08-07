/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:18:34 by mrojouan          #+#    #+#             */
/*   Updated: 2026/08/07 11:06:15 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;

    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;

    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }

    return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "MEOWW !" << std::endl; 
}

Cat::~Cat(void)
{
	std::cout << "Cat deconstructor called" << std::endl;
}
