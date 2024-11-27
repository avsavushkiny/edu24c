#include <iostream>
using namespace std;

int c{}; int maxx{};

int main()
{
    //1
    cout << "How many numbers?" << endl;
    cin >> c;
    //2
    int a[c] = {};
    for (int i = 0; i < c; i++)
    {
        cin >> a[i];
    }
    //3
    for (int j = 0; j < c; j++)
    {
        if (a[j] % 5 == 0)
        {
            if (a[j] > maxx)
            {
                maxx = a[j];
            }
        }
    }

    cout << maxx << endl;

    return 0;
}