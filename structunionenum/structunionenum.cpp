#include <iostream>
using namespace std;

class A //базовый
{
public: ~A(){}; virtual void summa() = 0;
private:
};

class B : public A // производный класс
{
public:
    B(int j, int i) : m_j(j), m_i(i) {}
    void summa() override { cout << m_j + m_i << endl;}
private:
    int m_j, m_i;
};



int main()
{
    B b(5, 3); b.summa();
    return 0;
}