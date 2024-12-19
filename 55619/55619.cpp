#include <iostream>
using namespace std;

int x, y, z, w;

int main()
{
    cout << "x" << "y" << "z" << "w" << " " << "F1" << "F2" << endl;
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            for (z = 0; z <= 1; z++)
            {
                for (w = 0; w <= 1; w++)
                {
                    int F1 = ((x || !y) == (z <= w));
                    int F2 = ((!x == y) && (z <= w));

                    if ((F1 == 0) || (F1 == 1) && (F2 == 0) || (F2 == 1))
                    {
                        cout << x << y << z << w << " "  << F1 << " " << F2 << endl;
                    }
                }
            }
        }
    }
    
    return 0;
}