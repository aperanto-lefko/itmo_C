#pragma once
#include <string>
#include <sstream>
#include <iostream>

class human {
    private:
    std::string name;
    std::string last_name;
    std::string second_name;
public:
    human(std::string last_name, std::string name, std::string second_name)
    {
        this->last_name = last_name;
        this->name = name;
        this->second_name = second_name;
    }

    virtual std::string  get_info() const
    {
        std::ostringstream full_name;
        full_name << this->last_name << " "
            << this->name << " "
            << this->second_name;
        return full_name.str();
    }

    virtual std::string get_role() const
    {
        return "Человек";
    }

    
    virtual void perform_duty() const
    {
        std::cout << "Выполняет общие человеческие обязанности" << std::endl;
    }

    // Виртуальный деструктор
    virtual ~human() = default;

};