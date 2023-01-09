#include<stdio.h>
#include<conio.h>
#include<math.h>
#define x 100
int main()
{
	int i,j,k,m,n,a[x][x],b[x][x];
	printf("Enter row and column : ");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("given matrix : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("transpose : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
	printf("\n");
	}
	
}

