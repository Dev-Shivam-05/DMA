#include<iostream>
using namespace std;

int main()
{
    int* array,size;

    cout << "Enter The Size Of Array :- ";
    cin >> size;

    array = new int[size];

    if (array == NULL)
    {
        cout << "Memory Allocation Failed" << endl;
        return 1;
    }
    else
    {
        cout << "Memory Allocation Successfully Executed." << endl;
    }

    delete[] array;

    return 0;
}