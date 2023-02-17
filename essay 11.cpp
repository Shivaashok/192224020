#include <stdio.h>

void insertElement(int arr[], int n, int element, int index)
{
	int i;
	for (i = n - 1; i >= index; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[index] = element;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int element = 9;
	int index = 2;
	printf("Original array: ");
	int i;
	for (i = 0; i < n; i++)
	{
	    printf("%d ", arr[i]);
	}
	printf("\n");
	
	insertElement(arr, n, element, index);
	
	printf("Array after inserting element: ");
	for (i = 0; i <= n; i++)
	{
	    printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
