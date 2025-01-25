#include <iostream>
using namespace std;

struct Student
{
    double A; double B; double F; double D; int Y;
};

int main()
{
    Student C; //8 + 8 + 8 + 8 + 4 = 36
    cout << sizeof(C); //40
    return 0;
}