#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void swapNumbers(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int findPivot(int arr[], int low, int high)
{
	int pivot = arr[high];
	int swapIndex = low - 1;

	for (int i = low; i < high; i++)
	{
		if (arr[i] <= pivot)
		{
			swapIndex++;
			swapNumbers(&arr[swapIndex], &arr[i]);
		}
	}

	swapNumbers(&arr[swapIndex + 1], &arr[high]);
	return (swapIndex + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pivot = findPivot(arr, low, high);
		quickSort(arr, low, pivot - 1);
		quickSort(arr, pivot + 1, high);
	}
}

int main()
{
	int array[] = {8, 7, 6, 1, 0, 9, 2};
	int arraySize = *(&array + 1) - array;

	cout << "Input Array: ";
	printArray(array, arraySize);
	cout << endl;

	quickSort(array, 0, arraySize - 1);

	cout << "Output Array: ";
	printArray(array, arraySize);
	cout << endl;

	return 0;
}