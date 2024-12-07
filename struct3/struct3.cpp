#include <iostream>
using namespace std;

struct event
{
    string name;
    int data;
    short school;
};

event newYear9 = {"New Year 25", 221224, 9};
event newYear12 = {"New Year Super", 251224, 12};

void printEvent(event *p)
{
    cout << p->name << p->data << p->school << endl;
}

int main()
{
    printEvent(&newYear9);
    return 0;
}