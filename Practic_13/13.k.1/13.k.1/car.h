#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
#include <string>
#include <iostream>
using namespace std;

class Car : public Vehicle {
public:
    Car() { count++; }
    ~Car() override { count--; }

    void move() const override {
        std::cout << "Car is driving on the road." << std::endl;
    }

    std::string type() const override {
        return "Car";
    }
};

#endif