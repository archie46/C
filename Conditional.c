#include<stdio.h>
int main()
{
	int a=3;
	int b=2;
	int c=4;
	c+=a>b?a--:++b;
	printf("%d %d %d",a,b,c);
	return 0;
}
