// Prokofev 333.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main() 
{
    setlocale(0, "");
    long long factorial = 1;
    for (int i = 1; i <= 15; ++i) {
        factorial *= i;
    }
    cout << "Факториал числа 15: " << factorial << std::endl;

    return 0;
}