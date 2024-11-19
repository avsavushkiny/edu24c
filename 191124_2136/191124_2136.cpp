#include "lib4.h"
#include <iostream>

using namespace std;

void appSystemFunc(){ cout << "appSystemFunc" << endl;}
void appUserFunc()  { cout << "appUserFunc" << endl;}

int main()
{
    addTask({1,"sys",appSystemFunc});
    addTask({2,"usr",appUserFunc});
    runTask();
}