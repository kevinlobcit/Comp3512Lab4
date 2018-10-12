//
// Created by Owntrolf on 2018-10-12.
//

#ifndef COMP3512LAB4_ANIMAL_HPP
#define COMP3512LAB4_ANIMAL_HPP


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
    animal(animal);
    ~animal();


    virtual void move(double, double);



};


#endif //COMP3512LAB4_ANIMAL_HPP
