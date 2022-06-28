#include<stdio.h>
int main()
{
	int n,i,f,g=0,d;
	printf("Enter A Number:");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10)
	{
		f=i%10;
		g=g*10+f;
	}
	printf("Output:");
	for(i=g;i>=1;i=i/10)
	{
		d=i%10;
		if(d==9)
		printf("0");
		else
		printf("%d",d+1);
	}
	return 0;
}
