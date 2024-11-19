#include "lib2.h"

kernel<2> OS;

void userFunc() { cout << "user func" << endl; }

int main()
{
    OS.attach(userFunc, 1);
    OS.attach(userFunc, 2);
}