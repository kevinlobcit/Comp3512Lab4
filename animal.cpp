//
// Created by Owntrolf on 2018-10-12.
//

#include "animal.hpp"

long animal::idCount = 0;

animal::animal()
{
    age = 0;
    alive = true;
    coordX = 0;
    coordY = 0;
    id = animal::idCount++;
}

animal::animal(int ageIn, double xCoord, double yCoord)
{
    age = ageIn;
    coordX = xCoord;
    coordY = yCoord;
    alive = true;
    id = animal::idCount++;
}

animal::animal(const animal& animal2)
{
    age = animal2.age;
    alive = animal2.alive;
    coordX = animal2.coordX;
    coordY = animal2.coordY;
    id = animal2.id;
}

animal::~animal()
{

}

void animal::move(double xCoord, double yCoord)
{
    coordX = xCoord;
    coordY = yCoord;
}

void animal::sleep()
{
    std::cout << "Sleeping" << std::endl;
}

void animal::eat()
{
    std::cout << "Eating" << std::endl;
}

std::ostream& operator<<(std::ostream& os, animal animalIn)
{
    os << "Age: " << animalIn.age << std::endl;
    os << "X Coordinate: " << animalIn.coordX << std::endl;
    os << "Y Coordinate: " << animalIn.coordY << std::endl;
    os << "Alive: " << animalIn.alive << std::endl;
    os << "ID: " << animalIn.id << std::endl;
}




