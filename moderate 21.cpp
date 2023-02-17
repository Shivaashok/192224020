#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	void rev(int a);
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	rev(a);
}
void rev(int a)
{
	int b,d,c=0;
	
	while(a!=0)
	{
		
		b=a%10;
		c=c*10 +b;
		a=a/10;
		
	}
	printf("%d",c);
}
