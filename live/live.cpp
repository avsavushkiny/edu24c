#include <iostream>
using namespace std;

struct event
{
    string name;
    int id;
    string email;
    int age;
    string phone_number;
    short school;
};

struct student
{
    string name;
    int id;
    string email;
    int phone_number;
    string education;
    int age;
};

event newYear[] = 
{
    {"NewYear", 1, "newyear@dedmoroz.com", 11, "+79603315820", 28},
    {"NewYear2025", 2, "new.year2025@snow.com", 12, "+79520749772", 28},
    {"NewYear2024", 3, "new_year2024@mail.com", 11, "+79271881997", 12},
    {"NewYear3026", 4, "new-year3026@Opa.com", 12, "+79870130394" , 17}
};

void struct_print(event *e)
{
    
    for (int i = 0; i < 4; i++)
    {
        cout << e[i].name << e[i].id << e[i].email << e[i].age << e[i].phone_number << e[i].school << endl;
    }
};

int main()
{
    struct_print(newYear);
    return 0;
}

