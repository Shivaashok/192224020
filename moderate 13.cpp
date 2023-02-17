#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int avg,sum,i,j,m,n,total;
	int a[100][100];
	sum=0;
	printf("enter the number of rows and columns : ");
	scanf("%d%d",&n,&m);
	total=n*m;
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("Enter the numbers of array : ");
				scanf("%d",&a[i][j]);
				sum=sum+a[i][j];
			}
		}
	printf("Sum of elements of array : %d",sum);
	avg=sum/total;
	printf("\nAverage of the given array : %d",avg);
}

