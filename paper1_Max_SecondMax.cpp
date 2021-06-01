#include <bits/stdc++.h>
using namespace std;

int getSmallest(int arr[], int n)  // O(n) time complexity
{
	int min_idx = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < arr[min_idx])
			min_idx = i;

	}
	return min_idx;
}

int secondSmallest(int arr[], int n)  // O(n) time complexity
{
	int res = -1, smallest = getSmallest(arr, n);
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] != arr[smallest])
		{
			if (res == -1)
				res = i;
			else if (arr[i] < arr[res])
				res = i;
		}
	}
	return res;
}

int main()
{
	int arr[] = {12, 13, 1, 10, 34, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("The smallest element is %d\nand second Smallest element is %d\n", arr[getSmallest(arr, n)], arr[secondSmallest(arr, n)]);
	return 0;
}

// time complexity of the solution is O(sizeOfArray)
// auxiliary Space is O(1)