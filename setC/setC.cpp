#include <iostream>
using namespace std;

int arr[] = {1,2,3,4,5};  //размер массива указали не явно
int arr2[3] = {10,20,30}; //размер массива указали явно

char arr3[] = {'h','e','l','l','o'};

int main()
{ 
    //для arr
    for (int j = 0; j < (sizeof(arr)/sizeof(arr[0])); j++)
    {
        cout << arr[j] << endl;
    }
    
    //для arr2
    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i] << endl;
    }

    //для arr3 просто применили короткую запись цикла for
    //для каждого ch из arr3
    for (char ch : arr3)
    {
        cout << ch;
    }

    return 0;
}