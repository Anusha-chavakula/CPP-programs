

#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    int in,size;
    cout << "Enter size of the stack\n";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element to push\n";
        cin >> in;
        s.push(in);
    }
    cout << "Elements in stack are\n";
    while (!s.empty())
    {
        cout << s.top()<<endl;
        s.pop();

    }
}


