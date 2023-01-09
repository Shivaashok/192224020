#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,i,j;
	printf("Enter a start and end of the range : ");
	scanf("%d%d",&a,&b);
	printf("Enter the number needed to exclude : ");
	scanf("%d",&j);
	printf("Range of given number : ");
	for(i=a;i<=b;i++)
	{
		if(i==j)
			continue;
		else
			printf("%d ",i);
	}
}

