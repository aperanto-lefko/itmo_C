#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <typeinfo>
using namespace std;
class Vehicle {
public:
    virtual void move() const = 0;
    virtual std::string type() const = 0;
    virtual ~Vehicle() = default;

  
    static int getCount() { return count; }

protected:
    static int count; 
};

#endif