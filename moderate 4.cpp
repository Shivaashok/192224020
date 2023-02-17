#include<stdio.h>
int main()
{
	int i,a,b,ini,fin,odd,even;
	printf("Enter initial and final value : ");
	scanf("%d%d",&ini,&fin);
	printf("Even");
	if(ini<fin);
	{
		for(i=ini;i<=fin;i++)
		{
			if(i>0)
			{
				if(i%2==0)
				{
					printf("%d",i);
					
				}
			}
		}
		printf("odd");
		for(i=ini;i<=fin;i++)
		{
			if(i>0)
			{
				if(i%2!=0)
				printf("%d",i);
			}
		}
	}
	else
	printf("Invlaid");
}
