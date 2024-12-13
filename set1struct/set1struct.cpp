#include <iostream>
using namespace std;

struct Student
{
    string name;
    int groupNumber;
    double averageGrade;
};

void printStudentsSet1(Student *s) //set1
{   
    for (int i = 0; i < 3; ++i)
    {
        cout << s[i].name << endl;
        cout << s[i].groupNumber << endl;
        cout << s[i].averageGrade << endl;
    }
}

void printStudentsSet2(Student *s) //set1
{   
    for (int i = 0; i < 3; ++i)
    {
        cout << s[i].name << endl;
        cout << s[i].groupNumber << endl;
        cout << s[i].averageGrade << endl;
    }

    double arr[3] = {};
    for (int j = 0; j < 3; j++)
    {
        arr[j] = s[j].averageGrade;
    }

    double buffer{};
    for (int k = 0; k < 3; k++)
    {
        for (int kk = 0; kk < 3; kk++)
        {
            if (arr[kk] < arr[kk + 1])
            {
                buffer = arr[kk];
                arr[kk] = arr[kk + 1];
                arr[kk + 1] = buffer;
            }
        }
    }

    for (int l = 0; l < 3; l++)
    {
        cout << arr[l] << " ";
    }
}

int main()
{
    Student MGU[] = 
    {
        {"Ivan", 101, 4.5},
        {"Maria", 102, 3.8},
        {"Petr", 103, 4.2}
    };
    
    printStudentsSet2(MGU);
    
    return 0;
}
