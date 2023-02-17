#include <stdio.h>

void findMthMaxAndNthMin(int arr[], int n, int m, int nth)
{
	int i, j;
	int temp;
	for (i = 0; i < n; i++)
	{
	    for (j = i + 1; j < n; j++)
		{
	        if (arr[i] < arr[j])
			{
	            temp = arr[i];
	            arr[i] = arr[j];
	            arr[j] = temp;
	        }
	    }
	}

	int mthMax = arr[m - 1];
	printf("Mth Maximum number: %d\n", mthMax);
	
	for (i = 0; i < n; i++)
	{
	    for (j = i + 1; j < n; j++)
		{
	        if (arr[i] > arr[j])
			{
	            temp = arr[i];
	            arr[i] = arr[j];
	            arr[j] = temp;
	        }
	    }
	}
	int nthMin = arr[nth - 1];
	printf("Nth Minimum number: %d\n", nthMin);
	int sum = mthMax + nthMin;
	int difference = mthMax - nthMin;
	printf("Sum of Mth maximum and Nth minimum: %d\n", sum);
	printf("Difference of Mth maximum and Nth minimum: %d\n", difference);
}

int main()
{
	int arr[] = {5, 2, 8, 1, 9, 6, 3, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int m = 4;
	int nth = 3;
	findMthMaxAndNthMin(arr, n, m, nth);
	return 0;
}
