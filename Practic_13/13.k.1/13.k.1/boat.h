#ifndef BOAT_H
#define BOAT_H

#include "vehicle.h"
#include <string>
#include <iostream>

class Boat : public Vehicle {
public:
    Boat() { count++; }
    ~Boat() override { count--; }

    void move() const override {
        std::cout << "Boat is sailing on water." << std::endl;
    }

    std::string type() const override {
        return "Boat";
    }
};

#endif