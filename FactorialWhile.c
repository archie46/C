#include<stdio.h>
int main()
{
	int n;
	printf("Find The Factorial Of:");
	scanf("%d",&n);
	int x=n-1;
	int c=n;
	while(x>=1)
	{
		c=c*x;
        x--;	
	}
	printf("\nFactorial Of %d is %d.",n,c);
	return 0;
}
