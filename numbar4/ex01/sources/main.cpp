#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
    int i = 0;
    const Animal* animals[10];

    while (i < 10)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }
    while (i > 0)
    {
        std::cout << "Idea of the " << animals[i - 1]->getType() << ": " << animals[i - 1]->getBrain().getIdea(0) << std::endl;
        i--;
    }

    while (i < 10)
    {
        delete animals[i];
        i++;
    }

    std::cout << "Getting the ideas of a cats:" << std::endl;
    Cat* cat = new Cat();
    Cat* cat2 = new Cat(*cat);
    std::cout << "Idea of the cat: " << cat->getBrain().getIdea(0) << std::endl;
    std::cout << "Idea of the cat2: " << cat2->getBrain().getIdea(0) << std::endl;
    delete cat;
    delete cat2;
    std::cout << "Getting the ideas of a dogs:" << std::endl;
    Dog* dog = new Dog();
    Dog* dog2 = new Dog(*dog);
    dog2->getBrain().setIdea(0, "This is stupid, I want to play!");
    std::cout << "Idea of the dog: " << dog->getBrain().getIdea(0) << std::endl;
    std::cout << "Idea of the dog2: " << dog2->getBrain().getIdea(0) << std::endl;
    delete dog;
    delete dog2;
    return 0;
}