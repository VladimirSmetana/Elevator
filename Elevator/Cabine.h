#pragma once
#include <iostream>
#include <chrono>
#include <thread>

class Cabine
{
private:
    //int i = 1;
    int time;
    int a;
    int N;
    char button;
    int count = 0;
    int door;
public:
    Cabine(int a, int time)
    {
        this->time = time;
        this->a = a;
    }

    void Administrator()
    {
        std::cout << std::endl << "��� ����� ����� ����� ��� ���. ��������� �������� � ���� ����� �����." << std::endl;
    }

    void e_close()
    {
        if (door != 1) { std::cout << std::endl << "����� �����������" << std::endl; door = 1; }
    }

    void e_open()
    {
        if (door != 0) { std::cout << "����� �����������" << std::endl; door = 0; }
    }

    void e_exit()
    {
        e_open();
        std::cout << "�������� ���!" << std::endl;
        e_close();
    }


    int Cab()
    {
        if (count > 0) e_open();

        //system("pause");
        goto loop3;
    loop: std::cout << "�������� ��������: f - ������� ����; o - ������� �����; c - ������� �����; d - ������� ����������; s - ����� �� ����� :";
        std::cin >> button;
        switch (button)
        {
        case 'f': goto loop2;
        case 'o': e_open(); goto loop;
        case 'c': e_close(); goto loop;
        case 'd': Administrator(); goto loop;
        case 's': e_exit(); return 0;
        }

    loop2: std::cout << "����: #" << a << " ...������� ���� (1-20) : ";
        std::cin >> N;
        if (N < 1) N = 1; if (N > 20) N = 20;
    loop3:
        if (count == 0) { N = a; a = 1; }
        e_close();
        for (int i = a; ; (N > i) ? i++ : i--)
        {
            std::cout << '"' << "���� #" << i << '"' << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(time * 1000)); count++;
            if (i == N)
            {
                e_open();
                a = i;
                goto loop;
            };
        };
    };
};