#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d,arm,temp;
	arm=0;
	printf("enter a number :");
	scanf("%d",&b);
	temp=b;
	while(b!=0)
		{
			c=b%10;
			b=b/10;
			d=c*c*c;
			arm=arm+d;
		}
		{
			if(arm==temp)
				printf("the given number is armstrong number");
			else 
			printf("the given is not a armstrong number");
		}
	
}
