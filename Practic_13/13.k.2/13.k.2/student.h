#include "human.h"
#include <string>
#include <vector>
#include <iostream>
#pragma once

class student : public human {

private:
    std::vector<int> scores;
public:
    student(std::string last_name, std::string name, std::string second_name,
        std::vector<int> scores) : human(last_name, name, second_name) {
        this->scores = scores;
    }

    // Переопределяем виртуальные методы
    std::string get_info() const override {
        std::ostringstream info;
        info << human::get_info() << " (Средний балл: " << get_average_score() << ")";
        return info.str();
    }

    std::string get_role() const override {
        return "Студент";
    }

    void perform_duty() const override {
        std::cout << "Студент учится, сдает экзамены и делает домашние задания" << std::endl;
    }

    float get_average_score() const
    {
        unsigned int count_scores = this->scores.size();
        unsigned int sum_scores = 0;
        float average_score;

        for (unsigned int i = 0; i < count_scores; ++i) {
            sum_scores += this->scores[i];
        }

        average_score = (float)sum_scores / (float)count_scores;
        return average_score;
    }

};