#include <iostream>
#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

int main() {

    animal *animal1 = new animal(2,5,6);
    animal *bird1 = new bird(2,3,4,5);
    animal *canine1 = new canine(2,3,4);

    animal1.move(5,6);

    animal1->eat();
    bird1->eat();
    canine1->eat();

    dynamic_cast<canine*>(canine1)->hunt();
    //bird1->move(2,6,7);

    std::cout << *animal1 << std::endl;

    std::cout << *bird1 << std::endl;

    std::cout << *canine1 << std::endl;
    return 0;
}