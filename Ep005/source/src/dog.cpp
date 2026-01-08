#include "dog.h"
#include <print>

Dog::Dog(std::string name_param) : dog_name(name_param)
{
    std::println("Constructor for dog {} called.", dog_name);
}

Dog::~Dog()
{
    std::println("Destructor for dog {} called", dog_name);
}

