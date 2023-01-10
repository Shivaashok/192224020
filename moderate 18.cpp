#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]),i,*p,j,sum=0;
	p=a;
	for(i=0;i<n;i++)
	{
		printf("%d ",*p);
		p++;
	}
}

