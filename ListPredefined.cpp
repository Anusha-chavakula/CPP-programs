

#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1, l2 = {1,2,3,4 };
    list<int>::iterator it;
    l1.push_back(78);
    l1.push_front(23);
    l1.push_back(374);
    l1.push_back(65);
    l1.push_front(54);
    cout << "Size of List1 is " << l1.size();
    cout << "\nElements after inserting\n";
    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    l1.sort();
    cout << "\nAfter sorting \n";
    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    l2.merge(l1);
    cout << "\nAfter merging \n ";
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << " ";
    }
    l2.reverse();
    cout << "\nAfter Reversing\n";
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << " ";
    }
    
}

