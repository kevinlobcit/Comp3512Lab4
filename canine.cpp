//
// Created by Owntrolf on 2018-10-12.
//

#include "canine.hpp"


canine::canine()
{
    age = 0;
    alive = true;
    coordX = 0;
    coordY = 0;
    id = animal::idCount;
}

canine::canine(int ageIn, double xCoord, double yCoord)
{
    age = age;
    alive = true;
    coordX = xCoord;
    coordY = yCoord;
    id = animal::idCount;
}

canine::canine(const canine& canine2)
{
    age = canine2.age;
    coordX = canine2.coordX;
    coordY = canine2.coordY;
    alive = canine2.alive;
    id = canine2.id;
}

canine::~canine()
{

}

void canine::move(double xCoord, double yCoord)
{
    coordX = xCoord;
    coordY = yCoord;
}

void canine::sleep()
{
    std::cout << "Dog sleep" << std::endl;
}

void canine::eat()
{
    std::cout << "Dog eat" << std::endl;
}

void canine::hunt()
{
    std::cout << "Dog hunt" << std::endl;
}

std::ostream& canine::print(std::ostream& os) const
{
    os << "Canine" << std::endl;
    os << "Age: " << age << std::endl;
    os << "X Coordinate: " << coordX << std::endl;
    os << "Y Coordinate: " << coordY << std::endl;
    os << "Alive: " << alive << std::endl;
    os << "ID: " << id << std::endl;
    return os;
}

std::ostream& operator<<(std::ostream& os, const canine& canineIn)
{
    return canineIn.print(os);
}
