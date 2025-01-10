#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string fullName; int groupNumber; string faculty;
};

Student allStudentMGU[] =
{
    {"Golovina Viktoriya", 103, "IT Security"},
    {"Ryabkov Artem", 103, "IT Security"},
    {"Emelin Egor", 104, "IT Security"},
    {"Soloncov Matvey", 105, "IT Security"},
    {"Chadin Ivan", 103, "IT Security"}, 
    {"Glotov Artem", 105, "Server Security"},
    {"Artem Glyhov", 106, "IT Security"}
};

void studentPoisk()
{
    int a;
    for (;;)
    {
        string text = "";
        cin >> text;
        for (Student st : allStudentMGU)
        {
            int aa = st.fullName.compare(text);
            if (aa > 5)
            {
                cout << st.fullName << st.groupNumber << st.faculty << endl;
                break;
            }
            else cout << "re-enter data" << endl;
        }
        cout << "quit -> 0 or next -> 1?";
        cin >> a;
        if (a == 0) {
            break;
        }
        if (a == 1)
            cout << "Enter name Student" << endl;
    }
}

int main()
{
    studentPoisk(); return 0;
}

