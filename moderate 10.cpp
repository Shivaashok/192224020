#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,sum=0,n,avg,a[]={16, 18, 27, 16, 23, 21, 19};
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("Average of given number is : %d\n",avg);
	printf("sum of given number is : %d",sum);
}

