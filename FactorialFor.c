#include<stdio.h>
int main()
{
	int i=1,f=1,num;
	printf("Input The Number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	printf("The Factorial Of %d is : %d ",num,f);
	return 0;
}
