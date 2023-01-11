#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n;
	printf("Enter number of students : ");
	scanf("%d",&n);
	struct std
		{
			char name[10];
			int roll;
			int mark;
		}s[n];
	int i;
	printf("Enter your name, roll, mark following one by other ");
	for(i=0;i<n;i++)
	{
		printf("\nEnter detail of person %d\n",i+1);
		scanf("%s %d %d",s[i].name,&s[i].roll,&s[i].mark);
	}
	for(i=0;i<n;i++)
	{
		printf("\nDetail of person %d ",i+1);
		printf("\nName : %s\nRoll number : %d\nMark : %d\n",s[i].name,s[i].roll,s[i].mark);
		printf("___________________\n");
	}
}

