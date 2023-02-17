#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	int power(int a,int b);
	printf("1) Add\n2) subtract\n3) multiplication\n4) Division\n5) power(first number is base and second is power)\nEnter your choice : ");
	scanf("%d",&c);
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	if(a<b && c==4)
	printf("Enter a valid number ");
	else
	{
		if(c==1)
		printf("Sum of two numbers are : %d",a+b);
		else if(c==2)
		printf("The difference of two number : %d",a-b);
		else if(c==3)
		printf("Product of two numbers : %d",a*b);
		else if(c==4)
		printf("The quotient and reminder of two numbers are %d and %d respectively",a/b,a%b);
		else if(c==5)
		power(a,b);
		else
		printf("Enter a valid numebr");
		return 0;
	}
}
int power(int a,int b)
{
	int i,c=1;
	for(i=1;i<=b;i++)
	{
		c=c*a;
	}
	printf("power of given numbers : %d",c);
}
