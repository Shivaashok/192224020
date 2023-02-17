#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,m,p,q,i,j,k,a[50][50],b[50][50],c[50][50],sum;
	printf("Enter rows and columns of first matrix : \n");
	scanf("%d%d",&m,&n);
	printf("Enter elements of first matrix :");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter rows and columns of second matrix : \n");
	scanf("%d%d",&p,&q);
	printf("Enter elements of second matrix :");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("first matrix :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("second matrix :\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	if(n==p)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				sum=0;
				for(k=0;k<m;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
			}
		}
	}
	else
	{
		printf("Enter as the number of colums of first is equal to rows of second ");
	}
	printf("multiplied matrix = \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

