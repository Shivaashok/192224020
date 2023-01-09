#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[]={16, -18, 27, -16, 23, -21, 19},i,j,count=0;
	j=sizeof(a)/sizeof(a[0]);
	for(i=0;i<j;i++)
	{
		if(a[i]<0)
		count++;
	}
	printf("There are %d negative numbers ",count);
}

