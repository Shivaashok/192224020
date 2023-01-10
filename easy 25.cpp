#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	
	int maximum();
	maximum();
}
int maximum()
{
	int n,i,max,a[]={1,2,3,5,4};
	max=a[0];
	n=sizeof(a)/sizeof(a[0]);
	for(i=1;i<n;i++)
	{
		if(max>a[i])
		continue;
		else
		max=a[i];
	}
	printf("maximum of given number is : %d",max);
}

