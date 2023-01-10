#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int ini,fin;
	printf("Enter initial and final value : ");
	scanf("%d%d",&ini,&fin);
	int perfect(int ini,int fin);
	perfect(ini,fin);
}
int perfect(int ini,int fin)
{
	int j,i,sum=0;
	for(i=ini;i<fin;i++)//for number 
	{
		for(j=1;j<i;j++)//for divisor
		{
			if(i%j==0)
			{
				
				sum=sum+j;
				if(sum==i)
				{
					printf("%d",sum);
				}
			}
		}
	}
}
