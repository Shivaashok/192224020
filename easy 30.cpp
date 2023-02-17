#include<stdio.h>
#include<conio.h>
#include<math.h>

struct student 
{
	char name[30];
	int marks[3];
	int total;
	float percentage;
};
int main()
{
	struct student std;
	int i;
	printf("Enter the name of stuent : ");
	gets(std.name);
	printf("\nEnter the marks of student : ");
	std.total=0;
	for(i=0;i<3;i++)
	{
		printf("\nMarks of the subject %d ",i+1);
		scanf("%d",&std.marks[i]);
		std.total+=std.marks[i];
	}
	std.percentage=(float)((float)std.total/(float)300)*100;
	printf("\nName of the student %s ",std.name);
	printf("\ntotal marks of student %d",std.total);
	printf("\nPercentage of percentage %2f",std.percentage);
	return 0;
}

