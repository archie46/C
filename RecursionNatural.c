#include<stdio.h>
int add(int n)
{
	if(n==1)
	return 1;
	else
	return (n+add(n-1));
}
int main()
{
	printf("Sum Of First 25 Natural Numbers:%d",add(25));
	return 0;
}
