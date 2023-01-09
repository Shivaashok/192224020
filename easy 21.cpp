#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int c,a,b;
	int adg(int*var,int *vare);
	//add numbers by referance 
	printf("Enter : ");
	scanf("%d%d",&a,&b);
	c=adg(&a,&b);
	printf("d %d",c);
}
int adg(int *var,int *vare)
{
	int a1,b1;
	a1=*var+*vare;
	return (a1);	
}
