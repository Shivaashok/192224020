#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a;
	printf("Entr a number to check odd or even : ");
	scanf("%d",&a);
	int check(int a);
	check(a);
}
int check(int a)
{
	if(a<0)
	printf("Enter a valid number ");
	else if(a%2==0)
	printf("Given number %d is even ",a);
	else 
	printf("Given number %d is odd ",a);
}

