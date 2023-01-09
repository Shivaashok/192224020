#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,i,j,k;
printf("Enter the number  of rows needed : ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
	for(k=a;k>=i;k--)
		printf(" ");
		for(j=i;j>=1;j--)
		printf("%d ",j*j);
	printf("\n");
}
}

