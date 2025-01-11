#include <iostream>
#include <string>
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

void studentSearch()
{
    while (1)
    {
        bool state;
        string textUser;
        cin >> textUser;
        for (Student st : allStudentMGU)
        {
            if (st.fullName.compare(textUser) == 0)
            {
                state = true;
                cout << st.fullName << " " << st.groupNumber << " " << st.faculty << endl; break;
            }
            else state = false;
        }
        if (state == false) cout << "Please re-enter data!" << endl;
    }
}

int main ()
{
    studentSearch(); return 0;
}