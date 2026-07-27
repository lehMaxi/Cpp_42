#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(){

    const Animal* it = new Animal();
    const Animal* realCat = new Cat();
    const Animal* realDog = new Dog();
    const WrongAnimal* thing = new WrongAnimal();
    const WrongAnimal* noCat = new WrongCat();

    std::cout << it->_type << std::endl;
    it->makeSound();
    std::cout << realCat->_type << std::endl;
    realCat->makeSound();
    std::cout << realDog->_type << std::endl;
    realDog->makeSound();
    std::cout << thing->_type << std::endl;
    thing->makeSound();
    std::cout << noCat->_type << std::endl;
    noCat->makeSound();

    delete it;
    delete realCat;
    delete realDog;
    delete thing;
    delete noCat;
    return 0;
}