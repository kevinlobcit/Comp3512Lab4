//
// Created by Owntrolf on 2018-10-12.
//

#include "bird.hpp"

bird::bird()
{
    height = 0;
}

bird::bird(int ageIn, double xCoord, double yCoord, double heightIn)
{
    age = ageIn;
    coordX = xCoord;
    coordY = yCoord;
    alive = true;
    id = animal::idCount++;
    height = heightIn;
}

bird::bird(const bird& bird2)
{
    age = bird2.age;
    coordX = bird2.coordX;
    coordY = bird2.coordY;
    alive = bird2.alive;
    id = bird2.id;
    height = bird2.height;
}

bird::~bird()
{

}

void bird::move(double xCoord, double yCoord, double heightIn)
{
    coordX = xCoord;
    coordY = yCoord;
    height = heightIn;
}

void bird::sleep()
{
    std::cout << "Bird sleep" << std::endl;
}

void bird::eat()
{
    std::cout << "Bird eat" << std::endl;
}

std::ostream& operator<<(std::ostream& os, bird birdIn)
{
    os << "Age: " << birdIn.age << std::endl;
    os << "X Coordinate: " << birdIn.coordX << std::endl;
    os << "Y Coordinate: " << birdIn.coordY << std::endl;
    os << "Height: " << birdIn.height << std::endl;
    os << "Alive" << birdIn.alive << std::endl;
    os << "ID: " << birdIn.id << std::endl;
}

