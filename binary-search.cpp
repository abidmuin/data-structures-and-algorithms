// ITERATIVE APPROACH

#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int elementToFind)
{
	int arraySize = *(&array + 1) - array;
	int low = 0;
	int high = arraySize - 1;
	int mid = 0;

	while (low <= high)
	{
		mid = (low + (high-low)) / 2;

		if (array[mid] == elementToFind)
		{
			return mid;
		}
		if (elementToFind > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int array[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
	int elementToFind = 10;
	int resultIndex = 0;

	resultIndex = binarySearch(array, elementToFind);

	if (resultIndex == -1)
	{cout << "Element Not Found." << endl;
	}
	else{
		cout << "Element is at index: " << resultIndex << endl;
	}

	return 0;
}