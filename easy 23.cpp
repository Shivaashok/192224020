#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a;
	printf("Enter a number you want square : ");
	scanf("%d",&a);
	int square(int a);
	square(a);
}
void square(int a)
{
	printf("square of given number is : %d",a*a);
}
