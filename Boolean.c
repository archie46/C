#include<stdio.h>

int main()
{
	int r1,r2,s=10,a=5,b=4,c=8;
	r1=!(s==10);
	r2=(a>b&&(a+b)>2*c)||(5*b>2*c);
	printf("%d %d",r1,r2);
	return 0;
}
