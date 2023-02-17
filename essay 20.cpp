#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int sub1,sub2,sub3,sub4;
	printf("Enter mark of subject 1 : ");
	scanf("%d",&sub1);
	printf("Enter mark of subject 2 :");
	scanf("%d",&sub2);
	printf("Enter mark of subject 3 :");
	scanf("%d",&sub3);
	printf("Enter mark of subject 4 :");
	scanf("%d",&sub4);
	int total=((sub1+sub2+sub3+sub4)/400)*100;
	if(total>75)
	printf("grade is distinction");
	else if (total<75&&total>=60)
	printf("grade is 1st division");
	else if (total>60&&total>=50)
	printf("grade is 2nd division");
	else if (total>=40&&total<50)
	printf("grade is 3rd division");
	else
	printf("fail");
}
