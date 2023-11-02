#include <iostream> // Библиотека для работы с потоками ввода-вывода

using namespace std; // Пространство имен std

double x, y; // Описание переменных

double fact(float n)
{
    if (n >= -8 && n < -5) // Проверка соответствия x данному промежутку
        y = 0 * n - 3;     // По введенному x просчитывается y
    else if (n >= -5 && n < -3)
        y = 1 * n + 3;
    else if (n >= -3 && n < 3)
        y = sqrt(9 - pow(n, 2));
    else if (n >= 3 && n < 8)
        y = 0.625 * n - 2;
    else if (n >= 8 && n <= 10)
        y = 0 * n + 3;
    return y;
}
void main()
{
    for (x = -8; x <= 10; x++)
    {
        y = fact(x);        // Нахождение y
        cout <<"X = "<< x ;
        cout << "\t Y =" << y << endl; // вывод каждого y
    }
}
