/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 10:11:20 by mrojouan          #+#    #+#             */
/*   Updated: 2026/08/10 14:06:12 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "\n========== Abstract Animal Test ==========\n" << std::endl;

    // Animal animal;

    Animal* dog = new Dog();
    Animal* cat = new Cat();

    std::cout << "\n========== Sounds ==========\n" << std::endl;

    dog->makeSound();
    cat->makeSound();

    std::cout << "\n========== Deleting ==========\n" << std::endl;

    delete dog;
    delete cat;

    return 0; 
}