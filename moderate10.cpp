#include<stdio.h>
int main()
{
	int a[10];
	int sum=0,i,n,b;
	float avg;
	printf("size");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		
	}
	avg=sum/n;
	printf("\n%f",avg);
	printf("\n%d",sum);
}
