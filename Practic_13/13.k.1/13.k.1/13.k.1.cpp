#include <iostream>
#include <vector>
#include <memory>
#include <fstream>
#include <typeinfo>
#include "vehicle.h"
#include "car.h"
#include "boat.h"
#include "plane.h"
#include "amphibious_vehicle.h"
#include <windows.h>
int Vehicle::count = 0;

int main() {
    SetConsoleOutputCP(1251);
    std::vector<std::unique_ptr<Vehicle>> vehicles;

  
    vehicles.push_back(std::make_unique<Car>());
    vehicles.push_back(std::make_unique<Boat>());
    vehicles.push_back(std::make_unique<Plane>());
    vehicles.push_back(std::make_unique<AmphibiousVehicle>());
    vehicles.push_back(std::make_unique<Car>());
    vehicles.push_back(std::make_unique<Boat>());


 
    for (const auto& v : vehicles) {
        std::cout << v->type() << ": ";
        v->move();
    }

    std::cout << "\nRTTI" << std::endl;

    // Используем RTTI для определения динамического типа
    for (const auto& v : vehicles) {
        std::cout << "Type: " << v->type()
            << ", RTTI: " << typeid(*v).name() << std::endl;
    }

   
    std::cout << "Всего создано транспортных средств: " << Vehicle::getCount() << std::endl;

    // Запись в текстовый файл
    
    std::ofstream file("vehicles.txt");

    if (file.is_open()) {
        for (const auto& v : vehicles) {
            file << v->type() << ";" << typeid(*v).name() << std::endl;
        }
        file.close();
        std::cout << "Данные сохранены в файл vehicles.txt" << std::endl;
    }


    return 0;
}