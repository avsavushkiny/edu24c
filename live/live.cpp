#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string fullName;
    int groupNamber;
    string faculty;
};

Student allStudent[]
{
    {"Alex", 103, "it"},
    {"Misha", 103, "it"},
    {"Sergey", 103, "it"}
};

void searchStudent()
{
    while (1)
    {
        string textUser; bool flag = false;
        cin >> textUser;

        for (Student lo : allStudent)
        {
            if (lo.fullName.compare(textUser) == 0)
            {
                cout << lo.fullName << lo.groupNamber << lo.faculty << endl;
                flag = true;
                break;
            }
        }

        if (flag == false) cout << "re-enter" << endl;
    }
}

int main()
{
    searchStudent();
    
    return 0;
}