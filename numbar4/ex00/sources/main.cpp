#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main(){

    Animal* it = new Animal();
    Animal* realCat = new Cat();
    Animal* realDog = new Dog();
    WrongAnimal* thing = new WrongAnimal();
    WrongAnimal* noCat = new WrongCat();

    std::cout << it->getType() << std::endl;
    it->makeSound();
    std::cout << realCat->getType() << std::endl;
    realCat->makeSound();
    std::cout << realDog->getType() << std::endl;
    realDog->makeSound();
    std::cout << thing->getType() << std::endl;
    thing->makeSound();
    std::cout << noCat->getType() << std::endl;
    noCat->makeSound();

    delete it;
    delete realCat;
    delete realDog;
    delete thing;
    delete noCat;
    return 0;
}