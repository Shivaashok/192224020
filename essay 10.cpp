#include <stdio.h>

void selectionSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
	int minIndex = i;
	for (j = i + 1; j < n; j++)
	{
		if (arr[j] < arr[minIndex])
		{
			minIndex = j;
		}
	}
	int temp = arr[minIndex];
	arr[minIndex] = arr[i];
	arr[i] = temp;
	}
}

int main()
{
	int arr[] = {5, 2, 8, 1, 9, 6, 3, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Original array: ");
	int i;
	for (i = 0; i < n; i++)
	{
	    printf("%d ", arr[i]);
	}
	printf("\n");
	
	selectionSort(arr, n);
	
	printf("Sorted array: ");
	for (i = 0; i < n; i++)
	{
	    printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
