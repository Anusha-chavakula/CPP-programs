
#include <iostream>
using namespace std;
class BaseClass
{
	public:
	void add(int a, int b)
	{
		cout << "\nIn base class\n";
		cout << "\nAddition of " << a << " and " << b << " is " << b<<endl;
	}

};
class DerivedClass :BaseClass
{
public:
	void add(int a, int b)
	{
		cout << "\n In derived class\n";
		cout<<"\nAddition of "<<a<<" and "<<b<<" is "<<a + b<<endl;
	}
	void add(string a, string b)
	{
		cout << "\n In derived class\n";
		cout<<"\nConcatenation of "<<a<<" and "<<b<<" is "<<a + b<<endl;
	}
};

int main()
{
	int a, b;
	string x, y;
	cout << "Enter two numbers\n";
	cin >> a >> b;
	cout << "Enter two strings\n";
	cin >> x >> y;
	DerivedClass d;
	d.add(a, b);
	d.add(x, y);
	d.add("Hello", " World");
	d.add(544, 8654);
	BaseClass B;
	B.add(78, 35);


}



