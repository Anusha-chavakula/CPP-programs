
#include <iostream>
using namespace std;

int main()
{
	int size, key, count=0,index;
	cout <<" Enter size of an array\n";
	cin >> size;
	int* array = new int[size];
	cout << "Enter elements in ascending order\n";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
	cout << "Enter key to search\n";
	cin >> key;
	int low = 0, high = size;
	int mid;
	while(low<=high)
	{
		mid = (low + high) / 2;
		if (array[mid]==key)
		{
			count = 1;
			index = mid + 1;
			break;
		}
		else if (array[mid]>key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	if (count == 1)
		cout << key << " found at " << index;
	else
		cout << key << " not found";
}

