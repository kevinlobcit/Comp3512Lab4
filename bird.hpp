//
// Created by Owntrolf on 2018-10-12.
//

#ifndef COMP3512LAB4_BIRD_HPP
#define COMP3512LAB4_BIRD_HPP

#include "animal.hpp"

class bird:private animal {
private:
    double height;






public:
    bird();
    bird(int, double, double, double);
    bird(const bird&);
    ~bird();
    void move(double,double,double);
    void sleep();
    void eat();
    friend std::ostream& operator<<(std::ostream&, bird);


};


#endif //COMP3512LAB4_BIRD_HPP
