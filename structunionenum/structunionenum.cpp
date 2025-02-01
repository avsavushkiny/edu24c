#include <iostream>
using namespace std;

class A
{
public: int f, d;
private: int k, l;
};

class B : A
{
public: int summa() { return f + d; }
private:
};


int main()
{
    A a; B b; a.d = 3, a.f = 2; 
    cout << b.summa() << endl;
}