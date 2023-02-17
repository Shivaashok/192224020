#include<stdio.h>
int main()
{
	char a[100];
	int i,j,v=0,c=0,n=sizeof(a)/sizeof(a[0]);
	printf("enter statement : ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='E'||a[i]=='e'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		{
			v++;	
		}
		else
		c++;
	}
	printf("v =%d",v);
	printf("c =%d",c);
}

