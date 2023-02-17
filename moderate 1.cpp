#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("Enter :");
	scanf("%d",&a);
	if(a%4==0&&a%400==0||a%100!=0)
	printf("year %d leap",a);
	else 
	printf("not a leap ");
	return 0;
}
