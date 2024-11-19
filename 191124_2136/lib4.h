#include <string>

struct App
{   
    int num;
    std::string text;
    void (*f)(void);
};

//void addTask(const App&);
//void runTask();

namespace {
    const int MAX_SIZE = 100;
    App commands[MAX_SIZE];
    int size = 0;
};

void addTask(const App& a)
{
    if (size < MAX_SIZE)
    {
        commands[size++] = a;
    }
}

void runTask()
{
    for(int i = 0; i < size; i++)
    {
        commands[i].f();
    }
}

