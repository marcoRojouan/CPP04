/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:21:30 by mrojouan          #+#    #+#             */
/*   Updated: 2026/08/10 13:24:25 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;

    brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;

    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }

    return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "WOUAF !" << std::endl; 
}

Brain* Dog::getBrain(void)
{
    return brain;
}

const Brain* Dog::getBrain(void) const
{
    return brain;
}

Dog::~Dog(void)
{
	std::cout << "Dog deconstructor called" << std::endl;
    delete brain;
}
