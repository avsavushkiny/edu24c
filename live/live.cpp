#include <iostream>
using namespace std;

struct Student
{
    string name;
    int groupNumber;
    double averageGrade;
};

Student MGU[] = 
{
    {"Ivan", 104,     3.8},
    {"Jenia", 104,    4.2},
    {"Viktoria", 101, 4.0},
    {"Vitia", 101,    4.7},
    {"Matvey", 104,   4.8}
};

void averageGradeAll()
{
    double result{};
    for (int i = 0; i < 5; i++)
    {
        result = result + MGU[i].averageGrade;
    }

    cout << result << endl;
    cout << "result: " << (result / 5.0) << endl;

    double arr[5];

    for (int j = 0; j < 5; j++)
    {
        arr[j] = MGU[j].averageGrade;
    }

    for(int l = 0; l < 5; l++)
    {
        cout << arr[l] << " ";
    }

    cout << endl;

    double buffer{};
    for (int y = 0; y < 5; y++)
    {
        for (int k = 0; k < 5; k++)
        {
            if (arr[k] < arr[k + 1])
            {
                buffer = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = buffer;
            }
        }
    }

    for(int l = 0; l < 5; l++)
    {
        cout << arr[l] << " ";
    }
}

int main()
{
    averageGradeAll();
    return 0;
}