#include<iostream>
using namespace std;

int n=3,top=-1;
class Stack
{
private:
	int element;
	int* stack = new int(n);
public:
	void push(int ele)
	{
		if (isFull())
		{
			cout << "Stack is full\n";
		}
		else
		{
			top++;
			stack[top] = ele;
			cout << ele << " is inserted\n";
			
		}
	}
	int pop()
	{
		if (isEmpty())
		{
			cout << "Stack is empty\n";
			return 0;

		}
		else
		{
			int n=stack[top];
			top--;
			return n;
		}
	}
	int isEmpty()
	{
		if (top == -1)
			return 1;
		else
			return 0;
	}
	int isFull()
	{
		if (top == n - 1)
			return 1;
		else
			return 0;
	}
	void display()
	{
		if (!isEmpty())
		{
			cout << "Elements in stack are\n";
			for (int i = top; i >= 0; i--)
			{
				cout << stack[i] << "\n";
			}
			
		}
		else
		{ 
			cout << "Stack is empty\n";
		}
	}

};
int main()
{
	Stack s;
	int ch,element,n;
	do
	{
	cout << "***Stack operations***" << endl;
	cout << "1.Push\n2.Pop\n3.Display\n4.Exit\n";
	cout << "Enter your choice\n";
	cin >> ch;
	
		switch (ch)
		{
		case 1:
			cout << "Enter element to be inserted\n";
			cin >> element;
			s.push(element);
			break;
		case 2:n=s.pop();
			cout <<n<< " is removed\n";
			break;
		case 3:s.display();
			break;
		case 4:break;
		default:cout << "Enter wrong choice try again!!!\n";
		}

	} while (ch<4);
}
