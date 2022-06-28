#include<stdio.h>
int main()
{
	float n,i,r;
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		r+=(1/i);
	}
	printf("%f",r);
	return 0;
}
