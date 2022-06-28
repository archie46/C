#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("Enter A String:");
	scanf("%[^\n]%*c",s);
	int n,i,p;
	printf("Enter The Position:");
	scanf("%d",&p);
	printf("Enter The Number of Characters To Print:");
	scanf("%d",&n);
	if(p>0)
	{
		if(n>0)
    {
		
		for(i=p-1;i<(p+n-1);i++)
		{
			printf("%c",s[i]);
		}
	}
	  else if(n==0)
		{
			for(i=p-1;i<strlen(s);i++)
			{
				printf("%c",s[i]);
			}
		}
	  else
	    printf("Invalid Input");
	}
	else if(p==0)
	{
		if(n!=0)
		{
		
		for(i=0;i<n;i++)
		{
			printf("%c",s[i]);
		}
	    }
	    else
	    printf("%s",s);
	}
	else
	    printf("Invalid Input");
	return 0;
}
