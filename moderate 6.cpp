#include<stdio.h>
float ratee()
	{
		float choice,rate,p,n;
		float rate1;
		printf("Choose : 1) Senior citizer 2) Non senior citizer\nEnter your choice : ");
		scanf("%f",&choice);
		if(choice==1)
			rate=12;
		else
			rate=10;
		printf("Enter your principal : ");
		scanf("%f",&p);
		printf("Number of years : ");
		scanf("%f",&n);
		rate1=(p*n*rate)/100;
		printf("Your rate of intrest : %f",rate1);
	}
int main()
{
	
	ratee();
}
