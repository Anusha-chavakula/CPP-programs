

#include <iostream>
using namespace std;

int front = -1, rear = -1, n = 10;

class Queue
{
private:
    int* queue = new int[n];
public:
    void push(int ele)
    {
        if(isFull())
        {
            cout << "Queue if full";
        }
        else
        {
            if(front==-1)
               front = 0;
            rear++;
            queue[rear] = ele;
            
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Queue is empty";
        }
        else
        {
            int n = queue[front];
            front++;
            return n;
        }
    }
    int isEmpty()
    {
        if (front == -1 || front > rear)
            return 1;
        else
            return 0;

    }
    int isFull()
    {
        if (rear == n - 1)
            return 1;
        else
            return 0;
    }
    void display()
    {
        if (isEmpty())
            cout << "Queue is empty";
        else
        {
            cout << "Elements in queue are\n";
            for (int i = front; i <= rear; i++)
            {
                cout << queue[i] << endl;
            }
        }

    }
};
int  main()
{
    int element, n, ch;
    Queue q;
    do
    {
    cout << "***QUEUE OPERATIONS***\n";
    cout << "1.Push\n2.Pop\n3.Display\n4.Exit\n";
    cout << "Enter your choice\n";
    cin >> ch;
    switch (ch)
    {
    case 1:cout << "Enter element to insert\n";
        cin >> element;
        q.push(element);
        break;
    case 2:n = q.pop();
        cout << n << " is removed\n";
        break;
    case 3:q.display();
        break;
    case 4:break;
    default:cout << "Wrong choice try again!!!!\n";
    }
}while (ch != 4);
    
}


