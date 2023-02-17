#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,a[]={16, 18, 27, 16, 23, 21, 19},b,i,count=0;
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter a number to search : ");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			printf("The position of given number is : %d\n",i+1);
			count++;
		}
	}
	if(count==0)
	printf("Enter a number that exists in the array ");
	
}

