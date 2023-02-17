#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
	char a[30],b[30];
	int m,n,i,j,count=0;
	printf("Enter first string : ");
	gets(a);
	m=strlen(a);
	printf("Enter second string : ");
	gets(b);
	n=strlen(b);
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]==b[j])
				{
					count++;
					break;
				}
			}
		}
		if(count==m)
			printf("Given strings are anagram");
		else	
			printf("They are not anagram ");
	}
	else
	printf("They are not anagram ");
	
}

