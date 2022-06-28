#include<stdio.h>
int main()
{
	char s[100];
	printf("Enter A String:\n");
	scanf("%[^\n]%*c",s);
	int n,i;
	printf("\nEnter The Position and Number of Characters To Print:\n");
	scanf("%d",&n);
	if(n>0)
	{
		for(i=n-1;i<(2*n);i++)
		{
			printf("%c",s[i]);
		}
	}
	else if(n==0)
		printf("%s",s);
	else
	    printf("Invalid Input");
	return 0;
}
