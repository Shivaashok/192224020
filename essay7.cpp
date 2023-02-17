#include <stdio.h>

int binarySearch(int arr[], int n, int key) 
{
	int low = 0, high = n - 1, mid;
	while (low <= high) 
		{
			mid = (low + high) / 2;
			if (arr[mid] == key) 
			{
				return mid;
			}
			else if (arr[mid] < key) 
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
	int arr[] = {1, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 5;
	int position = binarySearch(arr, n, key);
	if (position == -1)
	{
    	printf("Element not found in the array\n");
	}
	else
	{
    	printf("Element found at position %d\n", position + 1);
	}
	return 0;
}

