#include <iostream>
using namespace std;

int x, y, z;

int main()
{
    cout << "x" << "y" << "z" << endl;
    
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            for (z = 0; z <= 1; z++)
            {
                int F = ((x || y) <= (z == x));

                if (F == 0)
                {
                    cout << x << y << z << endl;
                }
            }
        }
    }

    return 0;
}