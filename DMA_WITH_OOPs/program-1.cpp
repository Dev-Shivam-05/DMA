#include<iostream>
using namespace std;

class Demo 
{
private:
    int* array;
    int size;
public:
    Demo(int size)
    {
        this->size = size;
        array = new int[size];
        cout << "Memory Allocation" << endl;
    }
    ~Demo()
    {
        delete[] array;
        cout << "Memory Deallocated" << endl;
    }
    void AddElementAt(int index,int element)
    {
        // int i=0;
        if (index >= 0 && index < size)
        {
            array[index] = element;
        }
    }
    void PrintElementAt()
    {
        int i=0;
        while (i < size)
        {
            cout << "Array Of ["<< i+1 <<"] :- " << array[i] << endl;
            i++;
        }
    }
};

int main()
{
    int* array;
    int size;

    cout << "Enter the Size Of Array :- ";
    cin >> size;

    array = new int[size];
    Demo obj(5);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Element Of Array["<< i+1 <<"] :- ";
        cin >> array[i];

        obj.AddElementAt(i,array[i]);
    }
    
    // for (int i = 0; i < size; i++)
    // {
        obj.PrintElementAt();
    // }
    

    return 0;
}