#include<stdio.h>
int fact(int a)
{
	if(a==0||a==1)
	return 1;
	else
    return ((a)*fact(a-1));
}
int main()
{
	int b;
	printf("Find The Factorial Of:");
	scanf("%d",&b);
	printf("\nFactorial Of %d is %d.",b,fact(b));
	return 0;
}
