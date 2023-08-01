#pragma once
#include <iostream>

class Floor
{
private:
    char li;
    int start_floor;
    char size;
public:
    Floor(int start_floor)
    {
        this->start_floor = start_floor;
    }
    void call_button()
    {
        std::cout << "�������� ������: s - ��������� / b - ������� : ";
        std::cin >> size;
        if (start_floor == 1) std::cout << "������� ���� (������ �����)? y - �� / n - ��� : ";
        else std::cout << "������� ���� (������ ����)? y - �� / n - ��� : ";
        std::cin >> li;
    }
    const char get_sf() { return start_floor; }
    const char get_ss() { return size; }
    const char get_li() { return li; }
};