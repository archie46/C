#include<stdio.h>
int main()
{
	int count=0,sum=0,num;
	while(count<5)
	{
		printf("Enter Number \n");
		scanf("%d",&num);
		sum+=num;
		++count;
	}
	printf("%d",sum);
	return 0;
}

