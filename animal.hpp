//
// Created by Owntrolf on 2018-10-12.
//

#ifndef COMP3512LAB4_ANIMAL_HPP
#define COMP3512LAB4_ANIMAL_HPP

#include <iostream>


class animal {
protected:
    int age;

    static long idCount;
    long id;

    bool alive;
    double coordX;
    double coordY;



public:
    animal(); //Default animal constuctor
    animal(int, double, double); //animal constructor needing int age, and 2 double coordinates
    animal(const animal&); //an animal copy constructor
    virtual ~animal(); //an animal deconstructor

    virtual void move(double, double); //makes the animal move using 2 double coordinates
    virtual void sleep(); //animal sleep action
    virtual void eat(); //animal eat action

    virtual std::ostream& print(std::ostream& os) const; //used for printing for the << operator override
    friend std::ostream& operator<<(std::ostream& os, const animal&); //overrides the << operator to print



};


#endif //COMP3512LAB4_ANIMAL_HPP
