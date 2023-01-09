#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[]={26, 28, 37, 26, 33, 31, 29},n,b=0,i,j;
	printf("compo numbers are : ");
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			b++;
			break;
		}
	if(b>0)
	printf("%d ",a[i]);
	b=0;
	}

}
