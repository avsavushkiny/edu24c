#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student
{
    string fullName;
    int groupNumber;
    string faculty;
};

Student allStudentMGU[]
{
    {"Golovina", 103, "it security"},
    {"Golovin", 103, "it security"},
    {"Astaykin", 103, "it security"},
    {"Kurgaev", 101, "hogwarts"},
    {"Emelin", 110, "hogwarts"}
};

void studentSearch(const Student students[], size_t numOfStudents)
{
    while (true)
    {
        string textUser;
        cout << "Enter a student's full name: ";
        cin >> textUser;
        
        bool found = false;
        
        for (size_t i = 0; i < numOfStudents; ++i)
        {
            if (students[i].fullName == textUser)
            {
                found = true;
                cout << students[i].fullName << " "
                     << students[i].groupNumber << " "
                     << students[i].faculty << endl;
                break;
            }
        }
        
        if (!found)
        {
            cout << "No such student found. Please try again." << endl;
        }
    }
}

int main ()
{
    const size_t numOfStudents = sizeof(allStudentMGU) / sizeof(allStudentMGU[0]);
    studentSearch(allStudentMGU, numOfStudents);
    return 0;
}
