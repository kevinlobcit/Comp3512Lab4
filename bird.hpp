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
    bird();
    bird(int, double, double, double);
    bird(const bird&);
    ~bird() override;
    void move(double,double,double);
    void sleep() override;
    void eat() override;

    virtual std::ostream& print(std::ostream& os) const;
    friend std::ostream& operator<<(std::ostream&, const bird&);


};


#endif //COMP3512LAB4_BIRD_HPP
