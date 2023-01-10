#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[]={15, 14, 25, 14, 32, 14, 31},i,j,n,b,c,d;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=a[i];
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}

