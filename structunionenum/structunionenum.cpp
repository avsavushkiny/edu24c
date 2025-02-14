#include <iostream>
using namespace std;

class A
{  
public:
    virtual void summa() = 0;
private:
};

class B : public A
{
public:
    void summa() override
    {
        cout << "1 func" << endl;
        cout << "summa:" << a + b << endl;
    }
private:
    int a{10}, b{10};
};

class C : public A
{
public:
    void summa() override
    {
        cout << "2 func" << endl;
        cout << "summa:" << a + b << endl;
    }
private:
    int a{1}, b{2};
};

int main()
{
    B b; b.summa();
    C c; c.summa();
    return 0;
}