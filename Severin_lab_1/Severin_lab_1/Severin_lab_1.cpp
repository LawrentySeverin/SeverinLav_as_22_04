﻿// Severin_lab_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


struct pipe // создание новой кастомной переменной "труба"
{
    string title;
    float length;
    float diameter;
    bool mark;
};

struct CS
{
    string title;
    string efficiency;
    int workshops;
    int workshops_at_work;
};

pipe inputPipe()
{
    pipe p;
    cout << "type title of pipe: ";
    cin >> p.title;
    cout << "type lenhgth of pipe: ";
    cin >> p.length;
    cout << "type diameter of pipe: ";
    cin >> p.diameter;
    cout << "type mark of pipe (in repair or not): ";
    cin >> p.mark;
    return p;
}


void outputPipe(pipe p)
{
    cout << "title of pipe: " << p.title << endl
        << "length of pipe: " << p.length << endl
        << "diameter of pipe: " << p.diameter << endl
        << "mark of pipe (in repair or not): " << p.mark << endl;
}

int main()
{
    
    //inputPipe();
    pipe pip = inputPipe();
    outputPipe(pip);



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
