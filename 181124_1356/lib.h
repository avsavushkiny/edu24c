#ifndef LIB_H
#define LIB_H

#include <iostream>
using namespace std;

void appSystemFunc(){ cout << "appSystemFunc" << endl; }

#ifndef USER
extern void appUserFunc(); //add User function
#endif

struct App
{   
    int num;
    string text;
    void (*f)(void);
};

App commands[]
{
    {1, "app system", appSystemFunc},
    
    #ifndef USER
    {2, "app user", appUserFunc},
    #endif
};

void runTask()
{
    for(App comm : commands)
    {
        comm.f();
    }
}

#endif