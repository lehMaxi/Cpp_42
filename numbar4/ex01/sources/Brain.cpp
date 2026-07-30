#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "A new brain has been created" << std::endl;
}

Brain::Brain(Brain const &src)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    std::cout << "A new brain has been copied" << std::endl;
}

Brain::~Brain()
{
    std::cout << "A brain has been destroyed" << std::endl;
}

Brain& Brain::operator=(Brain const &src)
{
    if (this != &src)
    {
        std::cout << "A brain has been copied and reassigned" << std::endl;
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    }
    return *this;
}

void Brain::fillBrain(str idea)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
}

str Brain::getIdea(int index) const
{
    return this->ideas[index];
}

void Brain::setIdea(int index, str idea)
{
    this->ideas[index] = idea;
}