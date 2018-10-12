//
// Created by Owntrolf on 2018-10-12.
//

#ifndef COMP3512LAB4_ANIMAL_HPP
#define COMP3512LAB4_ANIMAL_HPP

#include <iostream>


class animal {
private:
    int age;

    static long idCount;
    long id;

    bool alive;
    double coordX;
    double coordY;



public:
    animal();
    animal(int, double, double);
    animal(const animal&);
    virtual ~animal();

    virtual void move(double, double);
    virtual void sleep();
    virtual void eat();
    friend std::ostream& operator<<(std::ostream& os, animal animalIn);



};


#endif //COMP3512LAB4_ANIMAL_HPP
