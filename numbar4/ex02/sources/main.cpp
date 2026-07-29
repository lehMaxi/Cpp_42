#include "..\includes\Dog.hpp"
#include "..\includes\Cat.hpp"
#include "..\includes\WrongAnimal.hpp"
#include "..\includes\WrongCat.hpp"

int main(){

//    Animal* it = new Animal();
    Animal* realCat = new Cat();
    Animal* realDog = new Dog();

//    std::cout << it->getType() << std::endl;
    //it->makeSound();
    std::cout << realCat->getType() << std::endl;
    realCat->makeSound();
    std::cout << realCat->getBrain().getIdea(0) << std::endl;
    std::cout << realDog->getType() << std::endl;
    realDog->makeSound();
    std::cout << realDog->getBrain().getIdea(0) << std::endl;

//    delete it;
    delete realCat;
    delete realDog;
    return 0;
}