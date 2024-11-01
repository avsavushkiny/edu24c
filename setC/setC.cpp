#include <iostream>
using namespace std;

int r[5] = {7,5,8,22,33}; int h[5] = {2,5};

int main()
{
    int result3{};
    
    for (int i = 0; i < 5; i++)
    {
        result3 = result3 + r[i];
    }

    cout << result3 << endl;
    
    return 0;
}