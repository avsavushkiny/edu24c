#include <iostream>
using namespace std;

short a;  //2 -32768 32767
int b;    //2 4
float c;  //4
char f;   //1
double g; //8

int q = 10;
int qq = 10, yy = 21, uu = 128;

int w{2}; int e{};

int r[5] = {7,5,8,22,33}; int h[5] = {2,5};

int main()
{
    a = 2; b = 3; c = 5.2; f = 'A'; g = 7.4;

    double result = a + b + c + f + g;

    short result2 = r[0] + r[1] + r[2] + r[3] + r[4]; 
    
    cout << result2 << endl;
    
    return 0;
}