// Severin_lab_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

struct CS //новая структура "компрессорная станция"
{
    string title;
    string efficiency;
    int workshops;
    int workshops_at_work;
};

pipe inputPipe()//товечает за ввод данных в структуру труба
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


void outputPipe(pipe p)//отвечает за вывод текущих данных на консоль структуры труба
{
    cout << "title of pipe: " << p.title << endl
        << "length of pipe: " << p.length << endl
        << "diameter of pipe: " << p.diameter << endl
        << "mark of pipe (in repair or not): " << p.mark << endl;
}

void editPipe(pipe& p)//отвечает за изменение параметра в ремонте структуры труба
{
    cout << "edit mark of pipe (in repair or not): ";
    bool mark;
    cin >> mark;
    p.mark = mark;
}

CS inputCS()//отвечает за ввод информации в структуру компрессорная станция
{
    CS cs;
    cout << "type title of cs: ";
    cin >> cs.title;
    cout << "type efficiency of CS: ";
    cin >> cs.efficiency;
    cout << "type number of workshops: ";
    cin >> cs.workshops;
    cout << "type number of workshops at work: ";
    cin >> cs.workshops_at_work;
    return cs;
}


void outputCS(CS cs)//отвечает за вывод на экран консоли информации из структуры компрессорная станция
{
    cout << "title of cs: " << cs.title << endl
        << "efficiency of CS: " << cs.efficiency << endl
        << "number of workshops: " << cs.workshops << endl
        << "number of workshops at work: " << cs.workshops_at_work << endl;
}

void editCS(CS& cs)//изменяет значение параметра кол-во цехов в ремонте компрессорной станции
{
    cout << "edit number of workshops at work: ";
    int numb;
    cin >> numb;
    cs.workshops_at_work = numb;
}

void infinityCycl()
{
    while (true)
    {

    }
}
int main()
{
    
    infinityCycl();


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
