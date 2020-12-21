

#include <iostream>
using namespace std;

int main()
{
    int size, key,count=0,index;
    cout << "Enter size of array\n";
    cin >> size;
    int* array = new int[size];
    cout << "Enter elements to insert\n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Enter element to search\n";
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            count = 1;
            index = i;
            break;
        }
    }
    if (count == 1)
        cout << key << " is found at position " << index+1;
    else
        cout << key << " is not found";
    
}


