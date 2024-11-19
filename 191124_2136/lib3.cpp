#include <vector>
#include "lib3.h"

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