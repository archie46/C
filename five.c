#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter A 5-digit Number:");
	scanf("%d",&n);
	if(i>1000)
	printf("Invalid Input");
	else
	{
			for(i=n;i>0;i=i/10)
	{
		sum+=i%10;
	}
	printf("Sum:%d",sum);
	}
	return 0;
}
