#include <iostream>
#include "animal.hpp"
#include "bird.hpp"

int main() {

    animal ani1 = animal();
    animal ani2 = animal();
    animal ani3 = animal();
    bird ani4 = bird(3,4,5,6);

    ani4.eat();

    std::cout << ani1 << ani2 << ani3 << ani4 << std::endl;
    return 0;
}