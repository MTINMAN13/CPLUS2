#include "Dog.hpp"
#include <iostream>

Dog::Dog() : A_Animal()
{
    this->type = "Dog";
    std::cout << "Dog consructor called" << std::endl;
};

Dog::Dog(const Dog& other) : A_Animal(other)
{
    std::cout << "Dog 'copy' constructor called" << std::endl;
}

// Assignment operator
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
        A_Animal::operator=(other); // Call base class assignment
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
};

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
};