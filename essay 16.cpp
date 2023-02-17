#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int fact(int a);
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Answer : %d",fact(num));
}
int fact(int a)
{
	int j,sum=0,fac=1;
	for(int i=1;i<=a;i++)
	{
		fac=1;
		for(j=1;j<=i;j++)
		{
			fac=fac*j;
		}
		sum=sum+(fac/i);
	}
	return sum;
}

