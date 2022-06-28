#include<stdio.h>
int main()
{
	int n,i;
	printf("Find The Factorial Of:");
	scanf("%d",&n);
	int i=n-1;
	int c=n;
	while(i>=1)
	{
		c=c*i;
        i--;	
	}
	return 0;
}
