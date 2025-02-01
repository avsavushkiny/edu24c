#include <iostream>
using namespace std;

class A
{
public:
    A(int a, int b) : m_a(a), m_b(b) {}
    void summa() { cout << m_a + m_b << endl; }
private:
    int m_a{}, m_b{};
};

int main()
{
    A f(2, 3); f.summa();
    return 0;
}