#include <string>
#include <vector>

struct App
{   
    int num;
    std::string text;
    void (*f)(void);
};

//void addTask(const App&);
//void runTask();

namespace {
    std::vector<App> commands;
};

void addTask(const App& a)
{
    commands.push_back(a);
}

void runTask()
{
    for(App comm : commands)
    {
        comm.f();
    }
}