#ifndef LIB2_H
#define LIB2_H

#include <iostream>
using namespace std;

void systemFunc() { cout << "system func" << endl; }

template <int8_t _amount>
class kernel
{
public:
    
    struct Appl
    {
        int num;
        string text;
        void (*f)(void);
    };

    Appl commands[_amount]
    {
        {1, "system", systemFunc},
    };

    void runTask()
    {
        for (const auto& comm : commands)
        {
            comm.f();
        }
    }

    void attach(void (*f)(void))
    {
        callbacks[num] = f;
    }

private:
    void (*callbacks[_amount])() = {};
    int num[_amount]; string text[_amount]; 
};

#endif