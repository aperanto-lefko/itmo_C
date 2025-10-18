#ifndef PLANE_H
#define PLANE_H

#include "vehicle.h"
#include <string>
#include <iostream>

class Plane : public Vehicle {
public:
    Plane() { count++; }
    ~Plane() override { count--; }

    void move() const override {
        std::cout << "Plane is flying in the sky." << std::endl;
    }

    std::string type() const override {
        return "Plane";
    }
};

#endif