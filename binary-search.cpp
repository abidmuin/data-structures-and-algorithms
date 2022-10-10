/*

----------------------------
Time Complexities
----------------------------
Best Case => O(1)
Average Case => O(log n)
Worst Case => O(log n)

----------------------------
Space Complexity
----------------------------
Space Complexity => O(1).

*/

// ITERATIVE APPROACH

#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int elementToFind, int low, int high)
{
	int mid = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;

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
	int arraySize = *(&array + 1) - array;
	int elementToFind = 110;

	int startIndex = 0;
	int endIndex = arraySize - 1;
	int resultIndex = 0;

	resultIndex = binarySearch(array, elementToFind, startIndex, endIndex);

	if (resultIndex == -1)
	{
		cout << "Element Not Found." << endl;
	}
	else
	{
		cout << "Element is at index: " << resultIndex << endl;
	}

	return 0;
}

// RECURSIVE APPROACH

#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int elementToFind, int low, int high)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;

		if (array[mid] == elementToFind)
		{
			return mid;
		}

		if (elementToFind < array[mid])
		{
			return binarySearch(array, elementToFind, low, mid - 1);
		}

		return binarySearch(array, elementToFind, mid + 1, high);
	}

	return -1;
}

int main()
{
	int array[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
	int arraySize = *(&array + 1) - array;
	int elementToFind = 110;

	int startIndex = 0;
	int endIndex = arraySize - 1;
	int resultIndex = 0;

	resultIndex = binarySearch(array, elementToFind, startIndex, endIndex);

	if (resultIndex == -1)
	{
		cout << "Element Not Found." << endl;
	}
	else
	{
		cout << "Element is at index: " << resultIndex << endl;
	}

	return 0;
}