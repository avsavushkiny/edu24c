#include <iostream>
using namespace std;

int userData{};

void enterData()
{
    cout << "Please. Enter the data! or 0 to EXIT" << endl;
    cin >> userData;
}

void outputData()
{
    int resultData{};
    resultData = userData * 60;
    cout << "RESULT" << endl;
    cout << "Enter the data of hours: " << userData << endl;
    cout << "Minute: " << resultData << endl;
}

int main()
{
    for (;;)
    {
        enterData();
        if (userData == 0) break;
        else outputData();
    }

    return 0;    
}