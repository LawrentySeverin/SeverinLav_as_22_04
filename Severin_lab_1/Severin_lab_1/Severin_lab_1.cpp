#include <iostream>
#include <fstream>
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

bool isItNum(double d)
{

    return d >= 0;

}

pipe inputPipe()//товечает за ввод данных в структуру труба
{
    pipe p;
    cout << "type title of pipe: ";
    cin >> p.title;
    cout << "type length of pipe: ";
    cin >> p.length;
    cout << "type diameter of pipe: ";
    cin >> p.diameter;
    do
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "type mark of pipe (0 or 1): ";
        cin >> p.mark;
    }while (!isItNum(p.mark));

    return p;
}

void savePipe(pipe& p)//товечает за ввод данных в структуру труба
{
    ofstream fout;
    fout.open("pipe.txt", ios::out);
    if (fout.is_open())
    {
        fout << p.title << endl << p.length << endl << p.diameter << endl << p.mark;
        fout.close();
    }
}


void outputPipe(pipe& p)//отвечает за вывод текущих данных на консоль структуры труба
{
    cout << "title of pipe: " << p.title << endl
        << "length of pipe: " << p.length << endl
        << "diameter of pipe: " << p.diameter << endl
        << "mark of pipe (in repair or not): " << p.mark << endl;
}

pipe loadPipe()//отвечает за вывод текущих данных на консоль структуры труба
{
    ifstream fin;
    pipe p;
    fin.open("pipe.txt", ios::in);
    if (fin.is_open())
    {
        fin >> p.title;
        fin >> p.length;
        fin >> p.diameter;
        fin >> p.mark;
        fin.close();
    }
    return p;
}

void editPipe(pipe& p)//отвечает за изменение параметра в ремонте структуры труба
{
    do
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "edit mark of pipe (0 or 1): ";
        bool mark;
        cin >> mark;
        p.mark = mark;
    } while (!isItNum(p.mark));
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


void saveCS(CS& cs)//товечает за ввод данных в структуру труба
{
    ofstream fout;
    fout.open("cs.txt", ios::out);
    if (fout.is_open())
    {
        fout << cs.title << endl << cs.efficiency << endl << cs.workshops << endl << cs.workshops_at_work;
        fout.close();
    }
}


void outputCS(CS& cs)//отвечает за вывод на экран консоли информации из структуры компрессорная станция
{
    cout << "title of cs: " << cs.title << endl
        << "efficiency of CS: " << cs.efficiency << endl
        << "number of workshops: " << cs.workshops << endl
        << "number of workshops at work: " << cs.workshops_at_work << endl;
}

CS loadCS()//отвечает за вывод текущих данных на консоль структуры труба
{
    ifstream fin;
    CS cs;
    fin.open("cs.txt", ios::in);
    if (fin.is_open())
    {
        fin >> cs.title;
        fin >> cs.efficiency;
        fin >> cs.workshops;
        fin >> cs.workshops_at_work;
        fin.close();
    }
    return cs;
}

void editCS(CS& cs)//изменяет значение параметра кол-во цехов в ремонте компрессорной станции
{
    do
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "edit number of workshops at work: ";
        int numb;
        cin >> numb;
        cs.workshops_at_work = numb;
    } while (!isItNum(cs.workshops_at_work));
}

void mainMenu()
{

    cout << "Selection menu" << endl
        << "****************************" << endl
        << "1 - add pipe" << endl
        << "2 - add CS" << endl
        << "3 - see all objects" << endl
        << "4 - edit pipe" << endl
        << "5 - edit CS" << endl
        << "6 - save" << endl
        << "7 - download" << endl
        << "0 - exit" << endl;

}

int maain()
{
    pipe pip;
    CS cs;
    while (true)
    {
        mainMenu();
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            pip = inputPipe();
            break;
        }
        case 2:
        {
            cs = inputCS();
        }
        break;
        case 3:
        {
            outputPipe(pip);
            outputCS(cs);
            break;
        }
        case 4:
        {
            editPipe(pip);
            break;
        }
        case 5:
        {
            editCS(cs);
            break;
        }
        case 6:
        {
            savePipe(pip);
            saveCS(cs);
            break;
        }
        case 7:
        {
            loadPipe();
            loadCS();
            break;
        }
        case 0:
        {
            return 0;
        }
        default:
        {
            cout << "Wrong Action" << endl;
        }
        return 0;
        }
    }
}

    
// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
