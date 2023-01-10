#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,arr[100],i,*j,sum=0;
	printf("Enter the maximum size of the array : ");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	j=arr;
	for(i=0;i<a;i++)
	{
		sum=sum+*(j+i);
	}
	printf("sum of given array is %d ",sum);
}

