#include<stdio.h>
int main()
{
	int n,i,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i*i;
		printf("%d \t",i);
		printf("%d \n",i*i);
	}
	printf("%d",sum);
	return 0;
}
