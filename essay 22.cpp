#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float bo;
	int s,temp;
	char g;
	printf("Enter your grade : ");
	scanf("%c",&g);
	if(g=='a'||g=='A')
	bo=5;
	else if(g=='b'||g=='B')
	bo=10;
	else
	printf("Enter a valid choice");
	printf("Enter your salary : ");
	scanf("%d",&s);
	if(s<=0)
	printf("Enter a valid salary ");
	else
	{
		if(s<10000)
		bo=bo+2;
		temp=s;
		s=s+s*(bo/100);
		printf("Your salary : %d\nYour bonous : %.0f",s,temp*(bo/100));
	}
}

