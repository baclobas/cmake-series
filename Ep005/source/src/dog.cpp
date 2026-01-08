#include "dog.h"
#include <iostream>
#include <format>
Dog::Dog(std::string name_param) : dog_name(name_param)
{
    std::cout << std::format("Constructor for dog {} called.", dog_name) << std::endl;
}

Dog::~Dog()
{
    std::cout << std::format("Destructor for dog {} called", dog_name) << std::endl;
}

