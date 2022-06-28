#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="A";
	char b[]="B";
	int i;
	char c[100];
	strcat(b,a);
	printf("%s\n",b);
for (i=0;i<10;i++)
{
	strcat(c,b);
		printf("%s\n",c);
	}	
}
