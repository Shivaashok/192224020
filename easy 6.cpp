#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int age,a,b;
	printf("Enter your age : ");
	scanf("%d",&age);
	if(age>=18)
	printf("You are eligible to vote ");
	else if(0<age<18)
	printf("you are not eligible to vote, you will be eliligble to vote after %d",18-age);
	else 
	printf("Entered age is invalid ");
}

