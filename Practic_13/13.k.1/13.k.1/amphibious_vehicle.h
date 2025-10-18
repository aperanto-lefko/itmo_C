#ifndef AMPHIBIOUS_VEHICLE_H
#define AMPHIBIOUS_VEHICLE_H

#include "vehicle.h"
#include <string>
#include <iostream>

class AmphibiousVehicle : public Vehicle {
public:
    AmphibiousVehicle() { count++; }
    ~AmphibiousVehicle() override { count--; }

    void move() const override {
        std::cout << "AmphibiousVehicle is driving on road and sailing on water." << std::endl;
    }

    std::string type() const override {
        return "AmphibiousVehicle";
    }
};

#endif