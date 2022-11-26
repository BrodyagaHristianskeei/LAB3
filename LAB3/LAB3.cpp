// LAB3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
//#include <iostream> Подкючает библиотеку input-output stream для вывода и ввода в консоль
#include <Windows.h>
//#include <Windows.h> позволяет работать с кирилицей в консоли, включает функции WinAPI sleep(), beep() и т.д
#include <String>
using std::string;
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 10;
    int* ya;
    ya = &a;
    cout << "адресс указателя = " << ya << " значение указателя = " << *ya;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"