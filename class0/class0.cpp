#include <iostream>
using namespace std;

class A
{
public:
    int summa()
    { return 2 + 3; }

    struct Student
    {
        string name;
    };
    Student k;

private:
    int a{}, b{}, c{};
};

int main()
{
    A a;
    A::Student g; g.name = "Alexnder";
    a.k.name = "Misha";

    cout << a.summa() << endl << g.name << endl << a.k.name << endl;
    
    return 0;
}
