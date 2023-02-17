#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int date,month,year,i,count=0;
	printf("Enter the date : ");
	scanf("%d",&date);
	printf("Enter the month : ");
	scanf("%d",&month);
	printf("Enter the year : ");
	scanf("%d",&year);
	if(1<=date<=31)
	{
		if(1<=month<=12)
		{
			if(year>1)
			{
				if(year%400==0&&year%4==0)
				printf("Given date is from a leap year ");
				else
				{
					printf("Entered date id not a leap year ");
					if(year%400!=0&&year%4!=0)
					{
						for(i=year;year%400!=0&&year%4!=0;i--)
					
							continue;		
					}
					printf("next leap year is : %d",year);
				}
			}
			else 
			printf("Enter valid year");
		}
		else
		printf("Enter valid month ");
	}
	else
	printf("Enter valid date ");
}

