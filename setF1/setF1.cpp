#include <iostream>
using namespace std;

void summa() //5
{
    int a{2}, b{3};
    cout << a + b << endl;
}

int summa2() //5
{
    int a{2}, b{3};
    return (a + b);
}

int summa3(int aa, int bb)
{
    return (aa + bb);
}

int main()
{  
    cout << summa3(2, 3);
    
    return 0;
}