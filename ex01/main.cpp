/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 10:11:20 by mrojouan          #+#    #+#             */
/*   Updated: 2026/08/10 13:20:01 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int size = 10;
    Animal* animals[size];

    std::cout << "\n========== Creating animals ==========\n" << std::endl;

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();

    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    std::cout << "\n========== Deleting animals ==========\n" << std::endl;

    for (int i = 0; i < size; i++)
        delete animals[i];

    std::cout << "\n========== Deep Copy Test ==========\n" << std::endl;

    Dog dog1;
    dog1.getBrain()->setIdea(0, "I want a bone");
    dog1.getBrain()->setIdea(1, "I want to play");

    Dog dog2(dog1);

    std::cout << "dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    dog2.getBrain()->setIdea(1,"I want food");

    std::cout << "\nAfter modifying dog2:\n";
    std::cout << "dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n========== Assignment Operator Test ==========\n" << std::endl;

    Dog dog3;
    dog3 = dog1;

    std::cout << "dog3 idea[1]: " << dog3.getBrain()->getIdea(1) << std::endl;

    dog3.getBrain()->setIdea(1, "I want to sleep");

    std::cout << "\nAfter modifying dog3:\n";
    std::cout << "dog1 idea[1]: " << dog1.getBrain()->getIdea(1) << std::endl;
    std::cout << "dog3 idea[1]: " << dog3.getBrain()->getIdea(1) << std::endl;

    std::cout << "\n========== End of program ==========\n" << std::endl;

    return 0;
}