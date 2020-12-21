
#include <iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int> q;
	int size,ele;
	cout << "Enter size of queue\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter element to push\n";
		cin >> ele;
		q.push(ele);
	}
	cout << "Front element of queue is " << q.front() << endl;
	cout << "Last element of queue is " << q.back() << endl;
	q.emplace(90);
	cout << "After emplace() last element of queue is " << q.back();
	while (!q.empty())
	{
		cout << "\n"<<q.front();
		q.pop();
	}
	

}


