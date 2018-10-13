//
// Created by Owntrolf on 2018-10-12.
//

#ifndef COMP3512LAB4_CANINE_HPP
#define COMP3512LAB4_CANINE_HPP

#include "animal.hpp"

class canine:public animal {
public:
    canine(); //canine default constructor
    canine(int, double, double); //canine constructor taking int age and 2 double coordinates
    canine(const canine&); //canine copy constructor
    ~canine() override; //canine deconstructor
    void move(double, double) override; //canine move action
    void sleep() override; //canine sleep action
    void eat() override; //canine eat action
    void hunt(); //canine hunt action

    virtual std::ostream& print(std::ostream& os) const;//used for printing for the << operator override
    friend std::ostream& operator<<(std::ostream&, canine);//overrides the << operator to print
};


#endif //COMP3512LAB4_CANINE_HPP
