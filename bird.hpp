//
// Created by Owntrolf on 2018-10-12.
//

#ifndef COMP3512LAB4_BIRD_HPP
#define COMP3512LAB4_BIRD_HPP

#include "animal.hpp"

class bird:public animal {
private:
    double height;






public:
    bird(); //default bird constructor
    bird(int, double, double, double); //bird constructor using int age 2 double coordinates and 1 double height
    bird(const bird&); //bird copy constructor
    ~bird() override; //bird deconstructor
    void move(double,double,double); //bird movement using 2 double coordinates and 1 double height
    void sleep() override; //bird sleep action
    void eat() override; //bird eat action

    virtual std::ostream& print(std::ostream& os) const; //used for printing for the << operator override
    friend std::ostream& operator<<(std::ostream&, const bird&);//overrides the << operator to print


};


#endif //COMP3512LAB4_BIRD_HPP
