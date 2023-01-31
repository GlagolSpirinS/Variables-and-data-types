#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    setlocale(LC_ALL, "Russian_Russia.1251");

    signed int age; // типа данных возраста с модификатором
    string group, name;

    cout << "Введите ваше ФИО\n";
    getline(cin, name);
    cout << "Введите ваш возраст\n";
    cin >> age;
    cout << "Введите вашу группу\n";
    cin >> group;
    cout << "--------------------------------";
    cout << "\n";
    cout << "ФИО - " + name;
    cout << "\n";
    cout << "Возраст - " << age;
    cout << "\n";
    cout << "Ваша группа - " + group;
    cout << "\n";
    cout << "--------------------------------";

}