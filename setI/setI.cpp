#include <iostream>
using namespace std;

int r[5] = {};

int main()
{
    cout << "Enter the data!" << endl;

    for (int j = 0; j < 5; j++)
    {
        cin >> r[j];
    }
    
    for (int i = 0; i < 5; i++)
    {
        if ((r[i] > 40) || (r[i] < -40))
        {
            cout << "Warning!" << endl;
        }
        else cout << r[i] << endl;
    }
    
    return 0;
}