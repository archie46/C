#include<stdio.h>
int check(int a)
{
	int b;
	b=a%2;
	if(b==0)
	return 1;
	else
	return 0;
}
int main()
{
	int c;
	scanf("%d",&c);
	if(check(c))
	printf("Even");
	else
	printf("Odd");
	return 0;
}
