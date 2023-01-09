#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter a number : ");
	scanf("%d",&a);
	if(a>0)
	{
		if(a%2==0)
			printf("%d is a even number ",a);
		else if(a%2==1)
			printf("%d is a odd number ",a);
		else
			printf("Enter a valid number ");
	}
	else 
		printf("Enter number is invalid ");
}

