#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,*c,*d;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	c=&a,d=&b;
	if(*c>*d)
	printf("%d is the greater number ",a);
	else
	printf("%d is the greater number ",b);
}

