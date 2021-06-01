#include <bits/stdc++.h>
using namespace std;

void printarray(std::vector<int> arr)
{
	for (auto x : arr)
		cout << x << " ";
}

int main()
{
	std::vector<int> arr; // let's say only 100 number in stream to avoid infinite loop
	int n, i = 0;
	int count = 0;
	while (i < 100)
	{
		cin >> n;
		count++;
		arr.push_back(n);
		int len = arr.size();
		sort(arr.begin(), arr.end());
		if (len % 2 == 1)
		{
			int median = arr[len / 2];
			cout << "After reading " << count << "st element of stream ";
			printarray(arr);
			cout << " -> " << "median - " << arr[len / 2] << endl;

		}
		else
		{
			int median = (arr[len / 2] + arr[len / 2 - 1]) / 2;
			cout << "After reading " << count << "st element of stream ";
			printarray(arr);
			cout << " -> " << "median - " << median << endl;
		}
		i++;
	}
	return 0;
}