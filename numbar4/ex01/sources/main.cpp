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
        delete animals[i - 1];
        i--;
    }

    std::cout << "Getting the ideas of a cats:" << std::endl;
    Cat* cat = new Cat();
    Cat* cat2 = new Cat(*cat);
    std::cout << "Idea of the cat: " << cat->getBrain().getIdea(0) << std::endl;  
    delete cat;
    std::cout << "Idea of the cat2: " << cat2->getBrain().getIdea(0) << std::endl;
    delete cat2;
    std::cout << "Getting the ideas of a dogs:" << std::endl;
    Dog* dog = new Dog();
    Dog* dog2 = new Dog(*dog);
    std::cout << "Idea of the dog: " << dog->getBrain().getIdea(0) << std::endl;
    delete dog;
    std::cout << "Idea of the dog2: " << dog2->getBrain().getIdea(0) << std::endl;
    delete dog2;
    return 0;
}