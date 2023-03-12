#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    int n = 0;
    cout << "Сколько чисел вы будете вводить?" << endl;
    cin >> n;

    int num = 0, min = 0, max = 0, sum = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << "Введите число: " << endl;
        cin >> num;
        if ((num < min) || (i == 1))
        {
            min = num;
        }
        
        if ((num > max) || (i == 1)) 
        {
            max = num;
        }

        sum += num;

        if (i > 1)
        {
            cout << "Минимальное число: " << min << endl;
            cout << "Максимальное число: " << max << endl;
            cout << "Сумма чисел: " << sum << endl;
            cout << "Среднее арифметическое чисел: " << (double) sum / i << endl << endl;
        }
    }
}