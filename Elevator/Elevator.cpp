﻿// Elevator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <chrono>
#include <thread>

class Elevator
{

};

class Cabine
{
private:
    int i = 1;
public:

    int Cab(int a, int time)
    {
        int N;
         loop:std::cout << "Этаж: #" << i << " ...Целевой этаж : ";
         std::cin >> N;
        if (N < 1) N = 1; if (N > 20) N = 20;
        std::cout << std::endl << "Двери закрываются" << std::endl;
        for (i = a; ; (N > i) ? i++ : i--)
        {
            if (a > 1 && N > i) { std::cout << "Ошибка!" << std::endl; goto loop; }
            std::cout << '"' << "Этаж #" << i << '"' << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(time*1000));
            if (i == N) 
            { std::cout << "Двери открываются" << std::endl; //break;
            system("pause");
            return Cab(i, time);
            };
        }


    };
};





int main()
{
    setlocale(LC_ALL, "Russian");
    Cabine S, B;
    char ss;
    std::cout << "Выберете кабину: s - маленькая / b - большая : ";
    std::cin >> ss;

    if (ss == 's') { S.Cab(1, 1); }
    if (ss == 'b') { B.Cab(1, 3); }
    
    return 0;
};



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
