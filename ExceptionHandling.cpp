#include<iostream>
using namespace std;

int main()
{
	int num[10];
	cout << "Enter number\n";
	try
	{

		for (int i = 0; i < 10; i++)
		{
			cin >> num[i];
			if (num[0] == 0||num[i]>9)
				throw num[0];
			
		}
		for (int i = 0; i < 10; i++)
		{
			cout << num[i];
		}

	}
	catch (int num)
	{
		cout << "Mobile number cann't start with 0 or it can not be 2 digit number\n";
	}
	return 0;
}