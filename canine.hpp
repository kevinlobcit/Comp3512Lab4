//
// Created by Owntrolf on 2018-10-12.
//

#ifndef COMP3512LAB4_CANINE_HPP
#define COMP3512LAB4_CANINE_HPP

#include "animal.hpp"

class canine:public animal {
public:
    canine();
    canine(int, double, double);
    canine(const canine&);
    ~canine() override;
    void move(double, double) override;
    void sleep() override;
    void eat() override;
    void hunt();

    virtual std::ostream& print(std::ostream& os) const;
    friend std::ostream& operator<<(std::ostream&, canine);
};


#endif //COMP3512LAB4_CANINE_HPP
