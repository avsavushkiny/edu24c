#include <iostream>
using namespace std;

int c{}; int t{};
int k{};

int main()
{
    // 1
    cin >> c;
    if (c > 1000)
        cout << "Re-enter numbers" << endl;
    else
    {
        // 2
        int a[c] = {};
        for (int i = 0; i <= 2; i++)
        {
            cin >> t;
            if (t > 30000)
            {
                cout << "Re-enter data" << endl;
                i--;
            }
            else a[i] = t;
            
        }
        // 3
        for (int j = 0; j <= 2; j++)
        {
            if (a[j] % 4 == 0)
                k = k + 1;
        }

        cout << k << endl;
    }

    return 0;
}