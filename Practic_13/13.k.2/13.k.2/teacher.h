#include "human.h"
#include <string>
#include <iostream>
#pragma once

class teacher : public human {
public:
    teacher(
        std::string last_name,
        std::string name,
        std::string second_name,
        unsigned int work_time
    ) : human(last_name, name, second_name) {
        this->work_time = work_time;
    }

    // �������������� ����������� ������
    std::string get_info() const override {
        std::ostringstream info;
        info << human::get_info() << " (����: " << work_time << ")";
        return info.str();
    }

    std::string get_role() const override {
        return "�������������";
    }

    void perform_duty() const override {
        std::cout << "������������� �������� ������, ��������� ������ � ������������� ���������" << std::endl;
    }

    // ��������� ���������� ������� �����
    unsigned int get_work_time() const
    {
        return this->work_time;
    }

private:
    unsigned int work_time;
};