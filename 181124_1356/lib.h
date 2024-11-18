#ifndef LIB_H
#define LIB_H

#include <iostream>
using namespace std;

void appSystemFunc(){ cout << "appSystemFunc" << endl;}


struct App
{   
    int num;
    string text;
    void (*f)(void);
};

App commands[]
{
    {1, "app system", appSystemFunc},
    {1, "app system", appUserFunc},
};

void runTask()
{
    for(App comm : commands)
    {
        comm.f();
    }
}

#endif