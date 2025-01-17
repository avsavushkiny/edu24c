#include <iostream>
using namespace std;

enum Color
{
    RED, GREEN, BLUE
};

Color Student = RED;

int main()
{
    cout << sizeof(Student);
}