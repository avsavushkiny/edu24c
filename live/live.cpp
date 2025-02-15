#include <iostream>
using namespace std;
int a{}; int max_number{};

int main()
{
    cout << "Кол-во чисел: " << endl;
    cin >> a;
    int numbers[a] = {};

    cout << "Введите числа: " << endl;
    for (int n = 0; n < a; n++)
    {
        cin >> numbers[n];
    }

    for (int b = 0; b < a; b++)
    {
        if (numbers[b] % 5 == 0)
        {
            if (numbers[b] > max_number)
            {
                max_number = numbers[b];
            }
        }
    }

    cout << max_number << endl;

    return 0;
}