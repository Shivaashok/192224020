#include<stdio.h>
int main()
{
	int num,sum=0,a,b,c,d;
	printf("enter : ");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
		
	}
	printf("sum:%d",sum);
}
