#include <iostream>
using namespace std;

class A
{
public:
    A(int a0, int b0, int c0) : a(a0), b(b0), c(c0) {}

    int summa()
    {
        return a + b + c;
    }
private:
    int a,b,c;
};



int main()
{
    A student(3, 5, 2); cout << student.summa();
    
    return 0;
}